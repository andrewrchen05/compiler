// A Bison parser, made by GNU Bison 3.5.1.

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

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.



// First part of user prologue.
#line 1 "mini_l.yy"

extern int currLine;
extern int currPos;

#line 45 "parser.tab.cc"


#include "parser.tab.hh"


// Unqualified %code blocks.
#line 46 "mini_l.yy"

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

#line 76 "parser.tab.cc"


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
      yystack_print_ ();                \
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
  | Symbol types.  |
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

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 58: // declarations
      case 59: // declaration
        value.YY_MOVE_OR_COPY< dec_type > (YY_MOVE (that.value));
        break;

      case 64: // bool_expr
      case 65: // relation_and_expr
      case 66: // relation_expr
      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
      case 71: // expressions
        value.YY_MOVE_OR_COPY< exp_type > (YY_MOVE (that.value));
        break;

      case 51: // NUMBER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 60: // identifiers
      case 73: // vars
        value.YY_MOVE_OR_COPY< list<string> > (YY_MOVE (that.value));
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
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
    switch (that.type_get ())
    {
      case 58: // declarations
      case 59: // declaration
        value.move< dec_type > (YY_MOVE (that.value));
        break;

      case 64: // bool_expr
      case 65: // relation_and_expr
      case 66: // relation_expr
      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
      case 71: // expressions
        value.move< exp_type > (YY_MOVE (that.value));
        break;

      case 51: // NUMBER
        value.move< int > (YY_MOVE (that.value));
        break;

      case 60: // identifiers
      case 73: // vars
        value.move< list<string> > (YY_MOVE (that.value));
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
        value.move< string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
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

      case 64: // bool_expr
      case 65: // relation_and_expr
      case 66: // relation_expr
      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
      case 71: // expressions
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
    switch (that.type_get ())
    {
      case 58: // declarations
      case 59: // declaration
        value.move< dec_type > (that.value);
        break;

      case 64: // bool_expr
      case 65: // relation_and_expr
      case 66: // relation_expr
      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
      case 71: // expressions
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
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
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
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
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
        YYCDEBUG << "Reading a token: ";
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

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
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
      case 58: // declarations
      case 59: // declaration
        yylhs.value.emplace< dec_type > ();
        break;

      case 64: // bool_expr
      case 65: // relation_and_expr
      case 66: // relation_expr
      case 68: // expression
      case 69: // multiplicative_expr
      case 70: // term
      case 71: // expressions
        yylhs.value.emplace< exp_type > ();
        break;

      case 51: // NUMBER
        yylhs.value.emplace< int > ();
        break;

      case 60: // identifiers
      case 73: // vars
        yylhs.value.emplace< list<string> > ();
        break;

      case 50: // IDENT
      case 56: // program
      case 57: // function
      case 61: // ident
      case 62: // statements
      case 63: // statement
      case 67: // comp
      case 72: // var
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
  case 2:
#line 161 "mini_l.yy"
                                        {
							string temp = yystack_[0].value.as < string > ();
							checkVariables("main", 3);
							if(errorCheck) {}
							else {
								cout << temp << endl;
							}
						}
#line 775 "parser.tab.cc"
    break;

  case 3:
#line 171 "mini_l.yy"
                                                    {yylhs.value.as < string > () = "";}
#line 781 "parser.tab.cc"
    break;

  case 4:
#line 172 "mini_l.yy"
                                                                   {yylhs.value.as < string > () = yystack_[1].value.as < string > () + "\n" + yystack_[0].value.as < string > ();}
#line 787 "parser.tab.cc"
    break;

  case 5:
#line 175 "mini_l.yy"
                                                                                                                                                                          {
							variables.push_back(yystack_[10].value.as < string > ());
							yylhs.value.as < string > () = "func " + yystack_[10].value.as < string > () + "\n";
							yylhs.value.as < string > () += yystack_[7].value.as < dec_type > ().code;
							int i = 0;
							for(list<string>::iterator it = yystack_[7].value.as < dec_type > ().ids.begin(); it != yystack_[7].value.as < dec_type > ().ids.end(); it++){
								yylhs.value.as < string > () += "= "  +  *it + ", $" + to_string(i) + "\n";
								i++;
							}
							yylhs.value.as < string > () += yystack_[4].value.as < dec_type > ().code;
							yylhs.value.as < string > () += yystack_[1].value.as < string > ();
							yylhs.value.as < string > () += "endfunc";
						}
#line 805 "parser.tab.cc"
    break;

  case 6:
#line 190 "mini_l.yy"
                                            {
							yylhs.value.as < dec_type > ().code = "";
							yylhs.value.as < dec_type > ().ids = list<string>();
						}
#line 814 "parser.tab.cc"
    break;

  case 7:
#line 194 "mini_l.yy"
                                                                                     {
							yylhs.value.as < dec_type > ().code = yystack_[2].value.as < dec_type > ().code + "\n" + yystack_[0].value.as < dec_type > ().code;
							yylhs.value.as < dec_type > ().ids = yystack_[2].value.as < dec_type > ().ids;
							for(list<string>::iterator it = yystack_[0].value.as < dec_type > ().ids.begin(); it != yystack_[0].value.as < dec_type > ().ids.end(); it++){
								yylhs.value.as < dec_type > ().ids.push_back(*it);
							}
						}
#line 826 "parser.tab.cc"
    break;

  case 8:
#line 203 "mini_l.yy"
                                                          {
							for(list<string>::iterator it = yystack_[2].value.as < list<string> > ().begin(); it != yystack_[2].value.as < list<string> > ().end(); it++){
								yylhs.value.as < dec_type > ().code += ". " + *it + "\n";
								yylhs.value.as < dec_type > ().ids.push_back(*it);
								variables.push_back(*it);
							}
						}
#line 838 "parser.tab.cc"
    break;

  case 9:
#line 210 "mini_l.yy"
                                                                                                                              {
							for(list<string>::iterator it = yystack_[7].value.as < list<string> > ().begin(); it != yystack_[7].value.as < list<string> > ().end(); it++) {
								if(yystack_[3].value.as < int > () <= 0) {
									arraySizeZero();
								}
								yylhs.value.as < dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as < int > ()) +"\n";
								yylhs.value.as < dec_type > ().ids.push_back(*it);
								variables.push_back(*it);
							}

						}
#line 854 "parser.tab.cc"
    break;

  case 10:
#line 221 "mini_l.yy"
                                                                                                                                                                       {
							for(list<string>::iterator it = yystack_[10].value.as < list<string> > ().begin(); it != yystack_[10].value.as < list<string> > ().end(); it++) {
								if(yystack_[6].value.as < int > () <= 0 || yystack_[3].value.as < int > () <= 0) {
									arraySizeZero();
								}
								yylhs.value.as < dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[6].value.as < int > () * yystack_[3].value.as < int > ());
								yylhs.value.as < dec_type > ().ids.push_back(*it);	
								variables.push_back(*it);	
							}
						}
#line 869 "parser.tab.cc"
    break;

  case 11:
#line 233 "mini_l.yy"
                                      {
							checkVariables(yystack_[0].value.as < string > (), 1);
							yylhs.value.as < list<string> > ().push_back(yystack_[0].value.as < string > ());
						}
#line 878 "parser.tab.cc"
    break;

  case 12:
#line 237 "mini_l.yy"
                                                                          {
							yylhs.value.as < list<string> > () = yystack_[0].value.as < list<string> > ();
							yylhs.value.as < list<string> > ().push_front(yystack_[2].value.as < string > ());
						}
#line 887 "parser.tab.cc"
    break;

  case 13:
#line 243 "mini_l.yy"
                                              {yylhs.value.as < string > () = yystack_[0].value.as < string > ();}
#line 893 "parser.tab.cc"
    break;

  case 14:
#line 246 "mini_l.yy"
                                              {
			 				yylhs.value.as < string > () = "";
						}
#line 901 "parser.tab.cc"
    break;

  case 15:
#line 249 "mini_l.yy"
                                                                                 {
							yylhs.value.as < string > () = yystack_[2].value.as < string > () + "\n" + yystack_[0].value.as < string > ();
						}
#line 909 "parser.tab.cc"
    break;

  case 16:
#line 254 "mini_l.yy"
                                                              {
							yylhs.value.as < string > () += yystack_[0].value.as < exp_type > ().code;
							yylhs.value.as < string > () += "= " + yystack_[0].value.as < exp_type > ().id + ", " + yystack_[2].value.as < string > ();
						}
#line 918 "parser.tab.cc"
    break;

  case 17:
#line 258 "mini_l.yy"
                                                                                     {
							std::string lab1 = newLabel();
							std::string lab2 = newLabel();
							yylhs.value.as < string > () += yystack_[3].value.as < exp_type > ().code;
							yylhs.value.as < string > () += "?:= " + lab1 + ", " + yystack_[3].value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < string > () += ":= " + lab2 + "\n";
                                                        yylhs.value.as < string > () += "\n:" + lab1 + "\n";
                                                        yylhs.value.as < string > () += yystack_[1].value.as < string > ();
                                                        yylhs.value.as < string > () += ":" + lab2 + "\n";	
						}
#line 933 "parser.tab.cc"
    break;

  case 18:
#line 268 "mini_l.yy"
                                                                                                     {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
                                                        yylhs.value.as < string > () += yystack_[5].value.as < exp_type > ().code;
							yylhs.value.as < string > () += "?:= " + lab1 + ", " + yystack_[5].value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < string > () += yystack_[1].value.as < string > ();
                                                        yylhs.value.as < string > () += ":= " + lab2 + "\n";
                                                        yylhs.value.as < string > () += "\n:" + lab1 + "\n";
							yylhs.value.as < string > () += yystack_[3].value.as < string > ();
							yylhs.value.as < string > () += ":" + lab2 + "\n";
						}
#line 949 "parser.tab.cc"
    break;

  case 19:
#line 279 "mini_l.yy"
                                                                                               {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							std::string lab3 = newLabel();
							yylhs.value.as < string > () += ": " + lab3 + "\n";
							yylhs.value.as < string > () += yystack_[3].value.as < exp_type > ().code;
							yylhs.value.as < string > () += "?:= " + lab1 + ", " + yystack_[3].value.as < exp_type > ().id + "\n";
							//continue?
							yylhs.value.as < string > () += ":= " + lab2 + "\n";
							yylhs.value.as < string > () += ": " + lab1 + "\n";

							string statements = yystack_[1].value.as < string > ();
							std::size_t found=statements.find("continue");
							if (found!=std::string::npos) {
								//cout << "Found at: " << found << endl;
								yylhs.value.as < string > () += statements.substr(0, found-1) + "\n";
								yylhs.value.as < string > () += ":= " + lab2;
								yylhs.value.as < string > () += statements.substr(found + 8, statements.length() - 1);
							} else {
								yylhs.value.as < string > () += yystack_[1].value.as < string > ();
							}
							
							yylhs.value.as < string > () += ":= " + lab3 + "\n";
							yylhs.value.as < string > () += ": " + lab2 + "\n";	
						}
#line 979 "parser.tab.cc"
    break;

  case 20:
#line 304 "mini_l.yy"
                                                                                                  {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							yylhs.value.as < string > () += ": " + lab2 + "\n";
                                                        
							string statements = yystack_[3].value.as < string > ();
                                                        std::size_t found=statements.find("continue");
                                                        if (found!=std::string::npos) {
                                                                yylhs.value.as < string > () += statements.substr(0, found-1) + "\n";
                                                                yylhs.value.as < string > () += ":= " + lab1 + "\n";
                                                                yylhs.value.as < string > () += statements.substr(found, statements.length() - 1);
                                                        } else {
                                                                yylhs.value.as < string > () += yystack_[3].value.as < string > ();
                                                        }
							
							yylhs.value.as < string > () += yystack_[0].value.as < exp_type > ().code;
                                                        yylhs.value.as < string > () += "?:= " + lab2 + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < string > () += ":= " + lab1 + "\n";
                                                        yylhs.value.as < string > () += ": " + lab1 + "\n";
						}
#line 1004 "parser.tab.cc"
    break;

  case 21:
#line 324 "mini_l.yy"
                                                                                                                                                         {
							std::string lab1 = newLabel();
                                                        std::string lab2 = newLabel();
							std::string lab3 = newLabel();
                                                        //std::string lab4 = newLabel();
								
							string temp = newTemp();
                                                        yylhs.value.as < string > () += ". " + temp + "\n";
							yylhs.value.as < string > () += "= " + temp + ", " + yystack_[11].value.as < string > () + "\n";

							yylhs.value.as < string > () += ": " + lab1 + "\n";
							yylhs.value.as < string > () += yystack_[7].value.as < exp_type > ().code;
							
							yylhs.value.as < string > () += "?:= " + lab2 + ", " + yystack_[7].value.as < exp_type > ().id + "\n";
							yylhs.value.as < string > () += ":= " + lab3 + "\n";


							yylhs.value.as < string > () += ": " + lab2 + "\n";
							
							temp = newTemp();
                                                        yylhs.value.as < string > () += ". " + temp + "\n";
								
							yylhs.value.as < string > () += "= " + temp + ", " + yystack_[5].value.as < string > () + "\n";
							yylhs.value.as < string > () += yystack_[3].value.as < exp_type > ().code;
						
							string statements = yystack_[1].value.as < string > ();
                                                        std::size_t found=statements.find("continue");	
							if (found!=std::string::npos) {
                                                                yylhs.value.as < string > () += statements.substr(0, found-1) + "\n";
                                                                //$$ += ":= " + lab3 + "\n";
                                                                yylhs.value.as < string > () += ":= " + lab3;
								yylhs.value.as < string > () += statements.substr(found+8, statements.length() - 1);
                                                        } else {
                                                                yylhs.value.as < string > () += yystack_[1].value.as < string > ();
                                                        }

							yylhs.value.as < string > () += ":= " + lab1 + "\n";
							
							yylhs.value.as < string > () += ": " + lab3 + "\n"; 
							
						}
#line 1050 "parser.tab.cc"
    break;

  case 22:
#line 365 "mini_l.yy"
                                                            {
							for(list<string>::iterator it = yystack_[0].value.as < list<string> > ().begin(); it != yystack_[0].value.as < list<string> > ().end(); it++) {
								yylhs.value.as < string > () += ".< " + *it;
							}
						}
#line 1060 "parser.tab.cc"
    break;

  case 23:
#line 370 "mini_l.yy"
                                                             {
							for(list<string>::iterator it = yystack_[0].value.as < list<string> > ().begin(); it != yystack_[0].value.as < list<string> > ().end(); it++) {
                                                                yylhs.value.as < string > () += ">. " + *it;
                                                        }
						}
#line 1070 "parser.tab.cc"
    break;

  case 24:
#line 375 "mini_l.yy"
                                                           {
							yylhs.value.as < string > () += "continue";
						}
#line 1078 "parser.tab.cc"
    break;

  case 25:
#line 378 "mini_l.yy"
                                                                    {
							yylhs.value.as < string > () += yystack_[0].value.as < exp_type > ().id;
						}
#line 1086 "parser.tab.cc"
    break;

  case 26:
#line 383 "mini_l.yy"
                                                          {
						yylhs.value.as < exp_type > () = yystack_[0].value.as < exp_type > ();
						}
#line 1094 "parser.tab.cc"
    break;

  case 27:
#line 386 "mini_l.yy"
                                                                                 {
							yylhs.value.as < exp_type > ().id = newCond();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[2].value.as < exp_type > ().code + yystack_[0].value.as < exp_type > ().code;
							yylhs.value.as < exp_type > ().code += yylhs.value.as < exp_type > ().code = "|| " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1105 "parser.tab.cc"
    break;

  case 28:
#line 394 "mini_l.yy"
                                              {
							yylhs.value.as < exp_type > () = yystack_[0].value.as < exp_type > ();
						}
#line 1113 "parser.tab.cc"
    break;

  case 29:
#line 397 "mini_l.yy"
                                                                                      {
							yylhs.value.as < exp_type > ().id = newCond();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[2].value.as < exp_type > ().code + yystack_[0].value.as < exp_type > ().code;
							yylhs.value.as < exp_type > ().code += "&& " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1124 "parser.tab.cc"
    break;

  case 30:
#line 405 "mini_l.yy"
                                                               {
							yylhs.value.as < exp_type > ().id = newCond();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[1].value.as < string > () + " " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1134 "parser.tab.cc"
    break;

  case 31:
#line 410 "mini_l.yy"
                                                           {
							yylhs.value.as < exp_type > ().id = newCond();
							yylhs.value.as < exp_type > ().code += "";
						}
#line 1143 "parser.tab.cc"
    break;

  case 32:
#line 414 "mini_l.yy"
                                                            {
							yylhs.value.as < exp_type > ().id = newCond();
                                                        yylhs.value.as < exp_type > ().code += "";
						}
#line 1152 "parser.tab.cc"
    break;

  case 33:
#line 418 "mini_l.yy"
                                                                                {
							yylhs.value.as < exp_type > () = yystack_[1].value.as < exp_type > ();	
						}
#line 1160 "parser.tab.cc"
    break;

  case 34:
#line 421 "mini_l.yy"
                                                                             {
							yylhs.value.as < exp_type > ().id = newCond();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[1].value.as < string > () + " " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1170 "parser.tab.cc"
    break;

  case 35:
#line 426 "mini_l.yy"
                                                       {
							yylhs.value.as < exp_type > ().id = newCond();
                                                        yylhs.value.as < exp_type > ().code += "";
						}
#line 1179 "parser.tab.cc"
    break;

  case 36:
#line 430 "mini_l.yy"
                                                        {
							yylhs.value.as < exp_type > ().id = newCond();
                                                        yylhs.value.as < exp_type > ().code += "";
						}
#line 1188 "parser.tab.cc"
    break;

  case 37:
#line 434 "mini_l.yy"
                                                                            {
							yylhs.value.as < exp_type > () = yystack_[1].value.as < exp_type > ();
						}
#line 1196 "parser.tab.cc"
    break;

  case 38:
#line 439 "mini_l.yy"
                                           {
							yylhs.value.as < string > () = "==";
						}
#line 1204 "parser.tab.cc"
    break;

  case 39:
#line 442 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = "!=";
						}
#line 1212 "parser.tab.cc"
    break;

  case 40:
#line 445 "mini_l.yy"
                                                     {
							yylhs.value.as < string > () = "<";
						}
#line 1220 "parser.tab.cc"
    break;

  case 41:
#line 448 "mini_l.yy"
                                                     {
							yylhs.value.as < string > () = ">";
						}
#line 1228 "parser.tab.cc"
    break;

  case 42:
#line 451 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = "<=";	
						}
#line 1236 "parser.tab.cc"
    break;

  case 43:
#line 454 "mini_l.yy"
                                                      {
							yylhs.value.as < string > () = ">=";
						}
#line 1244 "parser.tab.cc"
    break;

  case 44:
#line 459 "mini_l.yy"
                                                    {
							//$$.push_back($1);
							yylhs.value.as < exp_type > () = yystack_[0].value.as < exp_type > ();	
						}
#line 1253 "parser.tab.cc"
    break;

  case 45:
#line 463 "mini_l.yy"
                                                                                     {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < exp_type > ().code += "+ " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1263 "parser.tab.cc"
    break;

  case 46:
#line 468 "mini_l.yy"
                                                                                     {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < exp_type > ().code += "- " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
						}
#line 1273 "parser.tab.cc"
    break;

  case 47:
#line 475 "mini_l.yy"
                             {
							yylhs.value.as < exp_type > () = yystack_[0].value.as < exp_type > ();
						}
#line 1281 "parser.tab.cc"
    break;

  case 48:
#line 478 "mini_l.yy"
                                                                                {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += "* " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";
							
						}
#line 1292 "parser.tab.cc"
    break;

  case 49:
#line 484 "mini_l.yy"
                                                                               {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
                                                        yylhs.value.as < exp_type > ().code += "/ " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";		
						}
#line 1302 "parser.tab.cc"
    break;

  case 50:
#line 489 "mini_l.yy"
                                                                               {
							yylhs.value.as < exp_type > ().id = newTemp();
                                                        yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += "% " + yylhs.value.as < exp_type > ().id + ", " + yystack_[2].value.as < exp_type > ().id + ", " + yystack_[0].value.as < exp_type > ().id + "\n";	
						}
#line 1312 "parser.tab.cc"
    break;

  case 51:
#line 496 "mini_l.yy"
                                                             {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							//$$.code = "-1* " + $2 + "\n";
							
						}
#line 1323 "parser.tab.cc"
    break;

  case 52:
#line 502 "mini_l.yy"
                                                                          {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code = "-1 * ";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < int > ();
							yylhs.value.as < exp_type > ().code += "\n";
						}
#line 1335 "parser.tab.cc"
    break;

  case 53:
#line 509 "mini_l.yy"
                                                                                 {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code = "(" + yystack_[1].value.as < exp_type > ().id + ")" + "\n" + yystack_[1].value.as < exp_type > ().code;
						}
#line 1345 "parser.tab.cc"
    break;

  case 54:
#line 514 "mini_l.yy"
                                                      {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < string > ();
						}
#line 1355 "parser.tab.cc"
    break;

  case 55:
#line 519 "mini_l.yy"
                                                         {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < int > ();
						}
#line 1365 "parser.tab.cc"
    break;

  case 56:
#line 524 "mini_l.yy"
                                                                             {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[1].value.as < exp_type > ().code;
						}
#line 1375 "parser.tab.cc"
    break;

  case 57:
#line 529 "mini_l.yy"
                                                                                    {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code = yystack_[3].value.as < string > () + yystack_[1].value.as < exp_type > ().id + yystack_[1].value.as < exp_type > ().code;
						}
#line 1385 "parser.tab.cc"
    break;

  case 58:
#line 536 "mini_l.yy"
                                           {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[0].value.as < exp_type > ().code;
							yylhs.value.as < exp_type > ().code += "param " + yylhs.value.as < exp_type > ().id + "\n";
						}
#line 1396 "parser.tab.cc"
    break;

  case 59:
#line 542 "mini_l.yy"
                                                                               {
							yylhs.value.as < exp_type > ().id = newTemp();
							yylhs.value.as < exp_type > ().code += ". " + yylhs.value.as < exp_type > ().id + "\n";
							yylhs.value.as < exp_type > ().code += yystack_[2].value.as < exp_type > ().code + "\n" + yystack_[0].value.as < exp_type > ().code;
							yylhs.value.as < exp_type > ().code += "param " + yylhs.value.as < exp_type > ().id + "\n";	
						}
#line 1407 "parser.tab.cc"
    break;

  case 60:
#line 550 "mini_l.yy"
                                              {
							yylhs.value.as < string > () = yystack_[0].value.as < string > ();
							checkVariables(yystack_[0].value.as < string > (), 0);
						}
#line 1416 "parser.tab.cc"
    break;

  case 61:
#line 554 "mini_l.yy"
                                                                                                     {
							yylhs.value.as < string > () += yystack_[1].value.as < exp_type > ().code;
							yylhs.value.as < string > () = yystack_[3].value.as < string > () + "[" + yystack_[1].value.as < exp_type > ().id + "]\n";
							
						}
#line 1426 "parser.tab.cc"
    break;

  case 62:
#line 561 "mini_l.yy"
                                            {
							yylhs.value.as < list<string> > ().push_back(yystack_[0].value.as < string > ());
						}
#line 1434 "parser.tab.cc"
    break;

  case 63:
#line 564 "mini_l.yy"
                                                                 {
							yylhs.value.as < list<string> > () = yystack_[0].value.as < list<string> > ();
                            				yylhs.value.as < list<string> > ().push_front(yystack_[2].value.as < string > ());
						}
#line 1443 "parser.tab.cc"
    break;


#line 1447 "parser.tab.cc"

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
      YY_STACK_PRINT ();

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
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

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
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
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

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    std::ptrdiff_t yycount = 0;
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
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */
    if (!yyla.empty ())
      {
        symbol_number_type yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];

        int yyn = yypact_[+yystate];
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
              if (yycheck_[yyx + yyn] == yyx && yyx != yy_error_token_
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
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -56;

  const signed char parser::yytable_ninf_ = -1;

  const short
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

  const signed char
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

  const short
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

  const short
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

  const signed char
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

  const signed char
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

  const signed char
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
  const short
  parser::yyrline_[] =
  {
       0,   161,   161,   171,   172,   175,   190,   194,   203,   210,
     221,   233,   237,   243,   246,   249,   254,   258,   268,   279,
     304,   324,   365,   370,   375,   378,   383,   386,   394,   397,
     405,   410,   414,   418,   421,   426,   430,   434,   439,   442,
     445,   448,   451,   454,   459,   463,   468,   475,   478,   484,
     489,   496,   502,   509,   514,   519,   524,   529,   536,   542,
     550,   554,   561,   564
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
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
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
#line 1931 "parser.tab.cc"

#line 570 "mini_l.yy"


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

void checkVariables(string checkVar, int bitCheck) {
	bool check = false;

	for(int j = 0; j < reservedWords.size(); j++) {
		if(reservedWords.at(j) == checkVar) {
			check = true;
			break;
		}
	}
	
	if(check) { // reserved word is used as variable
		errorCheck = true;
		cout << "Error line " << currLine << ": variable name \"" << checkVar << "\" cannot be same as reserved keywords.\n";
		return;
	}

	for(int i = 0; i < variables.size(); i++) {
		if(variables.at(i) == checkVar) {
			check = true;
			break;
		}
	}

	if(check && (bitCheck == 0 || bitCheck == 3)) { //bitCheck == 0 for undeclared; 3 for main function
		return;
	}
	else if(bitCheck == 0) { //undeclared
		errorCheck = true;
		cout << "Error line " << currLine << ": used variable \"" << checkVar << "\" was not previously declared.\n";
	}
	else if(check && bitCheck == 1) { //bitCheck for == 1 for redeclaration
		errorCheck = true;
		cout << "Error line " << currLine << ": symbol \"" << checkVar << "\" is multiply-defined.\n";
	}
	else if(bitCheck == 3) { //no main function
		cout << "Error: main function undefined.\n";
	}

}

void arraySizeZero() {
	errorCheck = true;
	cout << "Error line " << currLine << ": cannot declare array of size 0\n";
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

