%{
 #include "stdio.h"
 #include "stdlib.h"
 #include "y.tab.h"
 #include "string.h"
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 int yylex();
%}

%union{
  char* cval;
  int ival;
}

%token FUNCTION IDENT SEMICOLON NUMBER

%type<cval> IDENT
%type<ival> NUMBER


%start program

%%

program: /* epsilo */ {printf("program -> epsilon\n");}
       | program function {printf("program -> program function\n");}
       ; 

function: FUNCTION IDENT SEMICOLON {printf("function -> FUNCTION IDENT SEMICOLON\n");}
	;

ident:  IDENT {printf("ident -> IDENT %s\n", $1);}

%%

int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}