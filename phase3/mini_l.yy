%{
extern int currLine;
extern int currPos;
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
#include "header.h"
#include <iostream>
#include <list>
#include <string>
#include <functional>
using namespace std;
	/* define the sturctures using as types for non-terminals */
struct dec_type{
	string code;
	list<string> ids;
	/*list<string>statements;*/
};

struct exp_type{
	string code;
	string id;
/*	bool mult;*/
};
	/* end the structures for non-terminal types */


}


%code
{
#include "parser.tab.hh"
struct tests
{
	string name;
	yy::location loc;
};

	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <vector>
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();
void yyerror(const char *msg);		/*declaration given by TA*/

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
	
 	/* end of your code */
}


/*Used to give tokens a type*/
/* specify tokens, type of non-terminals and terminals here
* end of token specifications
* tokens, bison makes these constant variables
*/

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

%type <string> program function ident statements statement comp var
%type <dec_type> declarations declaration
%type <exp_type> term multiplicative_expr expression relation_expr relation_and_expr bool_expr
%type <list<string>> identifiers vars
/*%type <vector<exp_type>> expression */

%start start_prog

%%

start_prog: 			program {cout << $1 << endl;}
		  				;

program: 				/*epsilon*/ {$$ = "";}
						| program function {$$ = $1 + "\n" + $2;}
						;

function: 				FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY {
							$$ = "func " + $2 + "\n";
							$$ += $5.code;
							int i = 0;
							for(list<string>::iterator it = $5.ids.begin(); it != $5.ids.end(); it++){
								$$ += "= "  +  *it + ", $" + to_string(i) + "\n";
								i++;
							}
							$$ += $8.code;
							$$ += $11;
							$$ += "endfunc";
						}
						;
			
declarations: 			/*epsilon*/ {
							$$.code = "";
							$$.ids = list<string>();
						}
						| declaration SEMICOLON declarations {
							$$.code = $1.code + "\n" + $3.code;
							$$.ids = $1.ids;
							for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); it++){
								$$.ids.push_back(*it);
							}
						}
						;

declaration:			identifiers COLON INTEGER {	
							for(list<string>::iterator it = $1.begin(); it != $1.end(); it++){
								$$.code += ". " + *it + "\n";
								$$.ids.push_back(*it);
							}
						}
						| identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
							for(list<string>::iterator it = $1.begin(); it != $1.end(); it++) {
								$$.code += ".[] " + *it + ", " + to_string($5) +"\n";
								$$.ids.push_back(*it);
							}	
						}
						| identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {
							for(list<string>::iterator it = $1.begin(); it != $1.end(); it++) {
								$$.code += ".[] " + *it + ", " + to_string($5 * $8) +"\n";
								$$.ids.push_back(*it);		
							}
						}
						;
						
identifiers: 			ident {$$.push_back($1);}
						| ident COMMA identifiers {
							$$ = $3;
							$$.push_front($1);
						}
						;
				
ident:					IDENT {$$ = $1;}
						;

statements: 			/* epsilon */ {
			 				$$ = "";
						}
						| statement SEMICOLON statements {
							$$ = $1 + "\n" + $3;
						}
						;

statement: 				var ASSIGN expression {
							/*for (int i = 0; i < $3.size(); ++i) {
								$$ += "= " + $1 + $3.at(i).id + "\n";
								$$ += $3.at(i).code;
							}*/
							$$ += "= " + $1 + $3.id + "\n";
							$$ += $3.code;
						}
						| IF bool_expr THEN statements ENDIF {
							std::string lab1 = newLabel();
							std::string lab2 = newLabel();
							$$ += ":" + lab1 + "\n";
							$$ += $2.code;
							$$ += "?:= " + lab2 + ", " + $2.id + "\n";
							$$ += $4;	
							$$ += ":" + lab2 + "\n";
							
						}
						| IF bool_expr THEN statements ELSE statements ENDIF {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
                                                        $$ += ":" + lab1 + "\n";
                                                        $$ += $2.code;
                                                        $$ += "?:= " + lab2 + ", " + $2.id + "\n";
                                                        $$ += $4;
                                                        $$ += ":" + lab2 + "\n";
							$$ += $6;
						}
						| WHILE bool_expr BEGINLOOP statements ENDLOOP {

						}
						| DO BEGINLOOP statements ENDLOOP WHILE bool_expr {

						}
						| FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP {

						}
						| READ vars {
							for(list<string>::iterator it = $2.begin(); it != $2.end(); it++) {
								$$ += ".< " + *it + "\n";
							}
						}
						| WRITE vars {
							for(list<string>::iterator it = $2.begin(); it != $2.end(); it++) {
                                                                $$ += ">. " + *it + "\n";
                                                        }
						}
						| CONTINUE {
						}
						| RETURN expression {

						}
						;

bool_expr: 				relation_and_expr {
						$$ = $1;	
						}
						| relation_and_expr OR bool_expr {
							
						}
						;

relation_and_expr: 		relation_expr {
					$$ = $1;
						}
						| relation_and_expr AND relation_expr {
							$$.id = newCond();
							$$.code = "&& " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
						}
						;

relation_expr: 			NOT expression comp expression {

						}
						| NOT TRUE {

						}
						| NOT FALSE {

						}
						| NOT L_PAREN bool_expr R_PAREN {

						}
						| expression comp expression {
							$$.id = newCond();
							$$.code = $2 + $1.id + ", " + $3.id + "\n"; 
						}
						| TRUE {

						}
						| FALSE {

						}
						| L_PAREN bool_expr R_PAREN {

						}
						;

comp: 					EQ {
							$$ = "=";
						}
						| NEQ {
							$$ = "!=";
						}
						| LT {
							$$ = "<";
						}
						| GT {
							$$ = ">";
						}
						| LTE {
							$$ = "<=";	
						}
						| GTE {
							$$ = ">=";
						}
						;

expression: 			multiplicative_expr {
							//$$.push_back($1);
							$$ = $1;	
						}
						| expression ADD multiplicative_expr {

							/*for (int i = 0; i < $1.size(); ++i) {
								exp_type newobj;
                                                         	newobj.id = newTemp();
                                                         	newobj.code = "";

								newobj.code = "+ " + newobj.id + ", " + $1.at(i).id + ", " + $3.id  + "\n";	
								
								$$.push_back(newobj);
							
							}*/
							$$.id = newTemp();
                                                        $$.code = " " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
						}
						| expression SUB multiplicative_expr {
							/*for (int i = 0; i < $1.size(); ++i) {
                                                                 exp_type newobj;
                                                                 newobj.id = newTemp();
                                                                 newobj.code = "";
                                                                 newobj.code = "- " + newobj.id + ", " + $1.at(i).id + ", " + $3.id     + "\n";
                                                            	 $$.push_back(newobj);
                                                         }*/
							$$.id = newTemp();
                                                        $$.code = "- " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
						}
						;

multiplicative_expr:	term {
				//$$.push_back($1);
				$$ = $1;
						}
						| multiplicative_expr MULT term {
							$$.id = newTemp();
							$$.code = "* " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							
							
						}
						| multiplicative_expr DIV term {
							$$.id = newTemp();
                                                        $$.code = "/ " + $$.id + ", " + $1.id + ", " + $3.id + "\n";		
						}
						| multiplicative_expr MOD term {
							$$.id = newTemp();
                                                        $$.code = "% " + $$.id + ", " + $1.id + ", " + $3.id + "\n";	
						}
						;

term: 					SUB var %prec UMINUS {

						}
						| SUB NUMBER %prec UMINUS {

						}
						| SUB L_PAREN expression R_PAREN {

						}
						| var {
							$$.id = newTemp();
							$$.code = $1;
						}
						| NUMBER {
							$$.id = newTemp();
							$$.code = $1;
						}
						| L_PAREN expression R_PAREN {
							$$.id = newTemp();
							$$.code = "(" + $2.id + ")" + "\n" + $2.code;
						}
						| IDENT L_PAREN expressions R_PAREN {

						}
						;

expressions: 			expression {
					//$$	
						}
						| expression COMMA expressions {
							/*$$.code = $1.code + "\n" + $3.code;
							$$.ids = $1.ids;
							for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); it++){
								$$.ids.push_back(*it);
							}*/
						}
						;

var: 					ident {
							$$ = $1;
						}
   						| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET {
							//$$ = $3;
							//$$.push_front($1);
						}
						;

vars: 					var {
						$$.push_back($1);
						}
						| var COMMA vars {
							$$ = $3;
                                                        $$.push_front($1);
						}
						;
			
%%

string newTemp() {
        static int count = 0;
        string var = " ___temp___" + to_string(++count);
        return var;
}

string newLabel() {
	static int count = 0;
	string var = "L" + to_string(++count);
	return var;
}

string newCond() {
	static int count = 0;
        string var = "P" + to_string(++count);
        return var;
}

int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
