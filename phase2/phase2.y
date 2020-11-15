
%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "string.h"
 #include "y.tab.h"

 extern int currLine;
 extern int currPos;
 void yyerror(const char *msg);
 int yylex();
 FILE * yyin;
%}

%union{
  double dval;
  int ival;
}

%error-verbose
%start input
%token FUNCTION IDENT SEMICOLON NUMBER

%token <cval> IDENT
%type <cval> NUMBER

%start program


%% 

program: /* epsilon */  {printf("program -> epsilon\n");}
        | program function {printf("program -> program function\n");}
        ;

function: FUNCTION ident SEMICOLON (printf("function -> FUNCTION ident SEMICOLON\N");)
        ;

ident: IDENT   (printf("ident -> IDENT %s\n", $1);)

%%

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
