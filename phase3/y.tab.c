// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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


// First part of user declarations.
#line 1 "mini_l.y" // lalr1.cc:404


#line 39 "y.tab.c" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "y.tab.h"

// User implementation prologue.

#line 53 "y.tab.c" // lalr1.cc:412
// Unqualified %code blocks.
#line 31 "mini_l.y" // lalr1.cc:413

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

#line 78 "y.tab.c" // lalr1.cc:413


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
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

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
      *yycdebug_ << std::endl;                  \
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
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 164 "y.tab.c" // lalr1.cc:479

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
        std::string yyr = "";
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
              // Fall through.
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


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 57: // declarations
      case 60: // declaration
        value.move< dec_type > (that.value);
        break;

      case 51: // NUMBER
        value.move< int > (that.value);
        break;

      case 58: // identifiers
        value.move< list<string> > (that.value);
        break;

      case 50: // IDENT
      case 55: // program
      case 56: // function
      case 59: // ident
      case 61: // statements
        value.move< string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 57: // declarations
      case 60: // declaration
        value.copy< dec_type > (that.value);
        break;

      case 51: // NUMBER
        value.copy< int > (that.value);
        break;

      case 58: // identifiers
        value.copy< list<string> > (that.value);
        break;

      case 50: // IDENT
      case 55: // program
      case 56: // function
      case 59: // ident
      case 61: // statements
        value.copy< string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
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

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
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

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

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
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 57: // declarations
      case 60: // declaration
        yylhs.value.build< dec_type > ();
        break;

      case 51: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 58: // identifiers
        yylhs.value.build< list<string> > ();
        break;

      case 50: // IDENT
      case 55: // program
      case 56: // function
      case 59: // ident
      case 61: // statements
        yylhs.value.build< string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 143 "mini_l.y" // lalr1.cc:859
    {
                            //$$ = "";
                            printf("program -> epsilon\n");
                        }
#line 603 "y.tab.c" // lalr1.cc:859
    break;

  case 3:
#line 147 "mini_l.y" // lalr1.cc:859
    {
                                // $$ = $1 + "\n" + $2;
                                printf("program -> program function\n");
                            }
#line 612 "y.tab.c" // lalr1.cc:859
    break;

  case 4:
#line 154 "mini_l.y" // lalr1.cc:859
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
#line 630 "y.tab.c" // lalr1.cc:859
    break;

  case 5:
#line 169 "mini_l.y" // lalr1.cc:859
    {
                                                // $$.code = "";
                                                // $$.ids = list<string>();
                                                printf("declarations -> epsilon\n");
                                            }
#line 640 "y.tab.c" // lalr1.cc:859
    break;

  case 6:
#line 174 "mini_l.y" // lalr1.cc:859
    {
                // $$.code = $1.code + "\n" + $3.code;
                // $$.ids = $1.ids;
                // for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); ++it) {
                //     $$.ids.push_back(*it);
                // }
                printf("declarations -> declaration SEMICOLON declarations\n");
            }
#line 653 "y.tab.c" // lalr1.cc:859
    break;

  case 7:
#line 184 "mini_l.y" // lalr1.cc:859
    {
                        // $$.push_back($1);
                        printf("identifiers -> ident\n");
                    }
#line 662 "y.tab.c" // lalr1.cc:859
    break;

  case 8:
#line 188 "mini_l.y" // lalr1.cc:859
    {
            //    $$ = $3;
            //    $$.push_front($1);
            {printf("identifiers -> ident COMMA identifier\n");}
           }
#line 672 "y.tab.c" // lalr1.cc:859
    break;

  case 9:
#line 195 "mini_l.y" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[0].value.as< string > ()}
#line 678 "y.tab.c" // lalr1.cc:859
    break;

  case 10:
#line 198 "mini_l.y" // lalr1.cc:859
    {
                // for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
                //     $$ += ". " + *it + "\n";
                //     $$.ids.push_back(*it);
                // }
                printf("declaration -> identifiers COLON INTEGER\n");
            }
#line 690 "y.tab.c" // lalr1.cc:859
    break;

  case 11:
#line 206 "mini_l.y" // lalr1.cc:859
    {
            //    for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); ++it) {
            //         $$ += ".[] " + *it + ", " + to_string($5) +  "\n"; // $5 is integer in square bracket
            //         $$.ids.push_back(*it);
            //     }
                printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");
           }
#line 702 "y.tab.c" // lalr1.cc:859
    break;

  case 12:
#line 213 "mini_l.y" // lalr1.cc:859
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 708 "y.tab.c" // lalr1.cc:859
    break;

  case 13:
#line 216 "mini_l.y" // lalr1.cc:859
    {printf("statements -> epsilon\n");}
#line 714 "y.tab.c" // lalr1.cc:859
    break;

  case 14:
#line 217 "mini_l.y" // lalr1.cc:859
    {printf("statements -> statement SEMICOLON statements\n");}
#line 720 "y.tab.c" // lalr1.cc:859
    break;

  case 15:
#line 220 "mini_l.y" // lalr1.cc:859
    {printf("statement -> var ASSIGN expression\n");}
#line 726 "y.tab.c" // lalr1.cc:859
    break;

  case 16:
#line 221 "mini_l.y" // lalr1.cc:859
    {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
#line 732 "y.tab.c" // lalr1.cc:859
    break;

  case 17:
#line 222 "mini_l.y" // lalr1.cc:859
    {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 738 "y.tab.c" // lalr1.cc:859
    break;

  case 18:
#line 223 "mini_l.y" // lalr1.cc:859
    {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 744 "y.tab.c" // lalr1.cc:859
    break;

  case 19:
#line 224 "mini_l.y" // lalr1.cc:859
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 750 "y.tab.c" // lalr1.cc:859
    break;

  case 20:
#line 225 "mini_l.y" // lalr1.cc:859
    {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
#line 756 "y.tab.c" // lalr1.cc:859
    break;

  case 21:
#line 226 "mini_l.y" // lalr1.cc:859
    {printf("READ vars\n");}
#line 762 "y.tab.c" // lalr1.cc:859
    break;

  case 22:
#line 227 "mini_l.y" // lalr1.cc:859
    {printf("WRITE vars\n");}
#line 768 "y.tab.c" // lalr1.cc:859
    break;

  case 23:
#line 228 "mini_l.y" // lalr1.cc:859
    {printf("CONTINUE\n");}
#line 774 "y.tab.c" // lalr1.cc:859
    break;

  case 24:
#line 229 "mini_l.y" // lalr1.cc:859
    {printf("RETURN expression\n");}
#line 780 "y.tab.c" // lalr1.cc:859
    break;

  case 25:
#line 230 "mini_l.y" // lalr1.cc:859
    {yyerror("incorrect statement");}
#line 786 "y.tab.c" // lalr1.cc:859
    break;

  case 26:
#line 233 "mini_l.y" // lalr1.cc:859
    {printf("bool_expr -> relation_and_expr\n");}
#line 792 "y.tab.c" // lalr1.cc:859
    break;

  case 27:
#line 234 "mini_l.y" // lalr1.cc:859
    {printf("bool_expr -> relation_and_expr OR relation_and_expr\n");}
#line 798 "y.tab.c" // lalr1.cc:859
    break;

  case 28:
#line 237 "mini_l.y" // lalr1.cc:859
    {printf("relation_and_expr -> relation_expr\n");}
#line 804 "y.tab.c" // lalr1.cc:859
    break;

  case 29:
#line 238 "mini_l.y" // lalr1.cc:859
    {printf("relation_and_expr -> relation_expr AND relation_expr\n");}
#line 810 "y.tab.c" // lalr1.cc:859
    break;

  case 30:
#line 241 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> NOT expression comp expression\n");}
#line 816 "y.tab.c" // lalr1.cc:859
    break;

  case 31:
#line 242 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> NOT TRUE\n");}
#line 822 "y.tab.c" // lalr1.cc:859
    break;

  case 32:
#line 243 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> NOT FALSE\n");}
#line 828 "y.tab.c" // lalr1.cc:859
    break;

  case 33:
#line 244 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
#line 834 "y.tab.c" // lalr1.cc:859
    break;

  case 34:
#line 245 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> expression comp expression\n");}
#line 840 "y.tab.c" // lalr1.cc:859
    break;

  case 35:
#line 246 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> TRUE\n");}
#line 846 "y.tab.c" // lalr1.cc:859
    break;

  case 36:
#line 247 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> FALSE\n");}
#line 852 "y.tab.c" // lalr1.cc:859
    break;

  case 37:
#line 248 "mini_l.y" // lalr1.cc:859
    {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
#line 858 "y.tab.c" // lalr1.cc:859
    break;

  case 38:
#line 251 "mini_l.y" // lalr1.cc:859
    {printf("comp -> EQ\n");}
#line 864 "y.tab.c" // lalr1.cc:859
    break;

  case 39:
#line 252 "mini_l.y" // lalr1.cc:859
    {printf("comp -> NEQ\n");}
#line 870 "y.tab.c" // lalr1.cc:859
    break;

  case 40:
#line 253 "mini_l.y" // lalr1.cc:859
    {printf("comp -> LT\n");}
#line 876 "y.tab.c" // lalr1.cc:859
    break;

  case 41:
#line 254 "mini_l.y" // lalr1.cc:859
    {printf("comp -> GT\n");}
#line 882 "y.tab.c" // lalr1.cc:859
    break;

  case 42:
#line 255 "mini_l.y" // lalr1.cc:859
    {printf("comp -> LTE\n");}
#line 888 "y.tab.c" // lalr1.cc:859
    break;

  case 43:
#line 256 "mini_l.y" // lalr1.cc:859
    {printf("comp -> GTE\n");}
#line 894 "y.tab.c" // lalr1.cc:859
    break;

  case 44:
#line 259 "mini_l.y" // lalr1.cc:859
    {printf("expression -> multiplicative_expr\n");}
#line 900 "y.tab.c" // lalr1.cc:859
    break;

  case 45:
#line 260 "mini_l.y" // lalr1.cc:859
    {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
#line 906 "y.tab.c" // lalr1.cc:859
    break;

  case 46:
#line 261 "mini_l.y" // lalr1.cc:859
    {printf("expression -> multiplicative_expr SUB multiplicative_expr\n");}
#line 912 "y.tab.c" // lalr1.cc:859
    break;

  case 47:
#line 262 "mini_l.y" // lalr1.cc:859
    {printf("expression -> UMINUS multiplicative_expr\n");}
#line 918 "y.tab.c" // lalr1.cc:859
    break;

  case 48:
#line 263 "mini_l.y" // lalr1.cc:859
    {yyerror("incorrect statement");}
#line 924 "y.tab.c" // lalr1.cc:859
    break;

  case 49:
#line 266 "mini_l.y" // lalr1.cc:859
    {printf("multiplicative_expr -> term\n");}
#line 930 "y.tab.c" // lalr1.cc:859
    break;

  case 50:
#line 267 "mini_l.y" // lalr1.cc:859
    {printf("multiplicative_expr -> term MULT term\n");}
#line 936 "y.tab.c" // lalr1.cc:859
    break;

  case 51:
#line 268 "mini_l.y" // lalr1.cc:859
    {printf("multiplicative_expr -> term DIV term\n");}
#line 942 "y.tab.c" // lalr1.cc:859
    break;

  case 52:
#line 269 "mini_l.y" // lalr1.cc:859
    {printf("multiplicative_expr -> term MOD term\n");}
#line 948 "y.tab.c" // lalr1.cc:859
    break;

  case 53:
#line 272 "mini_l.y" // lalr1.cc:859
    {printf("term -> SUB var\n");}
#line 954 "y.tab.c" // lalr1.cc:859
    break;

  case 54:
#line 273 "mini_l.y" // lalr1.cc:859
    {printf("term -> SUB NUMBER\n");}
#line 960 "y.tab.c" // lalr1.cc:859
    break;

  case 55:
#line 274 "mini_l.y" // lalr1.cc:859
    {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 966 "y.tab.c" // lalr1.cc:859
    break;

  case 56:
#line 275 "mini_l.y" // lalr1.cc:859
    {printf("term -> var\n");}
#line 972 "y.tab.c" // lalr1.cc:859
    break;

  case 57:
#line 276 "mini_l.y" // lalr1.cc:859
    {printf("term -> NUMBER\n");}
#line 978 "y.tab.c" // lalr1.cc:859
    break;

  case 58:
#line 277 "mini_l.y" // lalr1.cc:859
    {printf("term -> L_PAREN expression R_PAREN\n");}
#line 984 "y.tab.c" // lalr1.cc:859
    break;

  case 59:
#line 278 "mini_l.y" // lalr1.cc:859
    {printf("term -> ident L_PAREN expressions R_PAREN\n");}
#line 990 "y.tab.c" // lalr1.cc:859
    break;

  case 60:
#line 281 "mini_l.y" // lalr1.cc:859
    {printf("expressions -> expression\n");}
#line 996 "y.tab.c" // lalr1.cc:859
    break;

  case 61:
#line 282 "mini_l.y" // lalr1.cc:859
    {printf("expressions -> expression COMMA expressions\n");}
#line 1002 "y.tab.c" // lalr1.cc:859
    break;

  case 62:
#line 285 "mini_l.y" // lalr1.cc:859
    {printf("var -> ident\n");}
#line 1008 "y.tab.c" // lalr1.cc:859
    break;

  case 63:
#line 286 "mini_l.y" // lalr1.cc:859
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1014 "y.tab.c" // lalr1.cc:859
    break;

  case 64:
#line 289 "mini_l.y" // lalr1.cc:859
    {printf("vars -> var\n");}
#line 1020 "y.tab.c" // lalr1.cc:859
    break;

  case 65:
#line 290 "mini_l.y" // lalr1.cc:859
    {printf("var COMMA vars\n");}
#line 1026 "y.tab.c" // lalr1.cc:859
    break;


#line 1030 "y.tab.c" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
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
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
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

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
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

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

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
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -59;

  const signed char parser::yytable_ninf_ = -14;

  const short int
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

  const unsigned char
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

  const short int
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

  const short int
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

  const short int
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

  const unsigned char
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

  const unsigned char
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

  const unsigned char
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



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO",
  "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR",
  "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "IDENT", "NUMBER", "ERROR", "UMINUS", "$accept", "program", "function",
  "declarations", "identifiers", "ident", "declaration", "statements",
  "statement", "bool_expr", "relation_and_expr", "relation_expr", "comp",
  "expression", "multiplicative_expr", "term", "expressions", "var",
  "vars", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   143,   143,   147,   153,   169,   174,   184,   188,   195,
     198,   206,   213,   216,   217,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   233,   234,   237,   238,
     241,   242,   243,   244,   245,   246,   247,   248,   251,   252,
     253,   254,   255,   256,   259,   260,   261,   262,   263,   266,
     267,   268,   269,   272,   273,   274,   275,   276,   277,   278,
     281,   282,   285,   286,   289,   290
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1516 "y.tab.c" // lalr1.cc:1167
#line 293 "mini_l.y" // lalr1.cc:1168


int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}
