%{
%}

%skeleton "lalr1.cc"
%require "3.0.4"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.error verbose
%locations

%code requires
{
	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <list>
#include <string>
#include <functional>
using namespace std;
	/* define the sturctures using as types for non-terminals */
    struct dec_type{
        string code;
        list<string> ids;
    };
	/* end the structures for non-terminal types */
}


%code
{
#include "parser.tab.hh"

	/* you may need these header files 
	 * add more header file if you need more
	 */
struct tests
{
    string name;
    yy:location loc;
}
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
	
	/* end of your code */
}

%token END 0 "end of file";

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

%type<string> IDENT
%type<int> NUMBER


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

%type <string> program function ident statements
%type <dec_type> declarations declaration
%type <list<string>> identifiers

%start program
// %start start_prog;

%%



program: /* epsilon */ {
                            //$$ = "";
                            printf("program -> epsilon\n");
                        }
       | program function {
                                // $$ = $1 + "\n" + $2;
                                printf("program -> program function\n");
                            }
       ; 

function: FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY 
        {
            // $$ = "func " + $2 + "\n";
            // $$ += $5.code + "\n";
            // int i = 0;
            // for(list<string>::iterator it = $5.ids.begin(); it != $5.ids.end(); ++it) {
            //     $$ += *it +  "$" + to_string(i) + "\n";
            //     ++i;
            // }
            // $$ += $8.code + "\n";
            // $$ += $11.code + "\n";
            // $$ = += "endfunc";
            printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");
        }
	     ;

declarations: /* epsilon is empty string */ {
                                                // $$.code = "";
                                                // $$.ids = list<string>();
                                                printf("declarations -> epsilon\n");
                                            }
            | declaration SEMICOLON declarations {
                // $$.code = $1.code + "\n" + $3.code;
                // $$.ids = $1.ids;
                // for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); ++it) {
                //     $$.ids.push_back(*it);
                // }
                printf("declarations -> declaration SEMICOLON declarations\n");
            }
            ;
            
identifiers: ident {
                        // $$.push_back($1);
                        printf("identifiers -> ident\n");
                    }
           | ident COMMA identifiers {
            //    $$ = $3;
            //    $$.push_front($1);
            {printf("identifiers -> ident COMMA identifier\n");}
           }
           ;

ident: IDENT {$$ = $1}
     ;

declaration: identifiers COLON INTEGER {
                // for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
                //     $$ += ". " + *it + "\n";
                //     $$.ids.push_back(*it);
                // }
                printf("declaration -> identifiers COLON INTEGER\n");
            }

           | identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
            //    for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
            //         $$ += ".[] " + *it + ", " + to_string($5) +  "\n"; // $5 is integer in square bracket
            //         $$.ids.push_back(*it);
            //     }
                printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");
           }
           | identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
           ;

statements: /* epsilon */ {printf("statements -> epsilon\n");}
          | statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");}
          ;

statement: var ASSIGN expression {printf("statement -> var ASSIGN expression\n");}
         | IF bool_expr THEN statements ENDIF {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
         | IF bool_expr THEN statements ELSE statements ENDIF {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
         | WHILE bool_expr BEGINLOOP statements ENDLOOP {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
         | DO BEGINLOOP statements ENDLOOP WHILE bool_expr {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
         | FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
         | READ vars {printf("READ vars\n");}
         | WRITE vars {printf("WRITE vars\n");}
         | CONTINUE {printf("CONTINUE\n");}
         | RETURN expression {printf("RETURN expression\n");}
         | error {yyerror("incorrect statement");}
         ;

bool_expr: relation_and_expr {printf("bool_expr -> relation_and_expr\n");}
         | relation_and_expr OR relation_and_expr {printf("bool_expr -> relation_and_expr OR relation_and_expr\n");}
         ;

relation_and_expr: relation_expr {printf("relation_and_expr -> relation_expr\n");}
                 | relation_expr AND relation_expr {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
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
          | multiplicative_expr ADD multiplicative_expr {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
          | multiplicative_expr SUB multiplicative_expr{printf("expression -> multiplicative_expr SUB multiplicative_expr\n");}
          | SUB multiplicative_expr %prec UMINUS{printf("expression -> UMINUS multiplicative_expr\n");}
          | error {yyerror("incorrect statement");}
          ;

multiplicative_expr: term {printf("multiplicative_expr -> term\n");}
                   | term MULT term {printf("multiplicative_expr -> term MULT term\n");}
                   | term DIV term {printf("multiplicative_expr -> term DIV term\n");}
                   | term MOD term {printf("multiplicative_expr -> term MOD term\n");}
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
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}
