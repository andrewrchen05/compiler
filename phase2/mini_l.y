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
%error-verbose

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

%token ERROR

%type<cval> IDENT
%type<ival> NUMBER


%right ASSIGN
%left OR
%left AND
%right NOT
%left LT LTE GT GTE EQ NEQ
%left ADD SUB
%left MULT DIV MOD

%right UMINUS

%left L_SQUARE_BRACKET R_SQUARE_BRACKET
%left L_PAREN R_PAREN

%start program

%%

program: /* epsilon */ {printf("program -> epsilon\n");}
       | program function {printf("program -> program function\n");}
       ; 

function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY{printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
	    | FUNCTION IDENT error BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY {yyerror(" \";\" expected");}
        ;

declarations: /* epsilon */ {printf("declarations -> epsilon\n");}
            | declaration SEMICOLON declarations {printf("declarations -> declaration SEMICOLON declarations\n");}
            | declaration error declarations {yyerror(" expecting \";\"");}
            ;

declaration: identifiers COLON INTEGER {printf("declaration -> identifiers COLON INTEGER\n");}
           | identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
           | identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
           ;

identifiers: ident {printf("identifiers -> ident\n");}
           | ident COMMA identifiers {printf("identifiers -> identifier COMMA identifiers\n");}
           ;


ident:      IDENT {printf("ident -> IDENT %s \n", $1);}
    ;

statements: /* epsilon */ {printf("statements -> epsilon\n");}
          | statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");}
          | statement error statements {yyerror(" \";\" expected");}
          ;

statement: var ASSIGN expression {printf("statement -> var ASSIGN expression\n");}
         | IF bool_expr THEN statements ENDIF {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
         | IF bool_expr THEN statements ELSE statements ENDIF {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
         | WHILE bool_expr BEGINLOOP statements ENDLOOP {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
         | DO BEGINLOOP statements ENDLOOP WHILE bool_expr {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
         | FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
         | READ vars {printf("statement -> READ vars\n");}
         | WRITE vars {printf("statement -> WRITE vars\n");}
         | CONTINUE {printf("statement -> CONTINUE\n");}
         | RETURN expression {printf("statement ->RETURN expression\n");}
         | var error expression {yyerror(" \":=\" expected");}
         ;

bool_expr: relation_and_expr {printf("bool_expr -> relation_and_expr\n");}
         | relation_and_expr OR bool_expr {printf("bool_expr -> relation_and_expr OR bool_expr\n");}
         ;

relation_and_expr: relation_expr {printf("relation_and_expr -> relation_expr\n");}
                 | relation_and_expr AND relation_expr {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
                 ;

relation_expr: NOT expression comp expression {printf("relation_expr -> NOT expression comp expression\n");}
             | NOT TRUE {printf("relation_expr -> NOT TRUE\n");}
             | NOT FALSE {printf("relation_expr -> NOT FALSE\n");}
             | NOT L_PAREN bool_expr R_PAREN {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
             | expression comp expression {printf("relation_expr -> expression comp expression\n");}
             | TRUE {printf("relation_expr -> TRUE\n");}
             | FALSE {printf("relation_expr -> FALSE\n");}
             | L_PAREN bool_expr R_PAREN {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
             ;

comp: EQ {printf("comp -> EQ\n");}
    | NEQ {printf("comp -> NEQ\n");}
    | LT {printf("comp -> LT\n");}
    | GT {printf("comp -> GT\n");}
    | LTE {printf("comp -> LTE\n");}
    | GTE {printf("comp -> GTE\n");}
    ;

expression: multiplicative_expr {printf("expression -> multiplicative_expr\n");}
          | multiplicative_expr ADD expression {printf("expression -> multiplicative_expr ADD expression\n");}
          | multiplicative_expr SUB expression{printf("expression -> multiplicative_expr SUB expression\n");}
          ;

multiplicative_expr: term {printf("multiplicative_expr -> term\n");}
                   | term MULT term {printf("multiplicative_expr -> term MULT term\n");}
                   | term DIV term {printf("multiplicative_expr -> term DIV term\n");}
                   | term MOD term {printf("multiplicative_expr -> term MOD term\n");}
                   ;

term: SUB var %prec UMINUS {printf("term -> SUB var\n");}
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

var: ident {printf("var -> ident\n");}
   | ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
   ;

vars: var {printf("vars -> var\n");}
    | COMMA vars {printf("vars -> var COMMA vars\n");}
    | error vars {yyerror(" expecting \",\" ");}
    ;

%%

int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}
