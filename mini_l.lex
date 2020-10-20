	/* Harrison Yee 862023089
	   Andrew Chen */
%{

int currLine = 1, currPos = 1;
int numNumbers = 0;
int numOperators = 0;
int numParens = 0;
int numEquals = 0;

%}

DIGIT	[0-9]
ID	^[_a-zA-Z]+[a-zA-Z0-9_]*[^_]$
COMMENTS	[#][#].*

%%

	/* Other Special Symbols */
";"		{printf("SEMICOLON\n"); currPos += yyleng;}
":"		{printf("COLON\n"); currPos += yyleng;}
","		{printf("COMMA\n"); currPos += yyleng;}
"("		{printf("L_PAREN\n"); currPos += yyleng;}
")"		{printf("R_PAREN\n"); currPos += yyleng;}
"["		{printf("L_SQUARE_BRACKET\n"); currPos += yyleng;}
"]"		{printf("R_SQUARE_BRACKET\n"); currPos += yyleng;}
":="		{printf("ASSIGN\n"); currPos += yyleng;}

	/* Arithmetic Operators */
"-"		{printf("SUB\n"); currPos += yyleng;}
"+"		{printf("PLUS\n"); currPos += yyleng;}
"*"		{printf("MULT\n"); currPos += yyleng;}
"/"		{printf("DIV\n"); currPos += yyleng;}
"%"		{printf("MOD\n"); currPos += yyleng;}

	/* Comparison Operators */
"=="		{printf("EQ\n"); currPos += yyleng;}
"<>"		{printf("NEQ\n"); currPos += yyleng;}
"<"		{printf("LT\n"); currPos += yyleng;}
">"		{printf("GT\n"); currPos += yyleng;}
"<="		{printf("LTE\n"); currPos += yyleng;}
">="		{printf("GTE\n"); currPos += yyleng;}

	/* Reserved Words */
"function"	{printf("FUNCTION\n"); currPos += yyleng;}
"beginparams"	{printf("BEGIN_PARAMS\n"); currPos += yyleng;}
"endparams"	{printf("END_PARAMS\n"); currPos += yyleng;}
"beginlocals"	{printf("BEGIN_LOCALS\n"); currPos += yyleng;}
"endlocals"	{printf("END_LOCALS\n"); currPos += yyleng;}
"beginbody"	{printf("BEGIN_BODY\n"); currPos += yyleng;}
"endbody"	{printf("END_BODY\n"); currPos += yyleng;}
"integer"	{printf("INTEGER\n"); currPos += yyleng;}
"array"		{printf("ARRAY\n"); currPos += yyleng;}
"of"		{printf("OF\n"); currPos += yyleng;}
"if"		{printf("IF\n"); currPos += yyleng;}
"then"		{printf("THEN\n"); currPos += yyleng;}
"endif"		{printf("ENDIF\n"); currPos += yyleng;}
"else"		{printf("ELSE\n"); currPos += yyleng;}
"while"		{printf("WHILE\n"); currPos += yyleng;}
"do"		{printf("DO\n"); currPos += yyleng;}
"for"		{printf("FOR\n"); currPos += yyleng;}
"beginloop"	{printf("BEGINLOOP\n"); currPos += yyleng;}
"endloop"	{printf("ENDLOOP\n"); currPos += yyleng;}
"continue"	{printf("CONTINUE\n"); currPos += yyleng;}
"read"		{printf("READ\n"); currPos += yyleng;}
"write"		{printf("WRITE\n"); currPos += yyleng;}
"and"		{printf("AND\n");currPos += yyleng;}
"or"		{printf("OR\n"); currPos += yyleng;}
"not"		{printf("NOT\n"); currPos += yyleng;}
"true"		{printf("TRUE\n"); currPos += yyleng;}
"false"		{printf("FALSE\n"); currPos += yyleng;}
"return"	{printf("RETURN\n"); currPos += yyleng;}

	/* Identifiers and Numbers */
(\.{DIGIT}+)|({DIGIT}+(\.{DIGIT}*)?([eE][+-]?[0-9]+)?)   {printf("NUMBER %s\n", yytext); currPos += yyleng; numNumbers++;}
{ID}		{printf("IDENT %s\n", yytext); currPos += yyleng;}

	/* Other */
[ \t]+		{currPos += yyleng;} 	/* ignore white space */
"\n"		{currLine++; currPos = 1;} 	/* ignore newline */
{COMMENTS}	{currPos += yyleng;} 	/* ignore comments */

[{DIGIT}][{ID}]* {printf("Error at line %d, column %d: identifier \"%s\"\n must begin with a letter", currLine, currPos, yytext); exit(0);}
[{ID}][_]+ {printf("Error at line %d, column %d: identifier \"%s\"\n cannot end with an underscore", currLine, currPos, yytext); exit(0);}

.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%


int main(int argc, char ** argv) {

yylex();

}
