%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "y.tab.h"
 #include <string.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern const char* yytext;
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

program: /* epsilon */ {printf("program -> epsilon\n");}
       | program functions {printf("program -> program function\n");}
       ; 

functions: /* epsilon */ {printf("functions -> epsilon\n");}
         | function functions {printf("functions -> function functions\n");}
         ;

function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY{printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
	     ;

declarations: /* epsilon */ {printf("declarations -> epsilon\n");}
            | declaration SEMICOLON declarations {printf("declarations -> declaration SEMICOLON declarations\n");}
            ;

declaration: identifiers COLON INTEGER {printf("declaration -> identifiers COLON INTEGER\n");}
           | idtifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> \n");}
           | idtifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> \n");}
           ;

identifiers: ident {printf("identifiers -> ident\n");}
           | ident COMMA identifiers {printf("identifiers -> identifier COMMA identifiers\n");}
           ;

ident: IDENT {printf("IDENT %s\n", yytext);}
     ;

statements: /* epsilon */ {printf("statements -> epsilon\n");}
          | statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");}
          ;

statement: var ASSIGN expression {printf("statement -> var ASSIGN expression\n");}
         | IF bool-expr THEN statements ENDIF {printf("statement -> IF bool-expr THEN statements ENDIF\n");}
         | IF bool-expr THEN statements ELSE statements ENDIF {printf("statement -> IF bool-expr THEN statements ELSE statements ENDIF\n");}
         | WHILE bool-expr BEGINLOOP statements ENDLOOP {printf("statement -> WHILE bool-expr BEGINLOOP statements ENDLOOP\n");}
         | do BEGINLOOP statements ENDLOOP WHILE bool-expr {printf("statement -> do BEGINLOOP statements ENDLOOP WHILE bool-expr\n");}
         | FOR var ASSIGN NUMBER SEMICOLON bool-expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool-expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
         | READ vars {printf("READ vars\n");}
         | WRITE vars {printf("WRITE vars\n");}
         | CONTINUE {printf("CONTINUE\n");}
         | RETURN expression {printf("RETURN expression\n");}
         ;

bool-expr: relation-and-expr {printf("bool-expr -> relation-and-expr\n");}
         | relation-and-expr OR relation-and-expr {printf("bool-expr -> relation-and-expr OR relation-and-expr\n");}
         ;

relation-and-expr: relation-expr {printf("relation-and-expr -> relation-expr\n");}
                 | relation-expr AND relation-expr {printf("relation-and-expr -> relation-expr AND relation-expr\n");}
                 ;

relation-expr: NOT expression comp expression {printf("relation-expr -> NOT expression comp expression\n");}
             | NOT TRUE {printf("relation-expr -> NOT TRUE\n");}
             | NOT FALSE {printf("relation-expr -> NOT FALSE\n");}
             | NOT L_PAREN bool-expr R_PAREN {printf("relation-expr -> NOT L_PAREN bool-expr R_PAREN\n");}
             | expression comp expression {printf("relation-expr -> expression comp expression\n");}
             | TRUE {printf("relation-expr -> TRUE\n");}
             | FALSE {printf("relation-expr -> FALSE\n");}
             | L_PAREN bool-expr R_PAREN {printf("relation-expr -> L_PAREN bool-expr R_PAREN\n");}
             ;

comp: EQ {printf("comp -> EQ\n");}
    | NEQ {printf("comp -> NEQ\n");}
    | LT {printf("comp -> LT\n");}
    | GT {printf("comp -> GT\n");}
    | LTE {printf("comp -> LTE\n");}
    | GTE {printf("comp -> GTE\n");}
    ;

expression: multiplicative-expr {printf("expression -> multiplicative-expr\n");}
          | multiplicative-expr ADD multiplicative-expr {printf("expression -> multiplicative-expr ADD multiplicative-expr\n");}
          | multiplicative-expr SUB multiplicative-expr{printf("expression -> multiplicative-expr SUB multiplicative-expr\n");}
          ;

multiplicative-expr: term {printf("multiplicative-expr -> term\n");}
                   | term MULT term {printf("multiplicative-expr -> term MULT term\n");}
                   | term DIV term {printf("multiplicative-expr -> term DIV term\n");}
                   | term MOD term {printf("multiplicative-expr -> term MOD term\n");}
                   ;

term: SUB var {printf("term -> SUB var\n");}
    | SUB NUMBER {printf("term -> SUB NUMBER\n");}
    | SUB L_PAREN expression R_PAREN {printf("term -> SUB L_PAREN expression R_PAREN\n");}
    | var {printf("term -> var\n");}
    | NUMBER {printf("term -> NUMBER\n");}
    | L_PAREN expression R_PAREN {printf("term -> L_PAREN expression R_PAREN\n");}
    | IDENT L_PAREN expressions R_PAREN {printf("term -> ident L_PAREN expressions R_PAREN\n");}
    ;

expressions: expression {printf("expressions -> expression\n");}
          | expression COMMA expressions {printf("expressions -> expression COMMA expressions\n");}
          ;

var: IDENT {printf("var -> ident\n");}
   | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
   ;

vars: var {printf("vars -> var\n");}
    | var COMMA vars {printf("var COMMA vars\n");}
    ;

%%

int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", line, position, msg);
}
