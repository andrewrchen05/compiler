// A Bison parser, made by GNU Bison 3.7.3.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 1 "mini_l.yy"

extern int currLine;
extern int currPos;

#line 46 "parser.tab.cc"


#include "parser.tab.hh"


// Unqualified %code blocks.
#line 51 "mini_l.yy"

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

#line 78 "parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 170 "parser.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
        value.YY_MOVE_OR_COPY< dec_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_bool_expr: // bool_expr
      case symbol_kind::S_relation_and_expr: // relation_and_expr
      case symbol_kind::S_relation_expr: // relation_expr
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_multiplicative_expr: // multiplicative_expr
      case symbol_kind::S_term: // term
      case symbol_kind::S_expressions: // expressions
        value.YY_MOVE_OR_COPY< exp_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_comp: // comp
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var: // var
      case symbol_kind::S_vars: // vars
        value.YY_MOVE_OR_COPY< var_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.YY_MOVE_OR_COPY< vector<string> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
        value.move< dec_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_bool_expr: // bool_expr
      case symbol_kind::S_relation_and_expr: // relation_and_expr
      case symbol_kind::S_relation_expr: // relation_expr
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_multiplicative_expr: // multiplicative_expr
      case symbol_kind::S_term: // term
      case symbol_kind::S_expressions: // expressions
        value.move< exp_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_comp: // comp
        value.move< string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var: // var
      case symbol_kind::S_vars: // vars
        value.move< var_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.move< vector<string> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
        value.copy< dec_type > (that.value);
        break;

      case symbol_kind::S_bool_expr: // bool_expr
      case symbol_kind::S_relation_and_expr: // relation_and_expr
      case symbol_kind::S_relation_expr: // relation_expr
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_multiplicative_expr: // multiplicative_expr
      case symbol_kind::S_term: // term
      case symbol_kind::S_expressions: // expressions
        value.copy< exp_type > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_comp: // comp
        value.copy< string > (that.value);
        break;

      case symbol_kind::S_var: // var
      case symbol_kind::S_vars: // vars
        value.copy< var_type > (that.value);
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.copy< vector<string> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
        value.move< dec_type > (that.value);
        break;

      case symbol_kind::S_bool_expr: // bool_expr
      case symbol_kind::S_relation_and_expr: // relation_and_expr
      case symbol_kind::S_relation_expr: // relation_expr
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_multiplicative_expr: // multiplicative_expr
      case symbol_kind::S_term: // term
      case symbol_kind::S_expressions: // expressions
        value.move< exp_type > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_comp: // comp
        value.move< string > (that.value);
        break;

      case symbol_kind::S_var: // var
      case symbol_kind::S_vars: // vars
        value.move< var_type > (that.value);
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.move< vector<string> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YYUSE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
        yylhs.value.emplace< dec_type > ();
        break;

      case symbol_kind::S_bool_expr: // bool_expr
      case symbol_kind::S_relation_and_expr: // relation_and_expr
      case symbol_kind::S_relation_expr: // relation_expr
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_multiplicative_expr: // multiplicative_expr
      case symbol_kind::S_term: // term
      case symbol_kind::S_expressions: // expressions
        yylhs.value.emplace< exp_type > ();
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_comp: // comp
        yylhs.value.emplace< string > ();
        break;

      case symbol_kind::S_var: // var
      case symbol_kind::S_vars: // vars
        yylhs.value.emplace< var_type > ();
        break;

      case symbol_kind::S_identifiers: // identifiers
        yylhs.value.emplace< vector<string> > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // start_prog: program
#line 168 "mini_l.yy"
                                        {cout << yystack_[0].value.as < string > () << endl;}
#line 753 "parser.tab.cc"
    break;

  case 3: // program: %empty
#line 171 "mini_l.yy"
                                                    {yylhs.value.as < string > () = "";}
#line 759 "parser.tab.cc"
    break;

  case 4: // program: program function
#line 172 "mini_l.yy"
                                                                   {yylhs.value.as < string > () = yystack_[1].value.as < string > () + yystack_[0].value.as < string > ();}
#line 765 "parser.tab.cc"
    break;

  case 5: // function: FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
#line 175 "mini_l.yy"
                                                                                                                                                                          {
							yylhs.value.as < string > () = "func " + yystack_[10].value.as < string > () + "\n";
							yylhs.value.as < string > () += yystack_[7].value.as < dec_type > ().code;
							for(unsigned int i = 0; i < yystack_[7].value.as < dec_type > ().ids.size(); ++i){
								yylhs.value.as < string > () += "= "  +  yystack_[7].value.as < dec_type > ().ids.at(i) + ", $" + to_string(i) + "\n";
							}
							yylhs.value.as < string > () += yystack_[4].value.as < dec_type > ().code;
							yylhs.value.as < string > () += yystack_[1].value.as < string > ();
							yylhs.value.as < string > () += "endfunc";
						}
#line 780 "parser.tab.cc"
    break;

  case 6: // declarations: %empty
#line 187 "mini_l.yy"
                                            {
							yylhs.value.as < dec_type > ().code = "";
							yylhs.value.as < dec_type > ().ids = vector<string>();
						}
#line 789 "parser.tab.cc"
    break;

  case 7: // declarations: declaration SEMICOLON declarations
#line 191 "mini_l.yy"
                                                                                     {
							yylhs.value.as < dec_type > ().code = yystack_[2].value.as < dec_type > ().code + "\n" + yystack_[0].value.as < dec_type > ().code;
							yylhs.value.as < dec_type > ().ids = yystack_[2].value.as < dec_type > ().ids;
							for(unsigned int i = 0; i < yystack_[0].value.as < dec_type > ().ids.size(); ++i){
								yylhs.value.as < dec_type > ().ids.push_back(yystack_[0].value.as < dec_type > ().ids.at(i));
							}
						}
#line 801 "parser.tab.cc"
    break;

  case 8: // declaration: identifiers COLON INTEGER
#line 200 "mini_l.yy"
                                                          {	
							for(unsigned int i = 0; i < yystack_[2].value.as < vector<string> > ().size(); ++i){
								yylhs.value.as < dec_type > ().code += ". " + yystack_[2].value.as < vector<string> > ().at(i) + "\n";
								/*if (i < $1.size() - 1) {
									$$.code += "\n";
								}*/
								yylhs.value.as < dec_type > ().ids.push_back(yystack_[2].value.as < vector<string> > ().at(i));
							}
							for(unsigned int i = 0; i < yystack_[2].value.as < vector<string> > ().size(); ++i){
                                                                yylhs.value.as < dec_type > ().code += "=  " + yystack_[2].value.as < vector<string> > ().at(i) + ", $ " + to_string(i);
                                                                if (i < yystack_[2].value.as < vector<string> > ().size() - 1) {
                                                                        yylhs.value.as < dec_type > ().code += "\n";
                                                                }
                                                                yylhs.value.as < dec_type > ().ids.push_back(yystack_[2].value.as < vector<string> > ().at(i));
                                                        }
						}
#line 822 "parser.tab.cc"
    break;

  case 9: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 216 "mini_l.yy"
                                                                                                                              {
							for(unsigned int i = 0; i < yystack_[7].value.as < vector<string> > ().size(); ++i){	
								yylhs.value.as < dec_type > ().code += ".[] " + yystack_[7].value.as < vector<string> > ().at(i) + ", " + to_string(yystack_[3].value.as < int > ());
								if (i < yystack_[7].value.as < vector<string> > ().size() - 1) {
                                                                        yylhs.value.as < dec_type > ().code += "\n";
                                                                }
								yylhs.value.as < dec_type > ().ids.push_back(yystack_[7].value.as < vector<string> > ().at(i));
							}	
						}
#line 836 "parser.tab.cc"
    break;

  case 10: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 225 "mini_l.yy"
                                                                                                                                                                       {
							for(unsigned int i = 0; i < yystack_[10].value.as < vector<string> > ().size(); ++i){
								yylhs.value.as < dec_type > ().code += ".[] " + yystack_[10].value.as < vector<string> > ().at(i) + ", " + to_string(yystack_[6].value.as < int > () * yystack_[3].value.as < int > ());
								yylhs.value.as < dec_type > ().ids.push_back(yystack_[10].value.as < vector<string> > ().at(i));		
							}
						}
#line 847 "parser.tab.cc"
    break;

  case 11: // identifiers: ident
#line 233 "mini_l.yy"
                                      {yylhs.value.as < vector<string> > ().push_back(yystack_[0].value.as < string > ());}
#line 853 "parser.tab.cc"
    break;

  case 12: // identifiers: ident COMMA identifiers
#line 234 "mini_l.yy"
                                                                          {
							yylhs.value.as < vector<string> > () = yystack_[0].value.as < vector<string> > ();
							yylhs.value.as < vector<string> > ().push_back(yystack_[2].value.as < string > ());
							std::rotate(yylhs.value.as < vector<string> > ().rbegin(), yylhs.value.as < vector<string> > ().rbegin() + 1, yylhs.value.as < vector<string> > ().rend());
							//$$.push_front($1);
						}
#line 864 "parser.tab.cc"
    break;

  case 13: // ident: IDENT
#line 242 "mini_l.yy"
                                              {yylhs.value.as < string > () = yystack_[0].value.as < string > ();}
#line 870 "parser.tab.cc"
    break;

  case 14: // statements: %empty
#line 245 "mini_l.yy"
                                              {
			 				yylhs.value.as < string > () = "";
						}
#line 878 "parser.tab.cc"
    break;

  case 15: // statements: statement SEMICOLON statements
#line 248 "mini_l.yy"
                                                                                 {
							yylhs.value.as < string > () = yystack_[2].value.as < string > () + "\n" + yystack_[0].value.as < string > ();
						}
#line 886 "parser.tab.cc"
    break;

  case 16: // statement: var ASSIGN expression
#line 253 "mini_l.yy"
                                                              {
							//$$ += $3.code;
							/*if ($1.arrStatus) {
								$$ += $3.code;
								$$ += "[]= " + $1.val + ", " + $3.id;
									
							} else if ($3.arrStatus) {
								
								$$ += "=[] " + $1.val + ", " + $3.code;
							}
							else {*/
								yylhs.value.as < string > () += yystack_[0].value.as < exp_type > ().code;
								yylhs.value.as < string > () += "= " + yystack_[0].value.as < exp_type > ().id + ", " + yystack_[2].value.as < var_type > ().val;
							//}
						}
#line 906 "parser.tab.cc"
    break;

  case 17: // statement: IF bool_expr THEN statements ENDIF
#line 268 "mini_l.yy"
                                                                                     {
							/*std::string lab1 = newLabel();
							std::string lab2 = newLabel();
							$$ += $2.code;
							$$ += "?:= " + lab1 + ", " + $2.id + "\n";
                                                        $$ += ":= " + lab2 + "\n";
                                                        $$ += "\n:" + lab1 + "\n";
                                                        $$ += $4;
                                                        $$ += ":" + lab2 + "\n";*/	
						}
#line 921 "parser.tab.cc"
    break;

  case 18: // statement: IF bool_expr THEN statements ELSE statements ENDIF
#line 278 "mini_l.yy"
                                                                                                     {
							/*std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
                                                        $$ += $2.code;
							$$ += "?:= " + lab1 + ", " + $2.id + "\n";
                                                        $$ += $6;
                                                        $$ += ":= " + lab2 + "\n";
                                                        $$ += "\n:" + lab1 + "\n";
							$$ += $4;
							$$ += ":" + lab2 + "\n";*/
						}
#line 937 "parser.tab.cc"
    break;

  case 19: // statement: WHILE bool_expr BEGINLOOP statements ENDLOOP
#line 289 "mini_l.yy"
                                                                                               {
                                                        /*std::string lab1 = newLabel();
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
							$$ += ": " + lab2 + "\n";*/	
						}
#line 967 "parser.tab.cc"
    break;

  case 20: // statement: DO BEGINLOOP statements ENDLOOP WHILE bool_expr
#line 314 "mini_l.yy"
                                                                                                  {
							/*std::string lab1 = newLabel();
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
                                                        $$ += ": " + lab1 + "\n";*/
						}
#line 992 "parser.tab.cc"
    break;

  case 21: // statement: FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
#line 334 "mini_l.yy"
                                                                                                                                                         {
							/*std::string lab1 = newLabel();
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
							
							$$ += ": " + lab3 + "\n";*/ 
							
						}
#line 1038 "parser.tab.cc"
    break;

  case 22: // statement: READ vars
#line 375 "mini_l.yy"
                                                            {
							/*for(list<string>::iterator it = $2.begin(); it != $2.end(); it++) {
								$$ += ".< " + *it;
							}*/
							/*if ($2.arrStatus) {
								$$ += ".[]< " + $2.val;
							} else {
								$$ += ".< " + $2.val;
							}*/
						}
#line 1053 "parser.tab.cc"
    break;

  case 23: // statement: WRITE vars
#line 385 "mini_l.yy"
                                                             {
							/*if ($2.arrStatus) {
                                                                $$ += ".[]> " + $2.val;
                                                        } else {
                                                                $$ += ">. " + $2.val;
                                                        }*/
						}
#line 1065 "parser.tab.cc"
    break;

  case 24: // statement: CONTINUE
#line 392 "mini_l.yy"
                                                           {
							//$$ += "continue";
						}
#line 1073 "parser.tab.cc"
    break;

  case 25: // statement: RETURN expression
#line 395 "mini_l.yy"
                                                                    {
							//$$ += $2.id;
						}
#line 1081 "parser.tab.cc"
    break;

  case 26: // bool_expr: relation_and_expr
#line 400 "mini_l.yy"
                                                          {
						//$$ = $1;
						}
#line 1089 "parser.tab.cc"
    break;

  case 27: // bool_expr: relation_and_expr OR bool_expr
#line 403 "mini_l.yy"
                                                                                 {
							/*$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + $3.code;
							$$.code += $$.code = "|| " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;*/
						}
#line 1101 "parser.tab.cc"
    break;

  case 28: // relation_and_expr: relation_expr
#line 412 "mini_l.yy"
                                              {
							//$$ = $1;
						}
#line 1109 "parser.tab.cc"
    break;

  case 29: // relation_and_expr: relation_and_expr AND relation_expr
#line 415 "mini_l.yy"
                                                                                      {
							/*$$.id = newCond();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + $3.code;
							$$.code += "&& " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;*/
						}
#line 1121 "parser.tab.cc"
    break;

  case 30: // relation_expr: NOT expression comp expression
#line 424 "mini_l.yy"
                                                               {
							/*$$.id = newCond();
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
						*/
						}
#line 1159 "parser.tab.cc"
    break;

  case 31: // comp: EQ
#line 459 "mini_l.yy"
                                           {
							yylhs.value.as < string > () = "==";
						}
#line 1167 "parser.tab.cc"
    break;

  case 32: // comp: NEQ
#line 462 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = "!=";
						}
#line 1175 "parser.tab.cc"
    break;

  case 33: // comp: LT
#line 465 "mini_l.yy"
                                                     {
							yylhs.value.as < string > () = "<";
						}
#line 1183 "parser.tab.cc"
    break;

  case 34: // comp: GT
#line 468 "mini_l.yy"
                                                     {
							yylhs.value.as < string > () = ">";
						}
#line 1191 "parser.tab.cc"
    break;

  case 35: // comp: LTE
#line 471 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = "<=";	
						}
#line 1199 "parser.tab.cc"
    break;

  case 36: // comp: GTE
#line 474 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = ">=";
						}
#line 1207 "parser.tab.cc"
    break;

  case 37: // expression: multiplicative_expr
#line 479 "mini_l.yy"
                                                    {
							//$$.push_back($1);
							//$$ = $1;
							yylhs.value.as < exp_type > ().id = yystack_[0].value.as < exp_type > ().id;
			                                yylhs.value.as < exp_type > ().code = yystack_[0].value.as < exp_type > ().code;
                        			        yylhs.value.as < exp_type > ().arrStatus = yystack_[0].value.as < exp_type > ().arrStatus;	
						}
#line 1219 "parser.tab.cc"
    break;

  case 38: // expression: expression ADD multiplicative_expr
#line 486 "mini_l.yy"
                                                                                     {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "+ " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;*/
						}
#line 1230 "parser.tab.cc"
    break;

  case 39: // expression: expression SUB multiplicative_expr
#line 492 "mini_l.yy"
                                                                                     {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "- " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;*/
						}
#line 1241 "parser.tab.cc"
    break;

  case 40: // multiplicative_expr: term
#line 500 "mini_l.yy"
                             {
				yylhs.value.as < exp_type > ().id = yystack_[0].value.as < exp_type > ().id;
				yylhs.value.as < exp_type > ().code = yystack_[0].value.as < exp_type > ().code;
				yylhs.value.as < exp_type > ().arrStatus = yystack_[0].value.as < exp_type > ().arrStatus;
						}
#line 1251 "parser.tab.cc"
    break;

  case 41: // multiplicative_expr: multiplicative_expr MULT term
#line 505 "mini_l.yy"
                                                                                {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += "* " + $$.id + ", " + $1.id + ", " + $3.id + "\n";
							$$.arrStatus = false;*/
						}
#line 1262 "parser.tab.cc"
    break;

  case 42: // multiplicative_expr: multiplicative_expr DIV term
#line 511 "mini_l.yy"
                                                                               {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
                                                        $$.code += "/ " + $$.id + ", " + $1.id + ", " + $3.id + "\n";		
							$$.arrStatus = false;*/
						}
#line 1273 "parser.tab.cc"
    break;

  case 43: // multiplicative_expr: multiplicative_expr MOD term
#line 517 "mini_l.yy"
                                                                               {
							/*$$.id = newTemp();
                                                        $$.code += ". " + $$.id + "\n";
							$$.code += "% " + $$.id + ", " + $1.id + ", " + $3.id + "\n";	
							$$.arrStatus = false;*/
						}
#line 1284 "parser.tab.cc"
    break;

  case 44: // term: SUB var
#line 525 "mini_l.yy"
                                                             {
						/*	$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							//$$.code = "-1* " + $2 + "\n";
						*/	
						}
#line 1295 "parser.tab.cc"
    break;

  case 45: // term: SUB NUMBER
#line 531 "mini_l.yy"
                                                                          {
						/*	$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = "-1 * ";
							$$.code += $2;
							$$.code += "\n";
						*/
						}
#line 1308 "parser.tab.cc"
    break;

  case 46: // term: SUB L_PAREN expression R_PAREN
#line 539 "mini_l.yy"
                                                                                 {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = "(" + $3.id + ")" + "\n" + $3.code;*/
						}
#line 1318 "parser.tab.cc"
    break;

  case 47: // term: var
#line 544 "mini_l.yy"
                                                      {

							/*if ($1.arrStatus) {
								$$.code += $1.val;
								$$.arrStatus = true;
							} else {*/
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < var_type > ().val;
							yylhs.value.as < exp_type > ().arrStatus = false;
							//}
						}
#line 1335 "parser.tab.cc"
    break;

  case 48: // term: NUMBER
#line 556 "mini_l.yy"
                                                         {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < int > ();
							yylhs.value.as < exp_type > ().arrStatus = false;
						}
#line 1346 "parser.tab.cc"
    break;

  case 49: // term: L_PAREN expression R_PAREN
#line 562 "mini_l.yy"
                                                                             {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $2.code;*/
						}
#line 1356 "parser.tab.cc"
    break;

  case 50: // term: IDENT L_PAREN expressions R_PAREN
#line 567 "mini_l.yy"
                                                                                    {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code = $1 + $3.id + $3.code;*/
						}
#line 1366 "parser.tab.cc"
    break;

  case 51: // expressions: expression
#line 574 "mini_l.yy"
                                           {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code;
							$$.code += "param " + $$.id + "\n";*/
						}
#line 1377 "parser.tab.cc"
    break;

  case 52: // expressions: expression COMMA expressions
#line 580 "mini_l.yy"
                                                                               {
							/*$$.id = newTemp();
							$$.code += ". " + $$.id + "\n";
							$$.code += $1.code + "\n" + $3.code;
							$$.code += "param " + $$.id + "\n";*/	
						}
#line 1388 "parser.tab.cc"
    break;

  case 53: // var: ident
#line 588 "mini_l.yy"
                                              {
						yylhs.value.as < var_type > ().arrStatus = false;
						yylhs.value.as < var_type > ().val = yystack_[0].value.as < string > ();
						}
#line 1397 "parser.tab.cc"
    break;

  case 54: // var: ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
#line 592 "mini_l.yy"
                                                                                                     {
							/*cout << "array recognized" << endl;
							$$.val += $1 + "," + $3.id; //comma separated
							$$.arrStatus = true;*/

							//$$.code += ".[]
							
							//$$.code += ". " + $$.id + "\n";
							//$$ += $1 + "[" + $3.id + "]\n";	
						}
#line 1412 "parser.tab.cc"
    break;

  case 55: // vars: var
#line 604 "mini_l.yy"
                                            {
							//$$.push_back($1);
							//$$ = $1;
							yylhs.value.as < var_type > ().arrStatus = false;
							yylhs.value.as < var_type > ().val = yystack_[0].value.as < var_type > ().val;
						}
#line 1423 "parser.tab.cc"
    break;

  case 56: // vars: var COMMA vars
#line 610 "mini_l.yy"
                                                                 {
							//$$.code = $3.code;
                            				/*$$.arrStatus = false;
							$$.val += $1.val + $3.val;*/
						}
#line 1433 "parser.tab.cc"
    break;


#line 1437 "parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        int yychecklim = yylast_ - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }



  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -39;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
     -39,     9,    25,   -39,   -15,   -39,   -39,   -26,    33,   -15,
      41,     6,    14,    17,    46,   -15,    13,   -15,   -15,   -39,
     -39,    21,   -39,    87,    47,    92,    53,    32,    -9,    78,
      78,    94,   -15,   -39,   -15,   -15,     8,    60,   106,    74,
      68,   108,    69,     8,   105,    51,   -39,   101,    32,    73,
      79,   -39,   -39,    19,     8,    80,   -39,    49,    50,   -39,
     -39,     8,   -39,    32,     8,   -39,    76,    72,    32,    78,
      78,    32,   107,    75,   -15,     8,   -39,   -39,   -19,     8,
       8,     8,     8,     8,     8,   -17,   -39,    49,   115,   -39,
     -39,   -39,   -39,   -39,   -39,     8,    77,   -39,   -39,   109,
     112,    89,   -39,   -12,   -39,    35,    86,    50,    50,   -39,
     -39,   -39,   -39,   123,    49,   -39,    32,   -39,    78,    78,
     -39,     8,   -39,   -39,   119,   -39,    93,   -39,   -39,   -15,
      88,     8,   -14,    32,   117,   -39
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     2,     1,     0,     4,    13,     0,     0,     6,
       0,     0,     0,    11,     0,     6,     0,     0,     6,     7,
       8,     0,    12,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,    26,    28,     0,    14,     0,
      55,    22,    23,     0,     0,    13,    48,    25,    37,    40,
      47,     0,     5,    14,     0,     9,     0,     0,    14,     0,
       0,    14,     0,     0,     0,     0,    45,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,    31,
      32,    33,    34,    35,    36,     0,     0,    29,    27,     0,
       0,     0,    56,     0,    49,    51,     0,    39,    38,    41,
      42,    43,    54,     0,    30,    17,    14,    19,     0,     0,
      46,     0,    50,    10,     0,    20,     0,    52,    18,     0,
       0,     0,     0,    14,     0,    21
  };

  const signed char
  parser::yypgoto_[] =
  {
     -39,   -39,   -39,   -39,    57,   -39,   122,    56,   -38,   -39,
     -28,   -39,    67,   -39,   -32,    16,     4,    20,   -27,   -34
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     5,    10,    11,    12,    37,    38,    39,
      44,    45,    46,    95,   105,    58,    59,   106,    60,    51
  };

  const unsigned char
  parser::yytable_[] =
  {
      40,    52,    47,    41,    57,    49,   133,    50,    50,     3,
      72,    67,    80,    81,    80,    81,     8,    80,    81,    80,
      81,    40,    78,    20,    21,    86,    77,   104,     4,    85,
      96,   112,    87,    99,   120,     6,    40,     9,    42,    53,
     102,    40,    98,   103,    40,    29,    14,    50,    15,    30,
      31,    32,    18,    54,    33,    34,    35,    16,    55,    56,
       7,    17,    36,   114,    75,    13,    80,    81,    24,     6,
      76,    13,    19,    13,    13,    23,    69,    70,   124,   121,
      80,    81,     6,    82,    83,    84,   109,   110,   111,    40,
     125,   126,   115,   116,    25,   134,   107,   108,    26,   132,
      27,    28,   130,    80,    81,    43,    40,    61,    89,    90,
      91,    92,    93,    94,    48,    62,    63,    64,    65,    68,
      66,    71,    73,    74,    88,    79,   101,   113,   100,   118,
     117,   119,   122,   123,   128,   129,    97,   131,   135,    22,
       0,   127
  };

  const short
  parser::yycheck_[] =
  {
      27,    35,    30,    12,    36,    32,    20,    34,    35,     0,
      48,    43,    31,    32,    31,    32,    42,    31,    32,    31,
      32,    48,    54,    10,    11,    63,    53,    46,     3,    61,
      68,    48,    64,    71,    46,    50,    63,     4,    47,    31,
      74,    68,    70,    75,    71,    13,     5,    74,    42,    17,
      18,    19,     6,    45,    22,    23,    24,    43,    50,    51,
       4,    44,    30,    95,    45,     9,    31,    32,    47,    50,
      51,    15,    15,    17,    18,    18,    25,    26,   116,    44,
      31,    32,    50,    33,    34,    35,    82,    83,    84,   116,
     118,   119,    15,    16,     7,   133,    80,    81,    51,   131,
       8,    48,   129,    31,    32,    27,   133,    47,    36,    37,
      38,    39,    40,    41,    20,     9,    42,    49,    10,    14,
      51,    20,    49,    44,    48,    45,    51,    12,    21,    17,
      21,    42,    46,    10,    15,    42,    69,    49,    21,    17,
      -1,   121
  };

  const signed char
  parser::yystos_[] =
  {
       0,    55,    56,     0,     3,    57,    50,    61,    42,     4,
      58,    59,    60,    61,     5,    42,    43,    44,     6,    58,
      10,    11,    60,    58,    47,     7,    51,     8,    48,    13,
      17,    18,    19,    22,    23,    24,    30,    61,    62,    63,
      72,    12,    47,    27,    64,    65,    66,    64,    20,    72,
      72,    73,    73,    31,    45,    50,    51,    68,    69,    70,
      72,    47,     9,    42,    49,    10,    51,    68,    14,    25,
      26,    20,    62,    49,    44,    45,    51,    72,    68,    45,
      31,    32,    33,    34,    35,    68,    62,    68,    48,    36,
      37,    38,    39,    40,    41,    67,    62,    66,    64,    62,
      21,    51,    73,    68,    46,    68,    71,    69,    69,    70,
      70,    70,    48,    12,    68,    15,    16,    21,    17,    42,
      46,    44,    46,    10,    62,    64,    64,    71,    15,    42,
      72,    49,    68,    20,    62,    21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    65,
      66,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    72,    72,    73,    73
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     3,     8,
      11,     1,     3,     1,     0,     3,     3,     5,     7,     5,
       6,    13,     2,     2,     1,     2,     1,     3,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     3,     2,     2,     4,     1,     1,     3,
       4,     1,     3,     1,     4,     1,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD",
  "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON",
  "COLON", "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "ASSIGN", "IDENT", "NUMBER", "ERROR", "UMINUS",
  "$accept", "start_prog", "program", "function", "declarations",
  "declaration", "identifiers", "ident", "statements", "statement",
  "bool_expr", "relation_and_expr", "relation_expr", "comp", "expression",
  "multiplicative_expr", "term", "expressions", "var", "vars", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   168,   168,   171,   172,   175,   187,   191,   200,   216,
     225,   233,   234,   242,   245,   248,   253,   268,   278,   289,
     314,   334,   375,   385,   392,   395,   400,   403,   412,   415,
     424,   459,   462,   465,   468,   471,   474,   479,   486,   492,
     500,   505,   511,   517,   525,   531,   539,   544,   556,   562,
     567,   574,   580,   588,   592,   604,   610
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1987 "parser.tab.cc"

#line 617 "mini_l.yy"


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
