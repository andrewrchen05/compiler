%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "y.tab.h"
 #include <string.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 int yylex();
%}

%union{
  char* cval;
  int ival;
}

%token FUNCTION
%token BEGIN_PARAMS
%token END_PARAMS
%token BEGIN_LOCALS
%token END_LOCALS
%token BEGIN_BODY
%token END_BODY
%token INTEGER
%token ARRAY
%token OF
%token IF
%token THEN
%token ENDIF
%token ELSE
%token WHILE
%token DO
%token FOR
%token BEGINLOOP
%token ENDLOOP
%token CONTINUE
%token READ
%token WRITE
%token AND
%token OR
%token NOT
%token TRUE
%token FALSE
%token RETURN

%token SUB
%token ADD
%token MULT
%token DIV
%token MOD

%token EQ
%token NEQ
%token LT
%token GT
%token LTE
%token GTE

%token SEMICOLON
%token COLON
%token COMMA
%token L_PAREN
%token R_PAREN
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token ASSIGN

%token IDENT
%token NUMBER


%type<cval> IDENT
%type<ival> NUMBER

%start program

%%

program: /* epsilo */ {printf("program -> epsilon\n");}
       | program function {printf("program -> program function\n");}
       ; 

function: FUNCTION IDENT SEMICOLON {printf("function -> FUNCTION IDENT SEMICOLON\n");}
	;

%%

int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", line, position, msg);
}
