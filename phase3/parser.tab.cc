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
#line 1 "mini_l.yy" // lalr1.cc:404

extern int currLine;
extern int currPos;

#line 41 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 55 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 44 "mini_l.yy" // lalr1.cc:413

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

#line 82 "parser.tab.cc" // lalr1.cc:413


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
#line 168 "parser.tab.cc" // lalr1.cc:479

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
      case 58: // declarations
      case 59: // declaration
        value.move< dec_type > (that.value);
        break;

      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
        value.move< exp_type > (that.value);
        break;

      case 51: // NUMBER
        value.move< int > (that.value);
        break;

      case 60: // identifiers
      case 73: // vars
        value.move< list<string> > (that.value);
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
        value.move< string > (that.value);
        break;

      case 71: // expressions
        value.move< vector<vector<exp_type>> > (that.value);
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
      case 58: // declarations
      case 59: // declaration
        value.copy< dec_type > (that.value);
        break;

      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
        value.copy< exp_type > (that.value);
        break;

      case 51: // NUMBER
        value.copy< int > (that.value);
        break;

      case 60: // identifiers
      case 73: // vars
        value.copy< list<string> > (that.value);
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
        value.copy< string > (that.value);
        break;

      case 71: // expressions
        value.copy< vector<vector<exp_type>> > (that.value);
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
      case 58: // declarations
      case 59: // declaration
        yylhs.value.build< dec_type > ();
        break;

      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
        yylhs.value.build< exp_type > ();
        break;

      case 51: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 60: // identifiers
      case 73: // vars
        yylhs.value.build< list<string> > ();
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
        yylhs.value.build< string > ();
        break;

      case 71: // expressions
        yylhs.value.build< vector<vector<exp_type>> > ();
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
#line 161 "mini_l.yy" // lalr1.cc:859
    {cout << yystack_[0].value.as< string > () << endl;}
#line 646 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 164 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 652 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 165 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[1].value.as< string > () + "\n" + yystack_[0].value.as< string > ();}
#line 658 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 168 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< string > () = "func " + yystack_[10].value.as< string > () + "\n";
							yylhs.value.as< string > () += yystack_[7].value.as< dec_type > ().code;
							int i = 0;
							for(list<string>::iterator it = yystack_[7].value.as< dec_type > ().ids.begin(); it != yystack_[7].value.as< dec_type > ().ids.end(); it++){
								yylhs.value.as< string > () += *it + " $" + to_string(i) + "\n";
								i++;
							}
							yylhs.value.as< string > () += yystack_[4].value.as< dec_type > ().code;
							yylhs.value.as< string > () += yystack_[1].value.as< string > ();
							yylhs.value.as< string > () += "endfunc";
						}
#line 675 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 182 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< dec_type > ().code = "";
							yylhs.value.as< dec_type > ().ids = list<string>();
						}
#line 684 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 186 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< dec_type > ().code = yystack_[2].value.as< dec_type > ().code + "\n" + yystack_[0].value.as< dec_type > ().code;
							yylhs.value.as< dec_type > ().ids = yystack_[2].value.as< dec_type > ().ids;
							for(list<string>::iterator it = yystack_[0].value.as< dec_type > ().ids.begin(); it != yystack_[0].value.as< dec_type > ().ids.end(); it++){
								yylhs.value.as< dec_type > ().ids.push_back(*it);
							}
						}
#line 696 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 195 "mini_l.yy" // lalr1.cc:859
    {	
							for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
								yylhs.value.as< dec_type > ().code += ". " + *it + "\n";
								yylhs.value.as< dec_type > ().ids.push_back(*it);
							}
						}
#line 707 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 201 "mini_l.yy" // lalr1.cc:859
    {
							for(list<string>::iterator it = yystack_[7].value.as< list<string> > ().begin(); it != yystack_[7].value.as< list<string> > ().end(); it++) {
								yylhs.value.as< dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as< int > ()) +"\n";
								yylhs.value.as< dec_type > ().ids.push_back(*it);
							}	
						}
#line 718 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 207 "mini_l.yy" // lalr1.cc:859
    {
							for(list<string>::iterator it = yystack_[10].value.as< list<string> > ().begin(); it != yystack_[10].value.as< list<string> > ().end(); it++) {
								yylhs.value.as< dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[6].value.as< int > () * yystack_[3].value.as< int > ()) +"\n";
								yylhs.value.as< dec_type > ().ids.push_back(*it);		
							}
						}
#line 729 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 215 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ());}
#line 735 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 216 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< list<string> > () = yystack_[0].value.as< list<string> > ();
							yylhs.value.as< list<string> > ().push_front(yystack_[2].value.as< string > ());
						}
#line 744 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 222 "mini_l.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[0].value.as< string > ();}
#line 750 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 225 "mini_l.yy" // lalr1.cc:859
    {
			 				yylhs.value.as< string > () = "";
						}
#line 758 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 228 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< string > () = yystack_[2].value.as< string > () + "\n" + yystack_[0].value.as< string > ();
						}
#line 766 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 233 "mini_l.yy" // lalr1.cc:859
    {
							/*for (int i = 0; i < $3.size(); ++i) {
								$$ += "= " + $1 + $3.at(i).id + "\n";
								$$ += $3.at(i).code;
							}*/
							yylhs.value.as< string > () += "= " + yystack_[2].value.as< string > () + yystack_[0].value.as< exp_type > ().id + "\n";
							yylhs.value.as< string > () += yystack_[0].value.as< exp_type > ().code;
						}
#line 779 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 241 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 787 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 244 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 795 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 247 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 803 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 250 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 811 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 253 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 819 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 256 "mini_l.yy" // lalr1.cc:859
    {
							for(list<string>::iterator it = yystack_[0].value.as< list<string> > ().begin(); it != yystack_[0].value.as< list<string> > ().end(); it++) {
								yylhs.value.as< string > () += ".< " + *it + "\n";
							}
						}
#line 829 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 261 "mini_l.yy" // lalr1.cc:859
    {
							for(list<string>::iterator it = yystack_[0].value.as< list<string> > ().begin(); it != yystack_[0].value.as< list<string> > ().end(); it++) {
                                                                yylhs.value.as< string > () += ">. " + *it + "\n";
                                                        }
						}
#line 839 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 266 "mini_l.yy" // lalr1.cc:859
    {
						}
#line 846 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 268 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 854 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 273 "mini_l.yy" // lalr1.cc:859
    {
						}
#line 861 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 275 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 869 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 280 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 877 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 283 "mini_l.yy" // lalr1.cc:859
    {
							
						}
#line 885 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 288 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 893 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 291 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 901 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 294 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 909 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 297 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 917 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 300 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 925 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 303 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 933 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 306 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 941 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 309 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 949 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 314 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 957 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 317 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 965 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 320 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 973 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 323 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 981 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 326 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 989 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 329 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 997 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 334 "mini_l.yy" // lalr1.cc:859
    {
							//$$.push_back($1);
							yylhs.value.as< exp_type > () = yystack_[0].value.as< exp_type > ();	
						}
#line 1006 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 338 "mini_l.yy" // lalr1.cc:859
    {

							/*for (int i = 0; i < $1.size(); ++i) {
								exp_type newobj;
                                                         	newobj.id = newTemp();
                                                         	newobj.code = "";

								newobj.code = "+ " + newobj.id + ", " + $1.at(i).id + ", " + $3.id  + "\n";	
								
								$$.push_back(newobj);
							
							}*/
							yylhs.value.as< exp_type > ().id = newTemp();
                                                        yylhs.value.as< exp_type > ().code = " " + yylhs.value.as< exp_type > ().id + ", " + yystack_[2].value.as< exp_type > ().id + ", " + yystack_[0].value.as< exp_type > ().id + "\n";
						}
#line 1026 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 353 "mini_l.yy" // lalr1.cc:859
    {
							/*for (int i = 0; i < $1.size(); ++i) {
                                                                 exp_type newobj;
                                                                 newobj.id = newTemp();
                                                                 newobj.code = "";
                                                                 newobj.code = "- " + newobj.id + ", " + $1.at(i).id + ", " + $3.id     + "\n";
                                                            	 $$.push_back(newobj);
                                                         }*/
						}
#line 1040 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 364 "mini_l.yy" // lalr1.cc:859
    {
				//$$.push_back($1);
				yylhs.value.as< exp_type > () = yystack_[0].value.as< exp_type > ();
						}
#line 1049 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 368 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< exp_type > ().id = newTemp();
							yylhs.value.as< exp_type > ().code = "* " + yylhs.value.as< exp_type > ().id + ", " + yystack_[2].value.as< exp_type > ().id + ", " + yystack_[0].value.as< exp_type > ().id + "\n";
							
							
						}
#line 1060 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 374 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< exp_type > ().id = newTemp();
                                                        yylhs.value.as< exp_type > ().code = "/ " + yylhs.value.as< exp_type > ().id + ", " + yystack_[2].value.as< exp_type > ().id + ", " + yystack_[0].value.as< exp_type > ().id + "\n";		
						}
#line 1069 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 378 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< exp_type > ().id = newTemp();
                                                        yylhs.value.as< exp_type > ().code = "% " + yylhs.value.as< exp_type > ().id + ", " + yystack_[2].value.as< exp_type > ().id + ", " + yystack_[0].value.as< exp_type > ().id + "\n";	
						}
#line 1078 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 384 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 1086 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 387 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 1094 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 390 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 1102 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 393 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< exp_type > ().id = newTemp();
							yylhs.value.as< exp_type > ().code = yystack_[0].value.as< string > ();
						}
#line 1111 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 397 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< exp_type > ().id = newTemp();
							yylhs.value.as< exp_type > ().code = yystack_[0].value.as< int > ();
						}
#line 1120 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 401 "mini_l.yy" // lalr1.cc:859
    {
							
						}
#line 1128 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 404 "mini_l.yy" // lalr1.cc:859
    {

						}
#line 1136 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 409 "mini_l.yy" // lalr1.cc:859
    {
					//$$	
						}
#line 1144 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 412 "mini_l.yy" // lalr1.cc:859
    {
							/*$$.code = $1.code + "\n" + $3.code;
							$$.ids = $1.ids;
							for(list<string>::iterator it = $3.ids.begin(); it != $3.ids.end(); it++){
								$$.ids.push_back(*it);
							}*/
						}
#line 1156 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 421 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< string > () = yystack_[0].value.as< string > ();
						}
#line 1164 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 424 "mini_l.yy" // lalr1.cc:859
    {
							//$$ = $3;
							//$$.push_front($1);
						}
#line 1173 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 430 "mini_l.yy" // lalr1.cc:859
    {
						yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ());
						}
#line 1181 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 433 "mini_l.yy" // lalr1.cc:859
    {
							yylhs.value.as< list<string> > () = yystack_[0].value.as< list<string> > ();
                                                        yylhs.value.as< list<string> > ().push_front(yystack_[2].value.as< string > ());
						}
#line 1190 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1194 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -56;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
     -56,    16,    31,   -56,   -14,   -56,   -56,    22,    38,   -14,
      61,    43,    28,    49,    89,   -14,    14,   -14,   -14,   -56,
     -56,    65,   -56,   106,    70,   111,    82,    64,   -10,     1,
       1,   119,   -14,   -56,   -14,   -14,     8,    84,   134,   102,
      96,   136,    98,    39,   -56,   -56,    46,     1,   103,   -56,
     133,    48,   -56,    97,    68,   -56,   -56,   130,    64,   104,
     107,   -56,   -56,     8,    73,     8,   -56,    64,     8,   -56,
     108,   -56,   -56,     1,    97,     8,   -56,   -56,   109,    86,
       8,    64,     1,     1,     8,     8,   -56,   -56,   -56,   -56,
     -56,   -56,     8,     8,     8,     8,    64,   131,   110,   -14,
      17,   -21,   -56,    73,   142,   112,     8,    29,   -56,   -56,
      67,   113,    92,   -56,   -56,    68,    68,    73,   -56,   -56,
     -56,   139,   140,   120,   -56,   -56,   153,   -56,    73,   -56,
       8,   -56,   -56,    64,   -56,     1,     1,   -56,   -56,   149,
     -56,   123,   -56,   -14,   117,     8,    24,    64,   146,   -56
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     2,     1,     0,     4,    13,     0,     0,     6,
       0,     0,     0,    11,     0,     6,     0,     0,     6,     7,
       8,     0,    12,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,    13,    55,
       0,    26,    28,     0,    44,    47,    54,     0,    14,     0,
      62,    22,    23,     0,    25,     0,     5,    14,     0,     9,
       0,    31,    32,     0,     0,     0,    52,    51,     0,     0,
       0,    14,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    37,    56,
      58,     0,     0,    29,    27,    46,    45,    34,    48,    49,
      50,     0,     0,     0,    63,    61,     0,    33,    30,    53,
       0,    57,    17,    14,    19,     0,     0,    10,    59,     0,
      20,     0,    18,     0,     0,     0,     0,    14,     0,    21
  };

  const short int
  parser::yypgoto_[] =
  {
     -56,   -56,   -56,   -56,     0,   -56,   151,     5,   -55,   -56,
     -26,   -56,    87,    99,   -30,    -5,    47,    40,   -27,   -34
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     5,    10,    11,    12,    37,    38,    39,
      50,    51,    52,    92,    53,    54,    55,   111,    56,    61
  };

  const unsigned char
  parser::yytable_[] =
  {
      40,    62,    41,    97,    57,    59,    64,    60,    60,     7,
      84,    85,   102,    74,    13,    19,     3,    79,    23,    77,
      13,    78,    13,    13,    20,    21,   112,   125,    43,    44,
      45,    40,    46,   100,     4,   101,     6,    42,   103,    46,
      40,   121,     9,    79,   147,   107,    47,   105,    84,    85,
     110,    48,    49,    63,    40,    84,    85,   114,    48,    49,
      84,    85,   117,   109,     8,   124,    14,    71,    72,    40,
      46,    16,    60,    82,    83,   129,   128,    29,   139,   115,
     116,    30,    31,    32,    73,    15,    33,    34,    35,    48,
      49,    75,   148,    17,    36,    18,     6,    76,    84,    85,
     110,    93,    94,    95,    84,    85,    40,   132,   133,   140,
     141,   130,    24,    25,     6,   146,   144,    84,    85,    27,
      40,    26,    86,    87,    88,    89,    90,    91,    84,    85,
      28,    65,   109,    86,    87,    88,    89,    90,    91,    58,
     118,   119,   120,    66,    67,    68,    69,    81,    80,    70,
      96,    99,   122,    98,   126,   108,   104,   135,   127,   131,
     134,   123,   136,   137,   142,   143,   145,   149,    22,   113,
     138,     0,     0,   106
  };

  const short int
  parser::yycheck_[] =
  {
      27,    35,    12,    58,    30,    32,    36,    34,    35,     4,
      31,    32,    67,    43,     9,    15,     0,    47,    18,    46,
      15,    47,    17,    18,    10,    11,    81,    48,    27,    28,
      29,    58,    31,    63,     3,    65,    50,    47,    68,    31,
      67,    96,     4,    73,    20,    75,    45,    73,    31,    32,
      80,    50,    51,    45,    81,    31,    32,    83,    50,    51,
      31,    32,    92,    46,    42,    99,     5,    28,    29,    96,
      31,    43,    99,    25,    26,    46,   106,    13,   133,    84,
      85,    17,    18,    19,    45,    42,    22,    23,    24,    50,
      51,    45,   147,    44,    30,     6,    50,    51,    31,    32,
     130,    33,    34,    35,    31,    32,   133,    15,    16,   135,
     136,    44,    47,     7,    50,   145,   143,    31,    32,     8,
     147,    51,    36,    37,    38,    39,    40,    41,    31,    32,
      48,    47,    46,    36,    37,    38,    39,    40,    41,    20,
      93,    94,    95,     9,    42,    49,    10,    14,    45,    51,
      20,    44,    21,    49,    12,    46,    48,    17,    46,    46,
      21,    51,    42,    10,    15,    42,    49,    21,    17,    82,
     130,    -1,    -1,    74
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    55,    56,     0,     3,    57,    50,    61,    42,     4,
      58,    59,    60,    61,     5,    42,    43,    44,     6,    58,
      10,    11,    60,    58,    47,     7,    51,     8,    48,    13,
      17,    18,    19,    22,    23,    24,    30,    61,    62,    63,
      72,    12,    47,    27,    28,    29,    31,    45,    50,    51,
      64,    65,    66,    68,    69,    70,    72,    64,    20,    72,
      72,    73,    73,    45,    68,    47,     9,    42,    49,    10,
      51,    28,    29,    45,    68,    45,    51,    72,    64,    68,
      45,    14,    25,    26,    31,    32,    36,    37,    38,    39,
      40,    41,    67,    33,    34,    35,    20,    62,    49,    44,
      68,    68,    62,    68,    48,    64,    67,    68,    46,    46,
      68,    71,    62,    66,    64,    69,    69,    68,    70,    70,
      70,    62,    21,    51,    73,    48,    12,    46,    68,    46,
      44,    46,    15,    16,    21,    17,    42,    10,    71,    62,
      64,    64,    15,    42,    72,    49,    68,    20,    62,    21
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    73
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     3,     8,
      11,     1,     3,     1,     0,     3,     3,     5,     7,     5,
       6,    13,     2,     2,     1,     2,     1,     3,     1,     3,
       4,     2,     2,     4,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     2,     2,     4,     1,     1,     3,     4,     1,     3,
       1,     4,     1,     3
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
  "IDENT", "NUMBER", "ERROR", "UMINUS", "$accept", "start_prog", "program",
  "function", "declarations", "declaration", "identifiers", "ident",
  "statements", "statement", "bool_expr", "relation_and_expr",
  "relation_expr", "comp", "expression", "multiplicative_expr", "term",
  "expressions", "var", "vars", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   161,   161,   164,   165,   168,   182,   186,   195,   201,
     207,   215,   216,   222,   225,   228,   233,   241,   244,   247,
     250,   253,   256,   261,   266,   268,   273,   275,   280,   283,
     288,   291,   294,   297,   300,   303,   306,   309,   314,   317,
     320,   323,   326,   329,   334,   338,   353,   364,   368,   374,
     378,   384,   387,   390,   393,   397,   401,   404,   409,   412,
     421,   424,   430,   433
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
#line 1663 "parser.tab.cc" // lalr1.cc:1167
#line 439 "mini_l.yy" // lalr1.cc:1168


std::string newTemp() {
        static int count = 0;
        std::string var = " ___temp___" + std::to_string(++count);
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