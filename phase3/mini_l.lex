%{
#include <iostream>
#include <string>
#define YY_DECL yy::parser::symbol_type yylex()
#include "parser.tab.hh"

static yy::location loc;
 int currLine = 1;
 int currPos = 1;
%}

%option noyywrap

%{
#define YY_USER_ACTION loc.columns(yyleng);
%}
        /* your definitions here */

DIGIT           [0-9]
IDENT      ([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])|([a-zA-Z])
COMMENTS        [#][#].*

%%

%{
loc.step();
%}

                /*Reserved Keywords*/
function       {return yy::parser::make_FUNCTION(loc);}
beginparams       {return yy::parser::make_BEGIN_PARAMS(loc);}
endparams       {return yy::parser::make_END_PARAMS(loc);}
beginlocals     {return yy::parser::make_BEGIN_LOCALS(loc);}
endlocals     {return yy::parser::make_END_LOCALS(loc);}
beginbody       {return yy::parser::make_BEGIN_BODY(loc);}
endbody         {return yy::parser::make_END_BODY(loc);}
integer         {return yy::parser::make_INTEGER(loc);}
array           {return yy::parser::make_ARRAY(loc);}
of              {return yy::parser::make_OF(loc);}
if              {return yy::parser::make_IF(loc);}
then            {return yy::parser::make_THEN(loc);}
endif           {return yy::parser::make_ENDIF(loc);}
else            {return yy::parser::make_ELSE(loc);}
while           {return yy::parser::make_WHILE(loc);}
do              {return yy::parser::make_DO(loc);}
for     	{return yy::parser::make_FOR(loc);}
beginloop       {return yy::parser::make_BEGINLOOP(loc);}
endloop         {return yy::parser::make_ENDLOOP(loc);}
continue        {return yy::parser::make_CONTINUE(loc);}
read            {return yy::parser::make_READ(loc);}
write           {return yy::parser::make_WRITE(loc);}
and             {return yy::parser::make_AND(loc);}
or              {return yy::parser::make_OR(loc);}
not             {return yy::parser::make_NOT(loc);}
true            {return yy::parser::make_TRUE(loc);}
false           {return yy::parser::make_FALSE(loc);}
return  	{return yy::parser::make_RETURN(loc);}
                /*END of Reserved keywords*/

        /* Arithmetic Operators */
"-"             {return yy::parser::make_SUB(loc);}
"+"             {return yy::parser::make_ADD(loc);}
"*"             {return yy::parser::make_MULT(loc);}
"/"             {return yy::parser::make_DIV(loc);}
"%"             {return yy::parser::make_MOD(loc);}

        /* Comparison Operators */
"=="            {return yy::parser::make_EQ(loc);}
"<>"            {return yy::parser::make_NEQ(loc);}
"<"             {return yy::parser::make_LT(loc);}
">"             {return yy::parser::make_GT(loc);}
"<="            {return yy::parser::make_LTE(loc);}
">="            {return yy::parser::make_GTE(loc);}
                /*END of operands*/

        /* Other Special Symbols */
";"             {return yy::parser::make_SEMICOLON(loc);}
":"             {return yy::parser::make_COLON(loc);}
","             {return yy::parser::make_COMMA(loc);}
"("             {return yy::parser::make_L_PAREN(loc);}
")"             {return yy::parser::make_R_PAREN(loc);}
"["             {return yy::parser::make_L_SQUARE_BRACKET(loc);}
"]"             {return yy::parser::make_R_SQUARE_BRACKET(loc);}
":="            {return yy::parser::make_ASSIGN(loc);}


                /*Identifiers and Numbers*/
{DIGIT}+		{currPos += yyleng; return yy::parser::make_NUMBER(std::stoi(yytext), loc);}

{IDENT}            {currPos += yyleng; /* yylval.string=strdup(yytext); */ return yy::parser::make_IDENT(yytext, loc);}

[0-9_]+{IDENT}      {printf("Error at line %d, currPos %d: Identifier \"%s\" must begin with a letter\n",currLine,currPos,yytext);currPos += yyleng;exit(0);}

{IDENT}[_]+               {printf("Error at line %d, currPos %d: Identifier \"%s\" cannot end with an underscore\n",currLine,currPos,yytext);currPos += yyleng;exit(0);}

        /* Other */
[ \t]           {currPos += yyleng;}    /* ignore white space */
[\n]            {currLine++; currPos = 1;}      /* ignore newline */
{COMMENTS}      {currPos += yyleng;}    /* ignore comments */

                /*Unidentified Characters*/
.               {printf("Error at line %d, currPos %d :unrecognized symbol \"%s\"\n",currLine,currPos,yytext);exit(0);}

 <<EOF>>	{return yy::parser::make_END(loc);}
	/* your rules end */

%%