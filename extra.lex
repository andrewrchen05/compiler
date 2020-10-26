%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
%}

	int row = 1; 
	int column = 1;

%%

		/*Reserved Keywords*/
function	{printf("FUNCTION\n");column=column+strlen(yytext);}
beginparams	{printf("BEGIN_PARAMS\n");column=column+strlen(yytext);}
endparams	{printf("END_PARAMS\n"); currPos += yyleng;}
beginlocals	{printf("BEGIN_LOCALS\n"); currPos += yyleng;}
endlocals	{printf("END_LOCALS\n"); currPos += yyleng;}
beginbody	{printf("BEGIN_BODY\n"); currPos += yyleng;}
endbody	{printf("END_BODY\n"); currPos += yyleng;}
integer	{printf("INTEGER\n"); currPos += yyleng;}
array		{printf("ARRAY\n"); currPos += yyleng;}
of		{printf("OF\n"); currPos += yyleng;}
if		{printf("IF\n"); currPos += yyleng;}
then		{printf("THEN\n"); currPos += yyleng;}
endif		{printf("ENDIF\n"); currPos += yyleng;}
else		{printf("ELSE\n"); currPos += yyleng;}
while		{printf("WHILE\n"); currPos += yyleng;}
do		{printf("DO\n"); currPos += yyleng;}
for		{printf("FOR\n"); currPos += yyleng;}
beginloop	{printf("BEGINLOOP\n"); currPos += yyleng;}
endloop	{printf("ENDLOOP\n"); currPos += yyleng;}
continue	{printf("CONTINUE\n"); currPos += yyleng;}
read		{printf("READ\n"); currPos += yyleng;}
write		{printf("WRITE\n"); currPos += yyleng;}
and		{printf("AND\n");currPos += yyleng;}
or		{printf("OR\n"); currPos += yyleng;}
not		{printf("NOT\n"); currPos += yyleng;}
true		{printf("TRUE\n"); currPos += yyleng;}
false		{printf("FALSE\n"); currPos += yyleng;}
return	{printf("RETURN\n"); currPos += yyleng;}
		/*END of Reserved keywords*/

		/*Operands*/
"-"		{printf("SUB\n");column=column+strlen(yytext);}
"+"		{printf("ADD\n");column=column+strlen(yytext);}
"*"		{printf("MULT\n");column=column+strlen(yytext);}
"/"		{printf("DIV\n");column=column+strlen(yytext);}
"%"		{printf("MOD\n");column=column+strlen(yytext);}


"=="		{printf("EQ\n");column=column+strlen(yytext);}
"<>"		{printf("NEQ\n");column=column+strlen(yytext);}
"<"		{printf("LT\n");column=column+strlen(yytext);}
">"		{printf("GT\n");column=column+strlen(yytext);}
"<="		{printf("LTE\n");column=column+strlen(yytext);}
">="		{printf("GTE\n");column=column+strlen(yytext);}
		/*END of operands*/



		/*Comments*/
[##].*		row = row + 1; column=1;/*No need to count columns in comments, As Single line comments can not be followed by any code*/      
		

		
";"		{printf("SEMICOLON\n");column=column+strlen(yytext);}
":"		{printf("COLON\n");column=column+strlen(yytext);}
","		{printf("COMMA\n");column=column+strlen(yytext);}
"("		{printf("L_PAREN\n");column=column+strlen(yytext);}
")"		{printf("R_PAREN\n");column=column+strlen(yytext);}
"["		{printf("L_SQUARE_BRACKET\n");column=column+strlen(yytext);}
"]"		{printf("R_SQUARE_BRACKET\n");column=column+strlen(yytext);}
":="		{printf("ASSIGN\n");column=column+strlen(yytext);}


		/*Identifiers and Numbers*/
[0-9]+					{printf("NUMBER %s\n",yytext);column=column+strlen(yytext);}

[0-9|_][a-zA-Z0-9|_]*[a-zA-Z0-9|_]      {printf("Error at line %d, column %d: Identifier \"%s\" must begin with a letter\n",row,column,yytext);column=column+strlen(yytext);exit(0);} 
[a-zA-Z][a-zA-Z0-9|_]*[_]               {printf("Error at line %d, column %d: Identifier \"%s\" cannot end with an underscore\n",row,column,yytext);column=column+strlen(yytext);exit(0);} 
[a-zA-Z][a-zA-Z0-9|_]*[a-zA-Z0-9]	{printf("IDENT %s\n", yytext);column=column+strlen(yytext);/*Multi letter Identifier*/} 
[a-zA-Z][a-zA-Z0-9]*			{printf("IDENT %s\n", yytext);column=column+strlen(yytext);/*Single Letter Identifier and Multi letter Identifier with underscores */}


		/*Spaces and Tabs*/
[ ]         	column=column+1; 
[\t]		column=column+1;
[\n]		{row=row+1;column=1;}

		/*Unidentified Characters*/
.		{printf("Error at line %d, column %d :unrecognized symbol \"%s\"\n",row,column,yytext);exit(0);}
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
