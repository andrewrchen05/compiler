%{
 #include "y.tab.h"
 int currLine = 1;
 int currPos = 1;
%}

DIGIT           [0-9]
IDENTIFIER      ([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])|([a-zA-Z])
COMMENTS        [#][#].*

%%

                /*Reserved Keywords*/
function        {currPos += yyleng; return FUNCTION;}
beginparams     {currPos += yyleng; return BEGIN_PARAMS;}
endparams       {currPos += yyleng; return END_PARAMS;}
beginlocals     {currPos += yyleng; return BEGIN_LOCALS;}
endlocals       {currPos += yyleng; return END_LOCALS;}
beginbody       {currPos += yyleng; return BEGIN_BODY;}
endbody         {currPos += yyleng; return END_BODY;}
integer         {currPos += yyleng; return INTEGER;}
array           {currPos += yyleng; return ARRAY;}
of              {currPos += yyleng; return OF;}
if              {currPos += yyleng; return IF;}
then            {currPos += yyleng; return THEN;}
endif           {currPos += yyleng; return ENDIF;}
else            {currPos += yyleng; return ELSE;}
while           {currPos += yyleng; return WHILE;}
do              {currPos += yyleng; return DO;}
for     	{currPos += yyleng; return FOR;}
beginloop       {currPos += yyleng; return BEGINLOOP;}
endloop         {currPos += yyleng; return ENDLOOP;}
continue        {currPos += yyleng; return CONTINUE;}
read            {currPos += yyleng; return READ;}
write           {currPos += yyleng; return WRITE;}
and             {currPos += yyleng; return AND;}
or              {currPos += yyleng; return OR;}
not             {currPos += yyleng; return NOT;}
true            {currPos += yyleng; return TRUE;}
false           {currPos += yyleng; return FALSE;}
return  	{currPos += yyleng; return RETURN;}
                /*END of Reserved keywords*/

        /* Arithmetic Operators */
"-"             {currPos += yyleng; return SUB;}
"+"             {currPos += yyleng; return ADD;}
"*"             {currPos += yyleng; return MULT;}
"/"             {currPos += yyleng; return DIV;}
"%"             {currPos += yyleng; return MOD;}

        /* Comparison Operators */
"=="            {currPos += yyleng; return EQ;}
"<>"            {currPos += yyleng; return NEQ;}
"<"             {currPos += yyleng; return LT;}
">"             {currPos += yyleng; return GT;}
"<="            {currPos += yyleng; return LTE;}
">="            {currPos += yyleng; return GTE;}
                /*END of operands*/

        /* Other Special Symbols */
";"             {currPos += yyleng; return SEMICOLON;}
":"             {currPos += yyleng; return COLON;}
","             {currPos += yyleng; return COMMA;}
"("             {currPos += yyleng; return L_PAREN;}
")"             {currPos += yyleng; return R_PAREN;}
"["             {currPos += yyleng; return L_SQUARE_BRACKET;}
"]"             {currPos += yyleng; return R_SQUARE_BRACKET;}
":="            {currPos += yyleng; return ASSIGN;}


                /*Identifiers and Numbers*/
{DIGIT}+		{printf(currPos += yyleng; return NUMBER;}

{IDENTIFIER}            {currPos += yyleng; return IDENT;}

[0-9_]+{IDENTIFIER}      {printf("Error at line %d, currPos %d: Identifier \"%s\" must begin with a letter\n",currLine,currPos,yytext);currPos += yyleng;exit(0);}

{IDENTIFIER}[_]+               {printf("Error at line %d, currPos %d: Identifier \"%s\" cannot end with an underscore\n",currLine,currPos,yytext);currPos += yyleng;exit(0);}

        /* Other */
[ \t]           {currPos += yyleng;}    /* ignore white space */
[\n]            {currLine++; currPos = 1;}      /* ignore newline */
{COMMENTS}      {currPos += yyleng;}    /* ignore comments */

                /*Unidentified Characters*/
.               {printf("Error at line %d, currPos %d :unrecognized symbol \"%s\"\n",currLine,currPos,yytext);exit(0);}
%%


int main(int argc, char* argv[])
{
    if(argc == 2)
    {
        yyin = fopen(argv[1],"r");
        yylex();
        fclose(yyin);
    }
    else
        yylex();
}
