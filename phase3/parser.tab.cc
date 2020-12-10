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

//  #include <stdio.h>
//  #include <stdlib.h>
//  #include "y.tab.h"
//  #include <string.h>
//  void yyerror(const char *msg);
//  extern int currLine;
//  extern int currPos;
//  extern const char* yytext;
//  int yylex();

#line 53 "parser.tab.cc"


#include "parser.tab.hh"


// Unqualified %code blocks.
#line 44 "mini_l.yy"

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

#line 83 "parser.tab.cc"


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
#line 175 "parser.tab.cc"

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
      case symbol_kind::S_IDENT: // IDENT
        value.YY_MOVE_OR_COPY< cval > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< ival > (YY_MOVE (that.value));
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
      case symbol_kind::S_IDENT: // IDENT
        value.move< cval > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< ival > (YY_MOVE (that.value));
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
      case symbol_kind::S_IDENT: // IDENT
        value.copy< cval > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< ival > (that.value);
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
      case symbol_kind::S_IDENT: // IDENT
        value.move< cval > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< ival > (that.value);
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
      case symbol_kind::S_IDENT: // IDENT
        yylhs.value.emplace< cval > ();
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< ival > ();
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
#line 154 "mini_l.yy"
                       {printf("program -> epsilon\n");}
#line 608 "parser.tab.cc"
    break;

  case 3: // program: program function
#line 155 "mini_l.yy"
                          {printf("program -> program function\n");}
#line 614 "parser.tab.cc"
    break;

  case 4: // function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
#line 158 "mini_l.yy"
                                                                                                                                           {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 620 "parser.tab.cc"
    break;

  case 5: // function: FUNCTION IDENT error BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
#line 159 "mini_l.yy"
                                                                                                                                            {yyerror(" \";\" expected");}
#line 626 "parser.tab.cc"
    break;

  case 6: // declarations: %empty
#line 162 "mini_l.yy"
                            {printf("declarations -> epsilon\n");}
#line 632 "parser.tab.cc"
    break;

  case 7: // declarations: declaration SEMICOLON declarations
#line 163 "mini_l.yy"
                                                 {printf("declarations -> declaration SEMICOLON declarations\n");}
#line 638 "parser.tab.cc"
    break;

  case 8: // declarations: error declarations
#line 164 "mini_l.yy"
                                 {printf("Syntax Error: expected \";\" near line %d\n", currLine);}
#line 644 "parser.tab.cc"
    break;

  case 9: // declaration: identifiers COLON INTEGER
#line 167 "mini_l.yy"
                                       {printf("declaration -> identifiers COLON INTEGER\n");}
#line 650 "parser.tab.cc"
    break;

  case 10: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 168 "mini_l.yy"
                                                                                         {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 656 "parser.tab.cc"
    break;

  case 11: // declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 169 "mini_l.yy"
                                                                                                                                  {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 662 "parser.tab.cc"
    break;

  case 13: // identifiers: ident
#line 173 "mini_l.yy"
                   {printf("identifiers -> ident\n");}
#line 668 "parser.tab.cc"
    break;

  case 14: // identifiers: identifiers COMMA ident
#line 174 "mini_l.yy"
                                     {printf("identifiers -> ident COMMA identifier\n");}
#line 674 "parser.tab.cc"
    break;

  case 16: // ident: IDENT
#line 179 "mini_l.yy"
                  {printf("ident -> IDENT %s \n", yystack_[0].value.as < cval > ());}
#line 680 "parser.tab.cc"
    break;

  case 17: // statements: %empty
#line 182 "mini_l.yy"
                          {printf("statements -> epsilon\n");}
#line 686 "parser.tab.cc"
    break;

  case 18: // statements: statement SEMICOLON statements
#line 183 "mini_l.yy"
                                           {printf("statements -> statement SEMICOLON statements\n");}
#line 692 "parser.tab.cc"
    break;

  case 19: // statements: statement error statements
#line 184 "mini_l.yy"
                                       {printf("Syntax Error: expected \";\" near line %d\n", currLine);}
#line 698 "parser.tab.cc"
    break;

  case 20: // statement: var ASSIGN expression
#line 187 "mini_l.yy"
                                 {printf("statement -> var ASSIGN expression\n");}
#line 704 "parser.tab.cc"
    break;

  case 21: // statement: IF bool_expr THEN statements ENDIF
#line 188 "mini_l.yy"
                                              {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
#line 710 "parser.tab.cc"
    break;

  case 22: // statement: IF bool_expr THEN statements ELSE statements ENDIF
#line 189 "mini_l.yy"
                                                              {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 716 "parser.tab.cc"
    break;

  case 23: // statement: WHILE bool_expr BEGINLOOP statements ENDLOOP
#line 190 "mini_l.yy"
                                                        {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 722 "parser.tab.cc"
    break;

  case 24: // statement: DO BEGINLOOP statements ENDLOOP WHILE bool_expr
#line 191 "mini_l.yy"
                                                           {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 728 "parser.tab.cc"
    break;

  case 25: // statement: FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
#line 192 "mini_l.yy"
                                                                                                                  {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
#line 734 "parser.tab.cc"
    break;

  case 26: // statement: READ vars
#line 193 "mini_l.yy"
                     {printf("statement -> READ vars\n");}
#line 740 "parser.tab.cc"
    break;

  case 27: // statement: WRITE vars
#line 194 "mini_l.yy"
                      {printf("statement -> WRITE vars\n");}
#line 746 "parser.tab.cc"
    break;

  case 28: // statement: CONTINUE
#line 195 "mini_l.yy"
                    {printf("statement -> CONTINUE\n");}
#line 752 "parser.tab.cc"
    break;

  case 29: // statement: RETURN expression
#line 196 "mini_l.yy"
                             {printf("statement ->RETURN expression\n");}
#line 758 "parser.tab.cc"
    break;

  case 31: // bool_expr: relation_and_expr
#line 200 "mini_l.yy"
                             {printf("bool_expr -> relation_and_expr\n");}
#line 764 "parser.tab.cc"
    break;

  case 32: // bool_expr: relation_and_expr OR bool_expr
#line 201 "mini_l.yy"
                                          {printf("bool_expr -> relation_and_expr OR bool_expr\n");}
#line 770 "parser.tab.cc"
    break;

  case 33: // relation_and_expr: relation_expr
#line 204 "mini_l.yy"
                                 {printf("relation_and_expr -> relation_expr\n");}
#line 776 "parser.tab.cc"
    break;

  case 34: // relation_and_expr: relation_and_expr AND relation_expr
#line 205 "mini_l.yy"
                                                       {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
#line 782 "parser.tab.cc"
    break;

  case 35: // relation_expr: NOT expression comp expression
#line 208 "mini_l.yy"
                                              {printf("relation_expr -> NOT expression comp expression\n");}
#line 788 "parser.tab.cc"
    break;

  case 36: // relation_expr: NOT TRUE
#line 209 "mini_l.yy"
                        {printf("relation_expr -> NOT TRUE\n");}
#line 794 "parser.tab.cc"
    break;

  case 37: // relation_expr: NOT FALSE
#line 210 "mini_l.yy"
                         {printf("relation_expr -> NOT FALSE\n");}
#line 800 "parser.tab.cc"
    break;

  case 38: // relation_expr: NOT L_PAREN bool_expr R_PAREN
#line 211 "mini_l.yy"
                                             {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
#line 806 "parser.tab.cc"
    break;

  case 39: // relation_expr: expression comp expression
#line 212 "mini_l.yy"
                                          {printf("relation_expr -> expression comp expression\n");}
#line 812 "parser.tab.cc"
    break;

  case 40: // relation_expr: TRUE
#line 213 "mini_l.yy"
                    {printf("relation_expr -> TRUE\n");}
#line 818 "parser.tab.cc"
    break;

  case 41: // relation_expr: FALSE
#line 214 "mini_l.yy"
                     {printf("relation_expr -> FALSE\n");}
#line 824 "parser.tab.cc"
    break;

  case 42: // relation_expr: L_PAREN bool_expr R_PAREN
#line 215 "mini_l.yy"
                                         {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
#line 830 "parser.tab.cc"
    break;

  case 43: // comp: EQ
#line 218 "mini_l.yy"
         {printf("comp -> EQ\n");}
#line 836 "parser.tab.cc"
    break;

  case 44: // comp: NEQ
#line 219 "mini_l.yy"
          {printf("comp -> NEQ\n");}
#line 842 "parser.tab.cc"
    break;

  case 45: // comp: LT
#line 220 "mini_l.yy"
         {printf("comp -> LT\n");}
#line 848 "parser.tab.cc"
    break;

  case 46: // comp: GT
#line 221 "mini_l.yy"
         {printf("comp -> GT\n");}
#line 854 "parser.tab.cc"
    break;

  case 47: // comp: LTE
#line 222 "mini_l.yy"
          {printf("comp -> LTE\n");}
#line 860 "parser.tab.cc"
    break;

  case 48: // comp: GTE
#line 223 "mini_l.yy"
          {printf("comp -> GTE\n");}
#line 866 "parser.tab.cc"
    break;

  case 49: // expression: multiplicative_expr
#line 226 "mini_l.yy"
                                {printf("expression -> multiplicative_expr\n");}
#line 872 "parser.tab.cc"
    break;

  case 50: // expression: expression ADD multiplicative_expr
#line 227 "mini_l.yy"
                                               {printf("expression -> expression ADD multiplicative_expr\n");}
#line 878 "parser.tab.cc"
    break;

  case 51: // expression: expression SUB multiplicative_expr
#line 228 "mini_l.yy"
                                               {printf("expression -> expression SUB multiplicative_expr\n");}
#line 884 "parser.tab.cc"
    break;

  case 52: // multiplicative_expr: term
#line 231 "mini_l.yy"
                          {printf("multiplicative_expr -> term\n");}
#line 890 "parser.tab.cc"
    break;

  case 53: // multiplicative_expr: multiplicative_expr MULT term
#line 232 "mini_l.yy"
                                                   {printf("multiplicative_expr -> term MULT term\n");}
#line 896 "parser.tab.cc"
    break;

  case 54: // multiplicative_expr: multiplicative_expr DIV term
#line 233 "mini_l.yy"
                                                  {printf("multiplicative_expr -> term DIV term\n");}
#line 902 "parser.tab.cc"
    break;

  case 55: // multiplicative_expr: multiplicative_expr MOD term
#line 234 "mini_l.yy"
                                                  {printf("multiplicative_expr -> term MOD term\n");}
#line 908 "parser.tab.cc"
    break;

  case 56: // term: SUB var
#line 237 "mini_l.yy"
                           {printf("term -> var UMINU\n");}
#line 914 "parser.tab.cc"
    break;

  case 57: // term: SUB NUMBER
#line 238 "mini_l.yy"
                              {printf("term-> UMINUS NUMBER\n");}
#line 920 "parser.tab.cc"
    break;

  case 58: // term: SUB L_PAREN expression R_PAREN
#line 239 "mini_l.yy"
                                     {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 926 "parser.tab.cc"
    break;

  case 59: // term: var
#line 240 "mini_l.yy"
          {printf("term -> var\n");}
#line 932 "parser.tab.cc"
    break;

  case 60: // term: NUMBER
#line 241 "mini_l.yy"
             {printf("term -> NUMBER\n");}
#line 938 "parser.tab.cc"
    break;

  case 61: // term: L_PAREN expression R_PAREN
#line 242 "mini_l.yy"
                                 {printf("term -> L_PAREN expression R_PAREN\n");}
#line 944 "parser.tab.cc"
    break;

  case 62: // term: IDENT L_PAREN expressions R_PAREN
#line 243 "mini_l.yy"
                                        {printf("term -> ident L_PAREN expressions R_PAREN\n");}
#line 950 "parser.tab.cc"
    break;

  case 63: // expressions: expression
#line 246 "mini_l.yy"
                        {printf("expressions -> expression\n");}
#line 956 "parser.tab.cc"
    break;

  case 64: // expressions: expression COMMA expressions
#line 247 "mini_l.yy"
                                         {printf("expressions -> expression COMMA expressions\n");}
#line 962 "parser.tab.cc"
    break;

  case 65: // var: ident
#line 250 "mini_l.yy"
           {printf("var -> ident\n");}
#line 968 "parser.tab.cc"
    break;

  case 66: // var: ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
#line 251 "mini_l.yy"
                                                        {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 974 "parser.tab.cc"
    break;

  case 67: // vars: var
#line 254 "mini_l.yy"
          {printf("vars -> var\n");}
#line 980 "parser.tab.cc"
    break;

  case 68: // vars: var COMMA vars
#line 255 "mini_l.yy"
                     {printf("vars -> var COMMA vars\n");}
#line 986 "parser.tab.cc"
    break;


#line 990 "parser.tab.cc"

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


  const signed char parser::yypact_ninf_ = -47;

  const signed char parser::yytable_ninf_ = -7;

  const short
  parser::yypact_[] =
  {
     -47,    17,   -47,   -24,   -47,    22,     8,    28,    13,    13,
       6,   -47,    29,    -1,    14,   -47,    43,   -47,    46,     6,
       0,    26,    18,    64,    15,   -47,   -47,   -47,   -47,    31,
     -47,    15,    66,    48,   109,   106,    77,   129,    70,    -7,
      70,    53,    53,   131,    18,   -47,    18,    18,    97,    83,
     147,    24,     2,   157,   117,   172,   107,   -47,   -47,   -21,
      53,   137,   -47,   169,    76,   -47,   134,   110,   -47,   -47,
     164,    70,   136,   142,   -47,   -47,    97,   118,    97,   -47,
      70,    70,    97,    97,   -47,   139,   -47,   -47,   -47,    53,
     134,    97,   -47,   -47,   143,   123,    97,    70,    53,    53,
      97,    97,   -47,   -47,   -47,   -47,   -47,   -47,    97,    97,
      97,    97,    70,   167,   140,    18,    40,     7,   -47,   -47,
     118,   118,   178,   146,    97,    59,   -47,   -47,    65,   148,
      92,   -47,   -47,   110,   110,   118,   -47,   -47,   -47,   174,
     176,   154,   -47,   -47,   187,   -47,   118,   -47,    97,   -47,
     -47,    70,   -47,    53,    53,   -47,   -47,   183,   -47,   158,
     -47,    18,   150,    97,    86,    70,   180,   -47
  };

  const signed char
  parser::yydefact_[] =
  {
       2,     0,     1,     0,     3,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,    13,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     7,    12,    15,     9,     0,
      14,     0,     0,     0,     0,     0,     0,     0,    17,     0,
      17,     0,     0,     0,     0,    28,     0,     0,     0,    65,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
       0,    16,    60,     0,    31,    33,     0,    49,    52,    59,
       0,    17,     0,    67,    26,    27,     0,    29,     0,     5,
      17,    17,     0,     0,    10,     0,     4,    36,    37,     0,
       0,     0,    57,    56,     0,     0,     0,    17,     0,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    19,    18,
      30,    20,     0,     0,     0,     0,    42,    61,    63,     0,
       0,    34,    32,    51,    50,    39,    53,    54,    55,     0,
       0,     0,    68,    66,     0,    38,    35,    58,     0,    62,
      21,    17,    23,     0,     0,    11,    64,     0,    24,     0,
      22,     0,     0,     0,     0,    17,     0,    25
  };

  const signed char
  parser::yypgoto_[] =
  {
     -47,   -47,   -47,   122,   -47,   -47,   102,   -36,   -47,   -14,
     -47,   104,   113,   -29,    79,    67,    56,   -38,   -46
  };

  const short
  parser::yydefgoto_[] =
  {
      -1,     1,     4,    12,    13,    14,    49,    50,    51,    63,
      64,    65,   108,    66,    67,    68,   129,    69,    74
  };

  const short
  parser::yytable_[] =
  {
      52,    75,    52,    82,    55,    53,    72,    10,    73,    73,
      26,    -6,     8,    -6,    10,    20,    10,     2,    -6,    77,
       3,    93,    -6,     6,    91,    80,     5,    90,    70,    11,
      92,    95,     9,    52,    18,   113,    28,    29,   100,   101,
      54,    19,    52,    52,   118,   119,    94,   116,    23,   117,
      11,    83,    24,   120,   121,   143,    11,    21,    22,    52,
      95,   130,   125,    11,     7,    11,    81,   128,    11,   142,
      31,   100,   101,    35,    52,   123,   139,    73,    33,   135,
      56,    57,    58,    41,    59,   132,   127,    42,    43,    44,
     100,   101,    45,    46,    47,   146,   100,   101,    60,    36,
      48,    98,    99,    61,    62,   147,   165,   150,   151,   148,
      15,    15,    15,    52,    38,   157,    37,   100,   101,   128,
      11,    15,    27,   162,    30,    39,    15,    52,    59,   166,
      78,    16,    17,    15,   164,    87,    88,    40,    59,   158,
     159,    25,    76,   109,   110,   111,    32,    61,    62,   100,
     101,    71,    89,    34,   100,   101,    79,    61,    62,   102,
     103,   104,   105,   106,   107,   100,   101,    84,    85,   127,
     102,   103,   104,   105,   106,   107,   136,   137,   138,   133,
     134,    86,    96,    97,   112,   114,   115,   122,   140,   126,
     144,   141,   145,   153,   149,   152,   154,   155,   160,   163,
     161,   167,   131,   124,   156
  };

  const unsigned char
  parser::yycheck_[] =
  {
      38,    47,    40,     1,    40,    12,    44,     1,    46,    47,
      10,     5,     4,     7,     1,     1,     1,     0,     5,    48,
       3,    59,     7,     1,    45,     1,    50,    56,    42,    50,
      51,    60,     4,    71,     5,    71,    10,    11,    31,    32,
      47,    42,    80,    81,    80,    81,    60,    76,     5,    78,
      50,    49,     6,    82,    83,    48,    50,    43,    44,    97,
      89,    97,    91,    50,    42,    50,    42,    96,    50,   115,
       6,    31,    32,     7,   112,    89,   112,   115,    47,   108,
      27,    28,    29,    13,    31,    99,    46,    17,    18,    19,
      31,    32,    22,    23,    24,   124,    31,    32,    45,    51,
      30,    25,    26,    50,    51,    46,    20,    15,    16,    44,
       8,     9,    10,   151,     8,   151,     7,    31,    32,   148,
      50,    19,    20,   161,    22,    48,    24,   165,    31,   165,
      47,     9,    10,    31,   163,    28,    29,     8,    31,   153,
     154,    19,    45,    33,    34,    35,    24,    50,    51,    31,
      32,    20,    45,    31,    31,    32,     9,    50,    51,    36,
      37,    38,    39,    40,    41,    31,    32,    10,    51,    46,
      36,    37,    38,    39,    40,    41,   109,   110,   111,   100,
     101,     9,    45,    14,    20,    49,    44,    48,    21,    46,
      12,    51,    46,    17,    46,    21,    42,    10,    15,    49,
      42,    21,    98,    90,   148
  };

  const signed char
  parser::yystos_[] =
  {
       0,    55,     0,     3,    56,    50,     1,    42,     4,     4,
       1,    50,    57,    58,    59,    60,    57,    57,     5,    42,
       1,    43,    44,     5,     6,    57,    10,    60,    10,    11,
      60,     6,    57,    47,    57,     7,    51,     7,     8,    48,
       8,    13,    17,    18,    19,    22,    23,    24,    30,    60,
      61,    62,    71,    12,    47,    61,    27,    28,    29,    31,
      45,    50,    51,    63,    64,    65,    67,    68,    69,    71,
      63,    20,    71,    71,    72,    72,    45,    67,    47,     9,
       1,    42,     1,    49,    10,    51,     9,    28,    29,    45,
      67,    45,    51,    71,    63,    67,    45,    14,    25,    26,
      31,    32,    36,    37,    38,    39,    40,    41,    66,    33,
      34,    35,    20,    61,    49,    44,    67,    67,    61,    61,
      67,    67,    48,    63,    66,    67,    46,    46,    67,    70,
      61,    65,    63,    68,    68,    67,    69,    69,    69,    61,
      21,    51,    72,    48,    12,    46,    67,    46,    44,    46,
      15,    16,    21,    17,    42,    10,    70,    61,    63,    63,
      15,    42,    71,    49,    67,    20,    61,    21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    55,    56,    56,    57,    57,    57,    58,
      58,    58,    58,    59,    59,    59,    60,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     0,     2,    12,    12,     0,     3,     2,     3,
       8,    11,     3,     1,     3,     3,     1,     0,     3,     3,
       3,     5,     7,     5,     6,    13,     2,     2,     1,     2,
       3,     1,     3,     1,     3,     4,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     2,     2,     4,     1,
       1,     3,     4,     1,     3,     1,     4,     1,     3
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
  "$accept", "program", "function", "declarations", "declaration",
  "identifiers", "ident", "statements", "statement", "bool_expr",
  "relation_and_expr", "relation_expr", "comp", "expression",
  "multiplicative_expr", "term", "expressions", "var", "vars", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,   154,   154,   155,   158,   159,   162,   163,   164,   167,
     168,   169,   170,   173,   174,   175,   179,   182,   183,   184,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   200,   201,   204,   205,   208,   209,   210,   211,   212,
     213,   214,   215,   218,   219,   220,   221,   222,   223,   226,
     227,   228,   231,   232,   233,   234,   237,   238,   239,   240,
     241,   242,   243,   246,   247,   250,   251,   254,   255
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
#line 1564 "parser.tab.cc"

#line 258 "mini_l.yy"


int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}
