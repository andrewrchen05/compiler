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
	bool arrStatus;
	/*string no;
	string arr;*/
};
	/* end the structures for non-terminal types */

struct var_type{
	string val;
	bool arrStatus;
	/*string no;
	string arr;*/
};

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

%type <string> program function ident statements statement comp /*var*/
%type <dec_type> declarations declaration
%type <exp_type> term multiplicative_expr expression expressions relation_expr relation_and_expr bool_expr
%type <list<string>> identifiers /*vars*/
%type <var_type> var vars
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
								$$.code += ".[] " + *it + ", " + to_string($5 * $8);
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
							//$$ += $3.code;
							if ($1.arrStatus) {
								$$ += $3.code;
								$$ += "[]= " + $1.val + ", " + $3.id;
									
							} else if ($3.arrStatus) {
								
								$$ += "=[] " + $1.val + ", " + $3.code;
							}
							else {
								$$ += $3.code;
								$$ += "= " + $3.id + ", " + $1.val;
							}
						}
						| IF bool_expr THEN statements ENDIF {
							std::string lab1 = newLabel();
							std::string lab2 = newLabel();
							$$ += $2.code;
							$$ += "?:= " + lab1 + ", " + $2.id + "\n";
                                                        $$ += ":= " + lab2 + "\n";
                                                        $$ += "\n:" + lab1 + "\n";
                                                        $$ += $4;
                                                        $$ += ":" + lab2 + "\n";	
						}
						| IF bool_expr THEN statements ELSE statements ENDIF {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
                                                        $$ += $2.code;
							$$ += "?:= " + lab1 + ", " + $2.id + "\n";
                                                        $$ += $6;
                                                        $$ += ":= " + lab2 + "\n";
                                                        $$ += "\n:" + lab1 + "\n";
							$$ += $4;
							$$ += ":" + lab2 + "\n";
						}
						| WHILE bool_expr BEGINLOOP statements ENDLOOP {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							std::string lab3 = newLabel();
							$$ += ": " + lab3 + "\n";
							$$ += $2.code;
							$$ += "?:= " + lab1 + ", " + $2.id + "\n";
							//continue?
							$$ += ":= " + lab2 + "\n";
							$$ += ": " + lab1 + "\n";

							string statements = $4;
							std::size_t found=statements.find("continue");
							if (found!=std::string::npos) {
								//cout << "Found at: " << found << endl;
								$$ += statements.substr(0, found-1) + "\n";
								$$ += ":= " + lab2;
								$$ += statements.substr(found + 8, statements.length() - 1);
							} else {
								$$ += $4;
							}
							
							$$ += ":= " + lab3 + "\n";
							$$ += ": " + lab2 + "\n";	
						}
						| DO BEGINLOOP statements ENDLOOP WHILE bool_expr {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							$$ += ": " + lab2 + "\n";
                                                        
							string statements = $3;
                                                        std::size_t found=statements.find("continue");
                                                        if (found!=std::string::npos) {
                                                                $$ += statements.substr(0, found-1) + "\n";
                                                                $$ += ":= " + lab1 + "\n";
                                                                $$ += statements.substr(found, statements.length() - 1);
                                                        } else {
                                                                $$ += $3;
                                                        }
							
							$$ += $6.code;
                                                        $$ += "?:= " + lab2 + ", " + $6.id + "\n";
                                                        $$ += ":= " + lab1 + "\n";
                                                        $$ += ": " + lab1 + "\n";
						}
						| FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							std::string lab3 = newLabel();
                                                        //std::string lab4 = newLabel();
								
							string temp = newTemp();
                                                        $$ += ". " + temp + "\n";
							$$ += "= " + temp + ", " + $2.val + "\n";

							$$ += ": " + lab1 + "\n";
							$$ += $6.code;
							
							$$ += "?:= " + lab2 + ", " + $6.id + "\n";
							$$ += ":= " + lab3 + "\n";


							$$ += ": " + lab2 + "\n";
							
							temp = newTemp();
                                                        $$ += ". " + temp + "\n";
								
							$$ += "= " + temp + ", " + $8.val + "\n";
							$$ += $10.code;
						
							string statements = $12;
                                                        std::size_t found=statements.find("continue");	
							if (found!=std::string::npos) {
                                                                $$ += statements.substr(0, found-1) + "\n";
                                                                //$$ += ":= " + lab3 + "\n";
                                                                $$ += ":= " + lab3;
								$$ += statements.substr(found+8, statements.length() - 1);
                                                        } else {
                                                                $$ += $12;
                                                        }

							$$ += ":= " + lab1 + "\n";
							
							$$ += ": " + lab3 + "\n"; 
							
						}
						| READ vars {
							/*for(list<string>::iterator it = $2.begin(); it != $2.end(); it++) {
								$$ += ".< " + *it;
							}*/
							if ($2.arrStatus) {
								$$ += ".[]< " + $2.val;
							} else {
								$$ += ".< " + $2.val;
							}
						}
						| WRITE vars {
							if ($2.arrStatus) {
                                                                $$ += ".[]> " + $2.val;
                                                        } else {
                                                                $$ += ">. " + $2.val;
                                                        }
						}
						| CONTINUE {
							$$ += "continue";
						}
						| RETURN expression {
							$$ += $2.id;
						}
						;

bool_expr: 				relation_and_expr {
						$$ = $1;
						}
						| relation_and_expr OR bool_expr {
							$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + $3.code;
							$$.code += $$.code = "|| " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;
						}
						;

relation_and_expr: 		relation_expr {
							$$ = $1;
						}
						| relation_and_expr AND relation_expr {
							$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + $3.code;
							$$.code += "&& " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;
						}
						;

relation_expr: 			NOT expression comp expression {
							$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $3 + " " + $$.id + ", " + $2.id + ", " + $4.id + "\n";
						}
						| NOT TRUE {
							$$.id = newCond();
							$$.code += "";
						}
						| NOT FALSE {
							$$.id = newCond();
                                                        $$.code += "";
						}
						| NOT L_PAREN bool_expr R_PAREN {
							$$ = $3;	
						}
						| expression comp expression {
							$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $2 + " " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
						}
						| TRUE {
							$$.id = newCond();
                                                        $$.code += "";
						}
						| FALSE {
							$$.id = newCond();
                                                        $$.code += "";
						}
						| L_PAREN bool_expr R_PAREN {
							$$ = $2;
						}
						;

comp: 					EQ {
							$$ = "==";
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
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "+ " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;
						}
						| expression SUB multiplicative_expr {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "- " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;
						}
						;

multiplicative_expr:	term {
				$$ = $1;
						}
						| multiplicative_expr MULT term {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += "* " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;
						}
						| multiplicative_expr DIV term {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "/ " + $$.id + ", " + $1.id + ", " + $3.id + "\n";		
							$$.arrStatus = false;
						}
						| multiplicative_expr MOD term {
							$$.id = newTemp();
                                                        $$.code += ". " + $$.id + "\n";
							$$.code += "% " + $$.id + ", " + $1.id + ", " + $3.id + "\n";	
							$$.arrStatus = false;
						}
						;

term: 					SUB var %prec UMINUS {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							//$$.code = "-1* " + $2 + "\n";
							
						}
						| SUB NUMBER %prec UMINUS {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = "-1 * ";
							$$.code += $2;
							$$.code += "\n";
						}
						| SUB L_PAREN expression R_PAREN {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = "(" + $3.id + ")" + "\n" + $3.code;
						}
						| var {

							if ($1.arrStatus) {
								$$.code += $1.val;
								$$.arrStatus = true;
							} else {
								$$.id = newTemp();
								$$.code += ". " + $$.id + "\n";
								$$.code += $1.val;
								$$.arrStatus = false;
							}
						}
						| NUMBER {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1;
							$$.arrStatus = false;
						}
						| L_PAREN expression R_PAREN {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $2.code;
						}
						| IDENT L_PAREN expressions R_PAREN {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = $1 + $3.id + $3.code;
						}
						;

expressions: 			expression {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code;
							$$.code += "param " + $$.id + "\n";
						}
						| expression COMMA expressions {
							$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + "\n" + $3.code;
							$$.code += "param " + $$.id + "\n";	
						}
						;

var: 					ident {
						$$.arrStatus = false;
						$$.val = $1;
						}
   						| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET {
							cout << "array recognized" << endl;
							$$.val += $1 + "," + $3.id; //comma separated
							$$.arrStatus = true;

							//$$.code += ".[]
							
							//$$.code += ". " + $$.id + "\n";
							//$$ += $1 + "[" + $3.id + "]\n";	
						}
						;

vars: 					var {
							//$$.push_back($1);
							$$ = $1;
						}
						| var COMMA vars {
							//$$.code = $3.code;
                            				$$.arrStatus = false;
							$$.val += $1.val + $3.val;
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
