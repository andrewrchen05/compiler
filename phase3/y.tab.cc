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


#line 44 "y.tab.cc"


#include "y.tab.hh"


// Unqualified %code blocks.
#line 31 "mini_l.yy"

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

#line 74 "y.tab.cc"


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
#line 166 "y.tab.cc"

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
  case 2: // program: %empty
#line 140 "mini_l.yy"
                       {
                            //$$ = "";
                            printf("program -> epsilon\n");
                        }
#line 667 "y.tab.cc"
    break;

  case 3: // program: program function
#line 144 "mini_l.yy"
                          {
                                // $$ = $1 + "\n" + $2;
                                printf("program -> program function\n");
                            }
#line 676 "y.tab.cc"
    break;

  case 4: // function: FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
#line 151 "mini_l.yy"
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
#line 694 "y.tab.cc"
    break;

  case 5: // declarations: %empty
#line 166 "mini_l.yy"
                                            {
                                                // $$.code = "";
                                                // $$.ids = list<string>();
                                                printf("declarations -> epsilon\n");
                                            }
#line 704 "y.tab.cc"
    break;

  case 6: // declarations: declaration SEMICOLON declarations
#line 171 "mini_l.yy"
                                                 {
                // $$.code = $1.code + "\n" + $3.code;
                // $$.ids = $1.ids;
                // for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); ++it) {
                //     $$.ids.push_back(*it);
                // }
                printf("declarations -> declaration SEMICOLON declarations\n");
            }
#line 717 "y.tab.cc"
    break;

  case 7: // identifiers: ident
#line 181 "mini_l.yy"
                   {
                        // $$.push_back($1);
                        printf("identifiers -> ident\n");
                    }
#line 726 "y.tab.cc"
    break;

  case 8: // identifiers: ident COMMA identifiers
#line 185 "mini_l.yy"
                                     {
            //    $$ = $3;
            //    $$.push_front($1);
            {printf("identifiers -> ident COMMA identifier\n");}
           }
#line 736 "y.tab.cc"
    break;

  case 9: // ident: IDENT
#line 192 "mini_l.yy"
             {yylhs.value.as < string > () = yystack_[0].value.as < string > ()}
#line 742 "y.tab.cc"
    break;

  case 10: // declaration: identifiers COLON INTEGER
#line 195 "mini_l.yy"
                                       {
                // for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
                //     $$ += ". " + *it + "\n";
                //     $$.ids.push_back(*it);
                // }
                printf("declaration -> identifiers COLON INTEGER\n");
            }
#line 754 "y.tab.cc"
    break;

  case 11: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 203 "mini_l.yy"
                                                                                         {
            //    for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
            //         $$ += ".[] " + *it + ", " + to_string($5) +  "\n"; // $5 is integer in square bracket
            //         $$.ids.push_back(*it);
            //     }
                printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");
           }
#line 766 "y.tab.cc"
    break;

  case 12: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 210 "mini_l.yy"
                                                                                                                                  {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 772 "y.tab.cc"
    break;

  case 13: // statements: %empty
#line 213 "mini_l.yy"
                          {printf("statements -> epsilon\n");}
#line 778 "y.tab.cc"
    break;

  case 14: // statements: statement SEMICOLON statements
#line 214 "mini_l.yy"
                                           {printf("statements -> statement SEMICOLON statements\n");}
#line 784 "y.tab.cc"
    break;

  case 15: // statement: var ASSIGN expression
#line 217 "mini_l.yy"
                                 {printf("statement -> var ASSIGN expression\n");}
#line 790 "y.tab.cc"
    break;

  case 16: // statement: IF bool_expr THEN statements ENDIF
#line 218 "mini_l.yy"
                                              {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
#line 796 "y.tab.cc"
    break;

  case 17: // statement: IF bool_expr THEN statements ELSE statements ENDIF
#line 219 "mini_l.yy"
                                                              {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 802 "y.tab.cc"
    break;

  case 18: // statement: WHILE bool_expr BEGINLOOP statements ENDLOOP
#line 220 "mini_l.yy"
                                                        {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 808 "y.tab.cc"
    break;

  case 19: // statement: DO BEGINLOOP statements ENDLOOP WHILE bool_expr
#line 221 "mini_l.yy"
                                                           {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 814 "y.tab.cc"
    break;

  case 20: // statement: FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
#line 222 "mini_l.yy"
                                                                                                                  {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
#line 820 "y.tab.cc"
    break;

  case 21: // statement: READ vars
#line 223 "mini_l.yy"
                     {printf("READ vars\n");}
#line 826 "y.tab.cc"
    break;

  case 22: // statement: WRITE vars
#line 224 "mini_l.yy"
                      {printf("WRITE vars\n");}
#line 832 "y.tab.cc"
    break;

  case 23: // statement: CONTINUE
#line 225 "mini_l.yy"
                    {printf("CONTINUE\n");}
#line 838 "y.tab.cc"
    break;

  case 24: // statement: RETURN expression
#line 226 "mini_l.yy"
                             {printf("RETURN expression\n");}
#line 844 "y.tab.cc"
    break;

  case 25: // statement: error
#line 227 "mini_l.yy"
                 {yyerror("incorrect statement");}
#line 850 "y.tab.cc"
    break;

  case 26: // bool_expr: relation_and_expr
#line 230 "mini_l.yy"
                             {printf("bool_expr -> relation_and_expr\n");}
#line 856 "y.tab.cc"
    break;

  case 27: // bool_expr: relation_and_expr OR relation_and_expr
#line 231 "mini_l.yy"
                                                  {printf("bool_expr -> relation_and_expr OR relation_and_expr\n");}
#line 862 "y.tab.cc"
    break;

  case 28: // relation_and_expr: relation_expr
#line 234 "mini_l.yy"
                                 {printf("relation_and_expr -> relation_expr\n");}
#line 868 "y.tab.cc"
    break;

  case 29: // relation_and_expr: relation_expr AND relation_expr
#line 235 "mini_l.yy"
                                                   {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
#line 874 "y.tab.cc"
    break;

  case 30: // relation_expr: NOT expression comp expression
#line 238 "mini_l.yy"
                                              {printf("relation_expr -> NOT expression comp expression\n");}
#line 880 "y.tab.cc"
    break;

  case 31: // relation_expr: NOT TRUE
#line 239 "mini_l.yy"
                        {printf("relation_expr -> NOT TRUE\n");}
#line 886 "y.tab.cc"
    break;

  case 32: // relation_expr: NOT FALSE
#line 240 "mini_l.yy"
                         {printf("relation_expr -> NOT FALSE\n");}
#line 892 "y.tab.cc"
    break;

  case 33: // relation_expr: NOT L_PAREN bool_expr R_PAREN
#line 241 "mini_l.yy"
                                             {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
#line 898 "y.tab.cc"
    break;

  case 34: // relation_expr: expression comp expression
#line 242 "mini_l.yy"
                                          {printf("relation_expr -> expression comp expression\n");}
#line 904 "y.tab.cc"
    break;

  case 35: // relation_expr: TRUE
#line 243 "mini_l.yy"
                    {printf("relation_expr -> TRUE\n");}
#line 910 "y.tab.cc"
    break;

  case 36: // relation_expr: FALSE
#line 244 "mini_l.yy"
                     {printf("relation_expr -> FALSE\n");}
#line 916 "y.tab.cc"
    break;

  case 37: // relation_expr: L_PAREN bool_expr R_PAREN
#line 245 "mini_l.yy"
                                         {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
#line 922 "y.tab.cc"
    break;

  case 38: // comp: EQ
#line 248 "mini_l.yy"
         {printf("comp -> EQ\n");}
#line 928 "y.tab.cc"
    break;

  case 39: // comp: NEQ
#line 249 "mini_l.yy"
          {printf("comp -> NEQ\n");}
#line 934 "y.tab.cc"
    break;

  case 40: // comp: LT
#line 250 "mini_l.yy"
         {printf("comp -> LT\n");}
#line 940 "y.tab.cc"
    break;

  case 41: // comp: GT
#line 251 "mini_l.yy"
         {printf("comp -> GT\n");}
#line 946 "y.tab.cc"
    break;

  case 42: // comp: LTE
#line 252 "mini_l.yy"
          {printf("comp -> LTE\n");}
#line 952 "y.tab.cc"
    break;

  case 43: // comp: GTE
#line 253 "mini_l.yy"
          {printf("comp -> GTE\n");}
#line 958 "y.tab.cc"
    break;

  case 44: // expression: multiplicative_expr
#line 256 "mini_l.yy"
                                {printf("expression -> multiplicative_expr\n");}
#line 964 "y.tab.cc"
    break;

  case 45: // expression: multiplicative_expr ADD multiplicative_expr
#line 257 "mini_l.yy"
                                                        {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
#line 970 "y.tab.cc"
    break;

  case 46: // expression: multiplicative_expr SUB multiplicative_expr
#line 258 "mini_l.yy"
                                                       {printf("expression -> multiplicative_expr SUB multiplicative_expr\n");}
#line 976 "y.tab.cc"
    break;

  case 47: // expression: SUB multiplicative_expr
#line 259 "mini_l.yy"
                                                {printf("expression -> UMINUS multiplicative_expr\n");}
#line 982 "y.tab.cc"
    break;

  case 48: // expression: error
#line 260 "mini_l.yy"
                  {yyerror("incorrect statement");}
#line 988 "y.tab.cc"
    break;

  case 49: // multiplicative_expr: term
#line 263 "mini_l.yy"
                          {printf("multiplicative_expr -> term\n");}
#line 994 "y.tab.cc"
    break;

  case 50: // multiplicative_expr: term MULT term
#line 264 "mini_l.yy"
                                    {printf("multiplicative_expr -> term MULT term\n");}
#line 1000 "y.tab.cc"
    break;

  case 51: // multiplicative_expr: term DIV term
#line 265 "mini_l.yy"
                                   {printf("multiplicative_expr -> term DIV term\n");}
#line 1006 "y.tab.cc"
    break;

  case 52: // multiplicative_expr: term MOD term
#line 266 "mini_l.yy"
                                   {printf("multiplicative_expr -> term MOD term\n");}
#line 1012 "y.tab.cc"
    break;

  case 53: // term: SUB var
#line 269 "mini_l.yy"
              {printf("term -> SUB var\n");}
#line 1018 "y.tab.cc"
    break;

  case 54: // term: SUB NUMBER
#line 270 "mini_l.yy"
                 {printf("term -> SUB NUMBER\n");}
#line 1024 "y.tab.cc"
    break;

  case 55: // term: SUB L_PAREN expression R_PAREN
#line 271 "mini_l.yy"
                                     {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 1030 "y.tab.cc"
    break;

  case 56: // term: var
#line 272 "mini_l.yy"
          {printf("term -> var\n");}
#line 1036 "y.tab.cc"
    break;

  case 57: // term: NUMBER
#line 273 "mini_l.yy"
             {printf("term -> NUMBER\n");}
#line 1042 "y.tab.cc"
    break;

  case 58: // term: L_PAREN expression R_PAREN
#line 274 "mini_l.yy"
                                 {printf("term -> L_PAREN expression R_PAREN\n");}
#line 1048 "y.tab.cc"
    break;

  case 59: // term: IDENT L_PAREN expressions R_PAREN
#line 275 "mini_l.yy"
                                        {printf("term -> ident L_PAREN expressions R_PAREN\n");}
#line 1054 "y.tab.cc"
    break;

  case 60: // expressions: expression
#line 278 "mini_l.yy"
                        {printf("expressions -> expression\n");}
#line 1060 "y.tab.cc"
    break;

  case 61: // expressions: expression COMMA expressions
#line 279 "mini_l.yy"
                                         {printf("expressions -> expression COMMA expressions\n");}
#line 1066 "y.tab.cc"
    break;

  case 62: // var: IDENT
#line 282 "mini_l.yy"
           {printf("var -> ident\n");}
#line 1072 "y.tab.cc"
    break;

  case 63: // var: IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
#line 283 "mini_l.yy"
                                                        {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1078 "y.tab.cc"
    break;

  case 64: // vars: var
#line 286 "mini_l.yy"
          {printf("vars -> var\n");}
#line 1084 "y.tab.cc"
    break;

  case 65: // vars: var COMMA vars
#line 287 "mini_l.yy"
                     {printf("var COMMA vars\n");}
#line 1090 "y.tab.cc"
    break;


#line 1094 "y.tab.cc"

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


  const signed char parser::yypact_ninf_ = -59;

  const signed char parser::yytable_ninf_ = -14;

  const short
  parser::yypact_[] =
  {
     -59,    14,   -59,   -38,   -59,   -59,   -18,    25,   -38,    11,
     -11,   -10,    -6,    33,    57,   -38,   -38,   -38,   -59,     0,
     -59,   -59,    46,     4,    51,    13,   156,    -9,   -59,    43,
      43,    65,    37,   -59,    37,    37,    12,    28,    94,    50,
      58,    99,    53,   -59,    55,   -59,   -59,   -20,    43,   -27,
     -59,    96,    86,    88,   197,    64,    44,   -59,    91,   171,
      66,    72,   -59,   -59,    12,   -59,    12,   -59,   118,    12,
     -59,    73,   -59,   -59,    43,   197,   -23,    12,   -59,   -59,
     -59,    74,   186,    12,   137,    43,    43,   -59,   -59,   -59,
     -59,   -59,   -59,    12,    15,    15,    15,    15,    15,   171,
     101,    75,    37,    77,    80,   -59,   -59,   120,    84,    12,
      12,   -59,   -59,    97,   -59,   -59,   100,   103,    83,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   124,   129,   105,
     -59,   -59,   141,   -59,   -59,   112,   -59,    12,   -59,   -59,
     190,   -59,    43,    43,   -59,   -59,   -59,   147,   -59,   121,
     -59,    37,   115,    12,   146,   171,   149,   -59
  };

  const signed char
  parser::yydefact_[] =
  {
       2,     0,     1,     0,     3,     9,     0,     0,     5,     0,
       0,     7,     0,     0,     0,     0,     5,     5,    10,     0,
       8,     6,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,    23,     0,     0,     0,    62,     0,     0,
       0,     0,     0,    48,     0,    35,    36,     0,     0,    62,
      57,     0,    26,    28,     0,    44,    49,    56,     0,     0,
       0,    64,    21,    22,     0,    24,     0,     4,     0,     0,
      11,     0,    31,    32,     0,     0,     0,     0,    54,    47,
      53,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,    54,    53,     0,    37,    58,    60,     0,     0,    27,
      29,    34,    46,    45,    50,    51,    52,     0,     0,     0,
      65,    63,     0,    33,    30,     0,    55,     0,    59,    16,
       0,    18,     0,     0,    12,    55,    61,     0,    19,     0,
      17,     0,     0,     0,     0,     0,     0,    20
  };

  const short
  parser::yypgoto_[] =
  {
     -59,   -59,   -59,    85,   161,   168,   -59,   -58,   -59,   -25,
      92,    95,   107,   -29,   -43,    -7,    48,   -26,   -33
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     4,     9,    10,    11,    12,    38,    39,    51,
      52,    53,    93,    54,    55,    56,   117,    57,    62
  };

  const short
  parser::yytable_[] =
  {
      40,   100,    63,    41,    79,    58,    60,    65,    61,    61,
     105,    76,     5,    43,     2,    75,    13,     3,    83,    82,
      66,    80,   110,    81,     7,    77,   118,    37,   111,     8,
      49,    78,    14,    40,    15,   103,    16,   104,    42,    17,
     106,   127,    40,    47,    43,    82,    76,    23,   113,   108,
     112,   122,   123,    24,   116,    25,    43,    64,    40,    26,
      64,    27,    49,    50,   121,    49,    50,    18,    19,   130,
      44,    45,    46,    40,    47,    66,    61,    96,    97,    98,
     134,   135,   147,    72,    73,    59,    47,    37,    48,   124,
     125,   126,    68,    49,    50,    94,    95,   156,   139,   140,
      74,    21,    22,    67,    71,    49,    50,    69,   116,    70,
      84,    99,    85,    86,    40,   101,   102,   148,   149,    28,
     114,   107,   128,   115,   154,   152,   129,   -13,   131,    40,
     133,    29,   132,   -13,   -13,    30,    31,    32,    28,   -13,
      33,    34,    35,   136,   137,   141,   142,   143,    36,   138,
      29,   144,   -13,   -13,    30,    31,    32,    28,   145,    33,
      34,    35,   150,   151,   153,   -13,   155,    36,    37,    29,
     157,     6,    28,    30,    31,    32,    20,   119,    33,    34,
      35,   120,   109,     0,    29,   146,    36,    37,    30,    31,
      32,    28,   -13,    33,    34,    35,     0,     0,     0,     0,
       0,    36,     0,    29,     0,   -13,    37,    30,    31,    32,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
      36,    37,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,   115,    87,    88,    89,    90,    91,    92,     0,
      37
  };

  const short
  parser::yycheck_[] =
  {
      26,    59,    35,    12,    47,    30,    32,    36,    34,    35,
      68,    31,    50,     1,     0,    44,     5,     3,    45,    48,
      47,    47,    45,    48,    42,    45,    84,    50,    51,     4,
      50,    51,    43,    59,    44,    64,    42,    66,    47,     6,
      69,    99,    68,    31,     1,    74,    31,    47,    77,    74,
      76,    94,    95,     7,    83,    51,     1,    45,    84,     8,
      45,    48,    50,    51,    93,    50,    51,    10,    11,   102,
      27,    28,    29,    99,    31,    47,   102,    33,    34,    35,
     109,   110,   140,    28,    29,    20,    31,    50,    45,    96,
      97,    98,    42,    50,    51,    31,    32,   155,    15,    16,
      45,    16,    17,     9,    51,    50,    51,    49,   137,    10,
      14,    20,    26,    25,   140,    49,    44,   142,   143,     1,
      46,    48,    21,    46,   153,   151,    51,     9,    48,   155,
      46,    13,    12,    15,    16,    17,    18,    19,     1,    21,
      22,    23,    24,    46,    44,    21,    17,    42,    30,    46,
      13,    10,    15,    16,    17,    18,    19,     1,    46,    22,
      23,    24,    15,    42,    49,     9,    20,    30,    50,    13,
      21,     3,     1,    17,    18,    19,    15,    85,    22,    23,
      24,    86,    75,    -1,    13,   137,    30,    50,    17,    18,
      19,     1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    13,    -1,    15,    50,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    50,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    36,    37,    38,    39,    40,    41,    -1,
      50
  };

  const signed char
  parser::yystos_[] =
  {
       0,    55,     0,     3,    56,    50,    59,    42,     4,    57,
      58,    59,    60,     5,    43,    44,    42,     6,    10,    11,
      58,    57,    57,    47,     7,    51,     8,    48,     1,    13,
      17,    18,    19,    22,    23,    24,    30,    50,    61,    62,
      71,    12,    47,     1,    27,    28,    29,    31,    45,    50,
      51,    63,    64,    65,    67,    68,    69,    71,    63,    20,
      71,    71,    72,    72,    45,    67,    47,     9,    42,    49,
      10,    51,    28,    29,    45,    67,    31,    45,    51,    68,
      71,    63,    67,    45,    14,    26,    25,    36,    37,    38,
      39,    40,    41,    66,    31,    32,    33,    34,    35,    20,
      61,    49,    44,    67,    67,    61,    67,    48,    63,    66,
      45,    51,    71,    67,    46,    46,    67,    70,    61,    64,
      65,    67,    68,    68,    69,    69,    69,    61,    21,    51,
      72,    48,    12,    46,    67,    67,    46,    44,    46,    15,
      16,    21,    17,    42,    10,    46,    70,    61,    63,    63,
      15,    42,    71,    49,    67,    20,    61,    21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    55,    56,    57,    57,    58,    58,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    72
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     0,     2,    12,     0,     3,     1,     3,     1,
       3,     8,    11,     0,     3,     3,     5,     7,     5,     6,
      13,     2,     2,     1,     2,     1,     1,     3,     1,     3,
       4,     2,     2,     4,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     1,
       3,     3,     3,     2,     2,     4,     1,     1,     3,     4,
       1,     3,     1,     4,     1,     3
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
  "$accept", "program", "function", "declarations", "identifiers", "ident",
  "declaration", "statements", "statement", "bool_expr",
  "relation_and_expr", "relation_expr", "comp", "expression",
  "multiplicative_expr", "term", "expressions", "var", "vars", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   140,   140,   144,   150,   166,   171,   181,   185,   192,
     195,   203,   210,   213,   214,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   231,   234,   235,
     238,   239,   240,   241,   242,   243,   244,   245,   248,   249,
     250,   251,   252,   253,   256,   257,   258,   259,   260,   263,
     264,   265,   266,   269,   270,   271,   272,   273,   274,   275,
     278,   279,   282,   283,   286,   287
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
#line 1673 "y.tab.cc"

#line 290 "mini_l.yy"


int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}
