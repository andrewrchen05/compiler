	/* Harrison Yee 862023089
	   Andrew Chen */
%{

%}

DIGIT[0-9]
ID[a-zA-Z0-9_]*	
COMMENTS[#][#].*

%%

	/* Other Special Symbols */
";"		{printf("SEMICOLON\n");}
":"		{printf("COLON\n");}
","		{printf("COMMA\n");}
"("		{printf("L_PAREN\n");}
")"		{printf("R_PAREN\n");}
"["		{printf("L_SQUARE_BRACKET\n");}
"]"		{printf("R_SQUARE_BRACKET\n");}
":="		{printf("ASSIGN\n");}

	/* Arithmetic Operators */
"-"		{printf("SUB\n");}
"+"		{printf("PLUS\n");}
"*"		{printf("MULT\n");}
"/"		{printf("DIV\n");}
"%"		{printf("MOD\n");}

	/* Comparison Operators */
"=="		{printf("EQ\n");}
"<>"		{printf("NEQ\n");}
"<"		{printf("LT\n");}
">"		{printf("GT\n");}
"<="		{printf("LTE\n");}
">="		{printf("GTE\n");}

	/* Reserved Words */
"function"	{printf("FUNCTION\n");}
"beginparams"	{printf("BEGIN_PARAMS\n");}
"endparams"	{printf("END_PARAMS\n");}
"beginlocals"	{printf("BEGIN_LOCALS\n");}
"endlocals"	{printf("END_LOCALS\n");}
"beginbody"	{printf("BEGIN_BODY\n");}
"endbody"	{printf("END_BODY\n");}
"integer"	{printf("INTEGER\n");}
"array"		{printf("ARRAY\n");}
"of"		{printf("OF\n");}
"if"		{printf("IF\n");}
"then"		{printf("THEN\n");}
"endif"		{printf("ENDIF\n");}
"else"		{printf("ELSE\n");}
"while"		{printf("WHILE\n");}
"do"		{printf("DO\n");}
"for"		{printf("FOR\n");}
"beginloop"	{printf("BEGINLOOP\n");}
"endloop"	{printf("ENDLOOP\n");}
"continue"	{printf("CONTINUE\n");}
"read"		{printf("READ\n");}
"write"		{printf("WRITE\n");}
"and"		{printf("AND\n");}
"or"		{printf("OR\n");}
"not"		{printf("NOT\n");}
"true"		{printf("TRUE\n");}
"false"		{printf("FALSE\n");}
"return"	{printf("RETURN\n");}

	/* Identifiers and Numbers */
{DIGIT}+ 	{printf("NUMBER %s\n", yytext);}	
{ID}		{printf("IDENT %s\n", yytext);}

	/* Other */
[ \t]+		/* ignore white space */
"\n"		/* ignore newline */
{COMMENTS}	/* ignore comments */
.		{printf("Error: unrecognized symbol \"%s\"\n", yytext); exit(0);}


%%


int main(int argc, char ** argv) {

yylex();

}
