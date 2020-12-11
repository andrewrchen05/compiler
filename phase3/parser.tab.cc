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


#line 44 "parser.tab.cc"


#include "parser.tab.hh"


// Unqualified %code blocks.
#line 31 "mini_l.yy"

#include "parser.tab.hh"
struct tests
{
	string name;
	yy::location loc;
};

	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();
void yyerror(const char *msg);		/*declaration given by TA*/

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
	
	/* end of your code */

#line 75 "parser.tab.cc"


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
#line 167 "parser.tab.cc"

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

      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.YY_MOVE_OR_COPY< list<string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.move< list<string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
        value.move< string > (YY_MOVE (that.value));
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.copy< list<string> > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
        value.copy< string > (that.value);
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

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (that.value);
        break;

      case symbol_kind::S_identifiers: // identifiers
        value.move< list<string> > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
        value.move< string > (that.value);
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

      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_identifiers: // identifiers
        yylhs.value.emplace< list<string> > ();
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_ident: // ident
      case symbol_kind::S_statements: // statements
        yylhs.value.emplace< string > ();
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
#line 145 "mini_l.yy"
                    {cout << yystack_[0].value.as < string > () << endl;}
#line 665 "parser.tab.cc"
    break;

  case 3: // program: %empty
#line 148 "mini_l.yy"
                                                    {yylhs.value.as < string > () = "";}
#line 671 "parser.tab.cc"
    break;

  case 4: // program: program function
#line 149 "mini_l.yy"
                                                                   {yylhs.value.as < string > () = yystack_[1].value.as < string > () + "\n" + yystack_[0].value.as < string > ();}
#line 677 "parser.tab.cc"
    break;

  case 5: // function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
#line 153 "mini_l.yy"
                                                {
							yylhs.value.as < string > () = "func " + yystack_[10].value.as < string > () + "\n";
							yylhs.value.as < string > () += yystack_[7].value.as < dec_type > ().code;
							int i = 0;
							for(list<string>::iterator it = yystack_[7].value.as < dec_type > ().ids.begin(); it != yystack_[7].value.as < dec_type > ().ids.end(); it++){
								yylhs.value.as < string > () += *it + " $" + to_string(i) + "\n";
								i++;
							}
							yylhs.value.as < string > () += yystack_[4].value.as < dec_type > ().code;
							yylhs.value.as < string > () += yystack_[1].value.as < string > ();
							yylhs.value.as < string > () += "endfunc";
						}
#line 694 "parser.tab.cc"
    break;

  case 6: // declarations: %empty
#line 167 "mini_l.yy"
                                            {yylhs.value.as < dec_type > ().code = "";
									 yylhs.value.as < dec_type > ().ids = list<string>();
									}
#line 702 "parser.tab.cc"
    break;

  case 7: // declarations: declaration SEMICOLON declarations
#line 170 "mini_l.yy"
                                                                                     {
							yylhs.value.as < dec_type > ().code = yystack_[2].value.as < dec_type > ().code + "\n" + yystack_[0].value.as < dec_type > ().code;
							yylhs.value.as < dec_type > ().ids = yystack_[2].value.as < dec_type > ().ids;
							for(list<string>::iterator it = yystack_[0].value.as < dec_type > ().ids.begin(); it != yystack_[0].value.as < dec_type > ().ids.end(); it++){
								yylhs.value.as < dec_type > ().ids.push_back(*it);
							}
						}
#line 714 "parser.tab.cc"
    break;

  case 8: // declarations: error declarations
#line 177 "mini_l.yy"
                                                                     {printf("Syntax Error: expected \";\" near line %d\n", currLine);}
#line 720 "parser.tab.cc"
    break;

  case 9: // identifiers: ident
#line 181 "mini_l.yy"
                   {yylhs.value.as < list<string> > ().push_back(yystack_[0].value.as < string > ());}
#line 726 "parser.tab.cc"
    break;

  case 10: // identifiers: identifiers COMMA ident
#line 182 "mini_l.yy"
                                     {
			   yylhs.value.as < list<string> > () = yystack_[0].value.as < string > ();
				yylhs.value.as < list<string> > ().push_front(yystack_[2].value.as < list<string> > ());
		   }
#line 735 "parser.tab.cc"
    break;

  case 11: // identifiers: identifiers error ident
#line 186 "mini_l.yy"
             { yylhs.value.as < list<string> > () = yystack_[2].value.as < list<string> > (); }
#line 741 "parser.tab.cc"
    break;

  case 12: // ident: IDENT
#line 189 "mini_l.yy"
              {yylhs.value.as < string > () = yystack_[0].value.as < string > ();}
#line 747 "parser.tab.cc"
    break;

  case 13: // declaration: identifiers COLON INTEGER
#line 192 "mini_l.yy"
                                                          {	
							for(list<string>::iterator it = yystack_[2].value.as < list<string> > ().begin(); it != yystack_[2].value.as < list<string> > ().end(); it++){
								yylhs.value.as < dec_type > ().code += ". " + *it + "\n";
								yylhs.value.as < dec_type > ().ids.push_back(*it);
							}
						}
#line 758 "parser.tab.cc"
    break;

  case 14: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 199 "mini_l.yy"
                                                {
							for(list<string>::iterator it = yystack_[7].value.as < list<string> > ().begin(); it != yystack_[7].value.as < list<string> > ().end(); it++){
								yylhs.value.as < dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as < int > ()) +"\n";
								yylhs.value.as < dec_type > ().ids.push_back(*it);
							}	
						}
#line 769 "parser.tab.cc"
    break;

  case 15: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 206 "mini_l.yy"
                                                {printf("declaration-> ident COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", yystack_[6].value.as < int > (), yystack_[3].value.as < int > ());}
#line 775 "parser.tab.cc"
    break;

  case 16: // statements: %empty
#line 209 "mini_l.yy"
                          {printf("statements -> epsilon\n");}
#line 781 "parser.tab.cc"
    break;

  case 17: // statements: statement SEMICOLON statements
#line 210 "mini_l.yy"
                                           {printf("statements -> statement SEMICOLON statements\n");}
#line 787 "parser.tab.cc"
    break;

  case 18: // statements: statement error statements
#line 211 "mini_l.yy"
                                       {printf("Syntax Error: expected \";\" near line %d\n", currLine);}
#line 793 "parser.tab.cc"
    break;

  case 19: // statement: var ASSIGN expression
#line 214 "mini_l.yy"
                                 {printf("statement -> var ASSIGN expression\n");}
#line 799 "parser.tab.cc"
    break;

  case 20: // statement: IF bool_expr THEN statements ENDIF
#line 215 "mini_l.yy"
                                              {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
#line 805 "parser.tab.cc"
    break;

  case 21: // statement: IF bool_expr THEN statements ELSE statements ENDIF
#line 216 "mini_l.yy"
                                                              {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 811 "parser.tab.cc"
    break;

  case 22: // statement: WHILE bool_expr BEGINLOOP statements ENDLOOP
#line 217 "mini_l.yy"
                                                        {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 817 "parser.tab.cc"
    break;

  case 23: // statement: DO BEGINLOOP statements ENDLOOP WHILE bool_expr
#line 218 "mini_l.yy"
                                                           {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 823 "parser.tab.cc"
    break;

  case 24: // statement: FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
#line 219 "mini_l.yy"
                                                                                                                  {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
#line 829 "parser.tab.cc"
    break;

  case 25: // statement: READ vars
#line 220 "mini_l.yy"
                     {printf("statement -> READ vars\n");}
#line 835 "parser.tab.cc"
    break;

  case 26: // statement: WRITE vars
#line 221 "mini_l.yy"
                      {printf("statement -> WRITE vars\n");}
#line 841 "parser.tab.cc"
    break;

  case 27: // statement: CONTINUE
#line 222 "mini_l.yy"
                    {printf("statement -> CONTINUE\n");}
#line 847 "parser.tab.cc"
    break;

  case 28: // statement: RETURN expression
#line 223 "mini_l.yy"
                             {printf("statement ->RETURN expression\n");}
#line 853 "parser.tab.cc"
    break;

  case 30: // bool_expr: relation_and_expr
#line 227 "mini_l.yy"
                             {printf("bool_expr -> relation_and_expr\n");}
#line 859 "parser.tab.cc"
    break;

  case 31: // bool_expr: relation_and_expr OR bool_expr
#line 228 "mini_l.yy"
                                          {printf("bool_expr -> relation_and_expr OR bool_expr\n");}
#line 865 "parser.tab.cc"
    break;

  case 32: // relation_and_expr: relation_expr
#line 231 "mini_l.yy"
                                 {printf("relation_and_expr -> relation_expr\n");}
#line 871 "parser.tab.cc"
    break;

  case 33: // relation_and_expr: relation_and_expr AND relation_expr
#line 232 "mini_l.yy"
                                                       {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
#line 877 "parser.tab.cc"
    break;

  case 34: // relation_expr: NOT expression comp expression
#line 235 "mini_l.yy"
                                              {printf("relation_expr -> NOT expression comp expression\n");}
#line 883 "parser.tab.cc"
    break;

  case 35: // relation_expr: NOT TRUE
#line 236 "mini_l.yy"
                        {printf("relation_expr -> NOT TRUE\n");}
#line 889 "parser.tab.cc"
    break;

  case 36: // relation_expr: NOT FALSE
#line 237 "mini_l.yy"
                         {printf("relation_expr -> NOT FALSE\n");}
#line 895 "parser.tab.cc"
    break;

  case 37: // relation_expr: NOT L_PAREN bool_expr R_PAREN
#line 238 "mini_l.yy"
                                             {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
#line 901 "parser.tab.cc"
    break;

  case 38: // relation_expr: expression comp expression
#line 239 "mini_l.yy"
                                          {printf("relation_expr -> expression comp expression\n");}
#line 907 "parser.tab.cc"
    break;

  case 39: // relation_expr: TRUE
#line 240 "mini_l.yy"
                    {printf("relation_expr -> TRUE\n");}
#line 913 "parser.tab.cc"
    break;

  case 40: // relation_expr: FALSE
#line 241 "mini_l.yy"
                     {printf("relation_expr -> FALSE\n");}
#line 919 "parser.tab.cc"
    break;

  case 41: // relation_expr: L_PAREN bool_expr R_PAREN
#line 242 "mini_l.yy"
                                         {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
#line 925 "parser.tab.cc"
    break;

  case 42: // comp: EQ
#line 245 "mini_l.yy"
         {printf("comp -> EQ\n");}
#line 931 "parser.tab.cc"
    break;

  case 43: // comp: NEQ
#line 246 "mini_l.yy"
          {printf("comp -> NEQ\n");}
#line 937 "parser.tab.cc"
    break;

  case 44: // comp: LT
#line 247 "mini_l.yy"
         {printf("comp -> LT\n");}
#line 943 "parser.tab.cc"
    break;

  case 45: // comp: GT
#line 248 "mini_l.yy"
         {printf("comp -> GT\n");}
#line 949 "parser.tab.cc"
    break;

  case 46: // comp: LTE
#line 249 "mini_l.yy"
          {printf("comp -> LTE\n");}
#line 955 "parser.tab.cc"
    break;

  case 47: // comp: GTE
#line 250 "mini_l.yy"
          {printf("comp -> GTE\n");}
#line 961 "parser.tab.cc"
    break;

  case 48: // expression: multiplicative_expr
#line 253 "mini_l.yy"
                                {printf("expression -> multiplicative_expr\n");}
#line 967 "parser.tab.cc"
    break;

  case 49: // expression: expression ADD multiplicative_expr
#line 254 "mini_l.yy"
                                               {printf("expression -> expression ADD multiplicative_expr\n");}
#line 973 "parser.tab.cc"
    break;

  case 50: // expression: expression SUB multiplicative_expr
#line 255 "mini_l.yy"
                                               {printf("expression -> expression SUB multiplicative_expr\n");}
#line 979 "parser.tab.cc"
    break;

  case 51: // multiplicative_expr: term
#line 258 "mini_l.yy"
                          {printf("multiplicative_expr -> term\n");}
#line 985 "parser.tab.cc"
    break;

  case 52: // multiplicative_expr: multiplicative_expr MULT term
#line 259 "mini_l.yy"
                                                   {printf("multiplicative_expr -> term MULT term\n");}
#line 991 "parser.tab.cc"
    break;

  case 53: // multiplicative_expr: multiplicative_expr DIV term
#line 260 "mini_l.yy"
                                                  {printf("multiplicative_expr -> term DIV term\n");}
#line 997 "parser.tab.cc"
    break;

  case 54: // multiplicative_expr: multiplicative_expr MOD term
#line 261 "mini_l.yy"
                                                  {printf("multiplicative_expr -> term MOD term\n");}
#line 1003 "parser.tab.cc"
    break;

  case 55: // term: SUB var
#line 264 "mini_l.yy"
                           {printf("term -> var UMINU\n");}
#line 1009 "parser.tab.cc"
    break;

  case 56: // term: SUB NUMBER
#line 265 "mini_l.yy"
                              {printf("term-> UMINUS NUMBER\n");}
#line 1015 "parser.tab.cc"
    break;

  case 57: // term: SUB L_PAREN expression R_PAREN
#line 266 "mini_l.yy"
                                     {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 1021 "parser.tab.cc"
    break;

  case 58: // term: var
#line 267 "mini_l.yy"
          {printf("term -> var\n");}
#line 1027 "parser.tab.cc"
    break;

  case 59: // term: NUMBER
#line 268 "mini_l.yy"
             {printf("term -> NUMBER\n");}
#line 1033 "parser.tab.cc"
    break;

  case 60: // term: L_PAREN expression R_PAREN
#line 269 "mini_l.yy"
                                 {printf("term -> L_PAREN expression R_PAREN\n");}
#line 1039 "parser.tab.cc"
    break;

  case 61: // term: IDENT L_PAREN expressions R_PAREN
#line 270 "mini_l.yy"
                                        {printf("term -> ident L_PAREN expressions R_PAREN\n");}
#line 1045 "parser.tab.cc"
    break;

  case 62: // expressions: expression
#line 273 "mini_l.yy"
                        {printf("expressions -> expression\n");}
#line 1051 "parser.tab.cc"
    break;

  case 63: // expressions: expression COMMA expressions
#line 274 "mini_l.yy"
                                         {printf("expressions -> expression COMMA expressions\n");}
#line 1057 "parser.tab.cc"
    break;

  case 64: // var: ident
#line 277 "mini_l.yy"
           {printf("var -> ident\n");}
#line 1063 "parser.tab.cc"
    break;

  case 65: // var: ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
#line 278 "mini_l.yy"
                                                        {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1069 "parser.tab.cc"
    break;

  case 66: // vars: var
#line 281 "mini_l.yy"
          {printf("vars -> var\n");}
#line 1075 "parser.tab.cc"
    break;

  case 67: // vars: var COMMA vars
#line 282 "mini_l.yy"
                     {printf("vars -> var COMMA vars\n");}
#line 1081 "parser.tab.cc"
    break;


#line 1085 "parser.tab.cc"

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


  const signed char parser::yypact_ninf_ = -50;

  const signed char parser::yytable_ninf_ = -7;

  const short
  parser::yypact_[] =
  {
     -50,    18,    17,   -50,   -15,   -50,   -17,    35,     1,    10,
     -50,    41,    15,   -50,     8,   -50,    49,    16,   101,    16,
      10,    20,   -50,   -50,    43,   -50,   -50,    77,    45,    90,
      54,    63,     0,    76,    76,   105,    16,   -50,    16,    16,
      12,   100,   148,    23,     3,   139,   115,    44,   -50,   -50,
      72,    76,   123,   -50,   153,    89,   -50,   122,   111,   -50,
     -50,   149,    63,   121,   127,   -50,   -50,    12,   110,    12,
     -50,    63,    63,    12,    12,   -50,   124,   -50,   -50,    76,
     122,    12,   -50,   -50,   128,    97,    12,    63,    76,    76,
      12,    12,   -50,   -50,   -50,   -50,   -50,   -50,    12,    12,
      12,    12,    63,   152,   125,    16,     2,    -3,   -50,   -50,
     110,   110,   163,   132,    12,    37,   -50,   -50,    47,   133,
     140,   -50,   -50,   111,   111,   110,   -50,   -50,   -50,   156,
     164,   138,   -50,   -50,   172,   -50,   110,   -50,    12,   -50,
     -50,    63,   -50,    76,    76,   -50,   -50,   168,   -50,   142,
     -50,    16,   136,    12,    68,    63,   165,   -50
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     2,     1,     0,     4,     0,     0,     0,     0,
      12,     0,     0,     9,     0,     8,     0,     0,     0,     0,
       0,     0,    11,    13,     0,    10,     7,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,    27,     0,     0,
       0,    64,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,    12,    59,     0,    30,    32,     0,    48,    51,
      58,     0,    16,     0,    66,    25,    26,     0,    28,     0,
       5,    16,    16,     0,     0,    14,     0,    35,    36,     0,
       0,     0,    56,    55,     0,     0,     0,    16,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,    18,    17,
      29,    19,     0,     0,     0,     0,    41,    60,    62,     0,
       0,    33,    31,    50,    49,    38,    52,    53,    54,     0,
       0,     0,    67,    65,     0,    37,    34,    57,     0,    61,
      20,    16,    22,     0,     0,    15,    63,     0,    23,     0,
      21,     0,     0,     0,     0,    16,     0,    24
  };

  const short
  parser::yypgoto_[] =
  {
     -50,   -50,   -50,   -50,    88,   -50,   131,   -50,   -49,   -50,
     -25,   -50,    99,   108,   -37,    74,    31,    51,   -31,   -38
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     5,    11,    12,    41,    14,    42,    43,
      54,    55,    56,    98,    57,    58,    59,   119,    60,    65
  };

  const short
  parser::yytable_[] =
  {
      44,    66,     9,    68,    73,    63,    -6,    64,    64,    61,
      80,     9,    45,   103,    85,    -6,    17,    -6,     3,    83,
       4,     9,   108,   109,    71,     7,    84,    -6,    90,    91,
     106,    44,   107,    90,    91,     6,   110,   111,   120,     8,
      44,    44,    85,    50,   115,   133,    16,    46,   117,   118,
      20,    10,    74,   129,   113,    21,    44,    67,    18,    19,
      10,   125,    52,    53,   122,    72,    10,   132,    90,    91,
      10,    44,    77,    78,    64,    50,    33,   136,    90,    91,
      34,    35,    36,   137,    29,    37,    38,    39,   155,    79,
      28,   138,   147,    40,    52,    53,    30,    15,    31,    90,
      91,   118,    32,    47,    48,    49,   156,    50,    26,    27,
      44,    23,    24,    10,    88,    89,   154,    81,   148,   149,
     152,    51,    10,    82,    44,    62,    52,    53,    90,    91,
     126,   127,   128,    92,    93,    94,    95,    96,    97,    13,
      13,    90,    91,   117,    99,   100,   101,    69,    22,    75,
      25,    13,    13,    90,    91,   140,   141,    70,    92,    93,
      94,    95,    96,    97,   123,   124,    76,    87,    86,   102,
     104,   105,   112,   130,   116,   134,   131,   142,   135,   139,
     144,   143,   145,   150,   151,   153,   157,   121,   114,   146
  };

  const unsigned char
  parser::yycheck_[] =
  {
      31,    39,     1,    40,     1,    36,     5,    38,    39,    34,
      47,     1,    12,    62,    51,     5,     1,     7,     0,    50,
       3,     1,    71,    72,     1,    42,    51,     7,    31,    32,
      67,    62,    69,    31,    32,    50,    73,    74,    87,     4,
      71,    72,    79,    31,    81,    48,     5,    47,    46,    86,
      42,    50,    49,   102,    79,     6,    87,    45,    43,    44,
      50,    98,    50,    51,    89,    42,    50,   105,    31,    32,
      50,   102,    28,    29,   105,    31,    13,   114,    31,    32,
      17,    18,    19,    46,     7,    22,    23,    24,    20,    45,
      47,    44,   141,    30,    50,    51,    51,     9,     8,    31,
      32,   138,    48,    27,    28,    29,   155,    31,    20,    21,
     141,    10,    11,    50,    25,    26,   153,    45,   143,   144,
     151,    45,    50,    51,   155,    20,    50,    51,    31,    32,
      99,   100,   101,    36,    37,    38,    39,    40,    41,     8,
       9,    31,    32,    46,    33,    34,    35,    47,    17,    10,
      19,    20,    21,    31,    32,    15,    16,     9,    36,    37,
      38,    39,    40,    41,    90,    91,    51,    14,    45,    20,
      49,    44,    48,    21,    46,    12,    51,    21,    46,    46,
      42,    17,    10,    15,    42,    49,    21,    88,    80,   138
  };

  const signed char
  parser::yystos_[] =
  {
       0,    55,    56,     0,     3,    57,    50,    42,     4,     1,
      50,    58,    59,    60,    61,    58,     5,     1,    43,    44,
      42,     6,    60,    10,    11,    60,    58,    58,    47,     7,
      51,     8,    48,    13,    17,    18,    19,    22,    23,    24,
      30,    60,    62,    63,    72,    12,    47,    27,    28,    29,
      31,    45,    50,    51,    64,    65,    66,    68,    69,    70,
      72,    64,    20,    72,    72,    73,    73,    45,    68,    47,
       9,     1,    42,     1,    49,    10,    51,    28,    29,    45,
      68,    45,    51,    72,    64,    68,    45,    14,    25,    26,
      31,    32,    36,    37,    38,    39,    40,    41,    67,    33,
      34,    35,    20,    62,    49,    44,    68,    68,    62,    62,
      68,    68,    48,    64,    67,    68,    46,    46,    68,    71,
      62,    66,    64,    69,    69,    68,    70,    70,    70,    62,
      21,    51,    73,    48,    12,    46,    68,    46,    44,    46,
      15,    16,    21,    17,    42,    10,    71,    62,    64,    64,
      15,    42,    72,    49,    68,    20,    62,    21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    56,    57,    58,    58,    58,    59,
      59,    59,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     2,     1,
       3,     3,     1,     3,     8,    11,     0,     3,     3,     3,
       5,     7,     5,     6,    13,     2,     2,     1,     2,     3,
       1,     3,     1,     3,     4,     2,     2,     4,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     2,     2,     4,     1,     1,
       3,     4,     1,     3,     1,     4,     1,     3
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
  "identifiers", "ident", "declaration", "statements", "statement",
  "bool_expr", "relation_and_expr", "relation_expr", "comp", "expression",
  "multiplicative_expr", "term", "expressions", "var", "vars", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   145,   145,   148,   149,   152,   167,   170,   177,   181,
     182,   186,   189,   192,   198,   205,   209,   210,   211,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     227,   228,   231,   232,   235,   236,   237,   238,   239,   240,
     241,   242,   245,   246,   247,   248,   249,   250,   253,   254,
     255,   258,   259,   260,   261,   264,   265,   266,   267,   268,
     269,   270,   273,   274,   277,   278,   281,   282
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
#line 1652 "parser.tab.cc"

#line 287 "mini_l.yy"


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
