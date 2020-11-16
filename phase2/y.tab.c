/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     BEGIN_PARAMS = 259,
     END_PARAMS = 260,
     BEGIN_LOCALS = 261,
     END_LOCALS = 262,
     BEGIN_BODY = 263,
     END_BODY = 264,
     INTEGER = 265,
     ARRAY = 266,
     OF = 267,
     IF = 268,
     THEN = 269,
     ENDIF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     FOR = 274,
     BEGINLOOP = 275,
     ENDLOOP = 276,
     CONTINUE = 277,
     READ = 278,
     WRITE = 279,
     AND = 280,
     OR = 281,
     NOT = 282,
     TRUE = 283,
     FALSE = 284,
     RETURN = 285,
     SUB = 286,
     ADD = 287,
     MULT = 288,
     DIV = 289,
     MOD = 290,
     EQ = 291,
     NEQ = 292,
     LT = 293,
     GT = 294,
     LTE = 295,
     GTE = 296,
     SEMICOLON = 297,
     COLON = 298,
     COMMA = 299,
     L_PAREN = 300,
     R_PAREN = 301,
     L_SQUARE_BRACKET = 302,
     R_SQUARE_BRACKET = 303,
     ASSIGN = 304,
     IDENT = 305,
     NUMBER = 306,
     ERROR = 307,
     UMINUS = 308
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGIN_PARAMS 259
#define END_PARAMS 260
#define BEGIN_LOCALS 261
#define END_LOCALS 262
#define BEGIN_BODY 263
#define END_BODY 264
#define INTEGER 265
#define ARRAY 266
#define OF 267
#define IF 268
#define THEN 269
#define ENDIF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define FOR 274
#define BEGINLOOP 275
#define ENDLOOP 276
#define CONTINUE 277
#define READ 278
#define WRITE 279
#define AND 280
#define OR 281
#define NOT 282
#define TRUE 283
#define FALSE 284
#define RETURN 285
#define SUB 286
#define ADD 287
#define MULT 288
#define DIV 289
#define MOD 290
#define EQ 291
#define NEQ 292
#define LT 293
#define GT 294
#define LTE 295
#define GTE 296
#define SEMICOLON 297
#define COLON 298
#define COMMA 299
#define L_PAREN 300
#define R_PAREN 301
#define L_SQUARE_BRACKET 302
#define R_SQUARE_BRACKET 303
#define ASSIGN 304
#define IDENT 305
#define NUMBER 306
#define ERROR 307
#define UMINUS 308




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y"

 #include <stdio.h>
 #include <stdlib.h>
 #include "y.tab.h"
 #include <string.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern const char* yytext;
 int yylex();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "mini_l.y"
{
  char* cval;
  int ival;
}
/* Line 193 of yacc.c.  */
#line 219 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 232 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    20,    33,    34,    38,    41,
      45,    54,    66,    70,    72,    76,    80,    82,    83,    87,
      91,    95,   101,   109,   115,   122,   136,   139,   142,   144,
     147,   151,   153,   157,   159,   163,   168,   171,   174,   179,
     183,   185,   187,   191,   193,   195,   197,   199,   201,   203,
     205,   209,   213,   215,   219,   223,   227,   230,   233,   238,
     240,   242,   246,   251,   253,   257,   259,   264,   266
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    55,    56,    -1,     3,    50,    42,
       4,    57,     5,     6,    57,     7,     8,    61,     9,    -1,
       3,    50,     1,     4,    57,     5,     6,    57,     7,     8,
      61,     9,    -1,    -1,    58,    42,    57,    -1,     1,    57,
      -1,    59,    43,    10,    -1,    59,    43,    11,    47,    51,
      48,    12,    10,    -1,    59,    43,    11,    47,    51,    48,
      47,    51,    48,    12,    10,    -1,    59,     1,    10,    -1,
      60,    -1,    59,    44,    60,    -1,    59,     1,    60,    -1,
      50,    -1,    -1,    62,    42,    61,    -1,    62,     1,    61,
      -1,    71,    49,    67,    -1,    13,    63,    14,    61,    15,
      -1,    13,    63,    14,    61,    16,    61,    15,    -1,    17,
      63,    20,    61,    21,    -1,    18,    20,    61,    21,    17,
      63,    -1,    19,    71,    49,    51,    42,    63,    42,    71,
      49,    67,    20,    61,    21,    -1,    23,    72,    -1,    24,
      72,    -1,    22,    -1,    30,    67,    -1,    71,     1,    67,
      -1,    64,    -1,    64,    26,    63,    -1,    65,    -1,    64,
      25,    65,    -1,    27,    67,    66,    67,    -1,    27,    28,
      -1,    27,    29,    -1,    27,    45,    63,    46,    -1,    67,
      66,    67,    -1,    28,    -1,    29,    -1,    45,    63,    46,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    41,    -1,    68,    -1,    68,    32,    67,    -1,    68,
      31,    67,    -1,    69,    -1,    69,    33,    69,    -1,    69,
      34,    69,    -1,    69,    35,    69,    -1,    31,    71,    -1,
      31,    51,    -1,    31,    45,    67,    46,    -1,    71,    -1,
      51,    -1,    45,    67,    46,    -1,    50,    45,    70,    46,
      -1,    67,    -1,    67,    44,    70,    -1,    60,    -1,    60,
      47,    67,    48,    -1,    71,    -1,    71,    44,    72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,    99,   102,   103,   106,   107,   108,   111,
     112,   113,   114,   117,   118,   119,   123,   126,   127,   128,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   144,   145,   148,   149,   152,   153,   154,   155,   156,
     157,   158,   159,   162,   163,   164,   165,   166,   167,   170,
     171,   172,   175,   176,   177,   178,   181,   182,   183,   184,
     185,   186,   187,   190,   191,   194,   195,   198,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "IDENT", "NUMBER", "ERROR", "UMINUS", "$accept", "program", "function",
  "declarations", "declaration", "identifiers", "ident", "statements",
  "statement", "bool_expr", "relation_and_expr", "relation_expr", "comp",
  "expression", "multiplicative_expr", "term", "expressions", "var",
  "vars", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    57,    58,
      58,    58,    58,    59,    59,    59,    60,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,    12,     0,     3,     2,     3,
       8,    11,     3,     1,     3,     3,     1,     0,     3,     3,
       3,     5,     7,     5,     6,    13,     2,     2,     1,     2,
       3,     1,     3,     1,     3,     4,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     2,     2,     4,     1,
       1,     3,     4,     1,     3,     1,     4,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
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
      43,    44,    45,    46,    47,    48,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    19,    18,
      30,    20,     0,     0,     0,     0,    42,    61,    63,     0,
       0,    34,    32,    39,    51,    50,    53,    54,    55,     0,
       0,     0,    68,    66,     0,    38,    35,    58,     0,    62,
      21,    17,    23,     0,     0,    11,    64,     0,    24,     0,
      22,     0,     0,     0,     0,    17,     0,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,    12,    13,    14,    49,    50,    51,    63,
      64,    65,   106,    66,    67,    68,   129,    69,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -47
static const yytype_int16 yypact[] =
{
     -47,    28,   -47,   -40,   -47,    11,     9,    12,    18,    18,
      10,   -47,    24,   -22,     4,   -47,    27,   -47,    43,    10,
      16,   137,     8,    65,    17,   -47,   -47,   -47,   -47,    26,
     -47,    17,    68,    36,    71,    85,    47,    89,    66,    15,
      66,    75,    75,    81,     8,   -47,     8,     8,    41,    58,
     101,    13,     2,   107,    70,   115,    83,   -47,   -47,    49,
      75,    98,   -47,   135,   129,   -47,   123,   120,    74,   -47,
     136,    66,   109,   124,   -47,   -47,    41,   -47,    41,   -47,
      66,    66,    41,    41,   -47,   119,   -47,   -47,   -47,    75,
     123,    41,   -47,   -47,   125,     0,    41,    66,    75,    75,
     -47,   -47,   -47,   -47,   -47,   -47,    41,    41,    41,    41,
      41,    41,    66,   148,   121,     8,   127,   128,   -47,   -47,
     -47,   -47,   158,   131,    41,   132,   -47,   -47,   130,   133,
     150,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   154,
     163,   139,   -47,   -47,   172,   -47,   -47,   -47,    41,   -47,
     -47,    66,   -47,    75,    75,   -47,   -47,   168,   -47,   142,
     -47,     8,   138,    41,   165,    66,   167,   -47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -47,   126,   -47,   -47,   122,   -36,   -47,   -35,
     -47,    88,    99,   -26,   -47,    29,    42,   -38,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
      52,    75,    52,    82,    55,    20,    72,    70,    73,    73,
       5,    10,     6,     8,    80,    -6,     9,    -6,    10,    10,
      19,    93,    77,    -6,    -6,    94,    26,    53,     2,    18,
      90,     3,    23,    52,    95,   113,   100,   101,   102,   103,
     104,   105,    52,    52,   118,   119,   127,    21,    22,    24,
     116,    83,   117,     7,   123,    81,   120,   121,    11,    52,
      11,   130,    54,    95,   132,   125,    11,    11,    11,   142,
     128,    31,    59,    33,    52,    35,   139,    73,    37,    41,
     133,   134,   135,    42,    43,    44,    76,    36,    45,    46,
      47,    61,    62,    38,    91,    39,    48,    40,   146,    11,
      92,    71,    56,    57,    58,    78,    59,   109,   110,   111,
      79,    87,    88,    52,    59,   157,    11,    84,   158,   159,
      60,    85,   128,   162,    86,    61,    62,    52,    89,   166,
      15,    15,    15,    61,    62,    16,    17,   164,   136,   137,
     138,    15,    27,    96,    30,    25,    15,    28,    29,    97,
      32,   107,   108,    15,    98,    99,   112,    34,   114,   100,
     101,   102,   103,   104,   105,   150,   151,   122,   115,   140,
     144,   126,   141,   127,   148,   152,   143,   145,   147,   149,
     153,   154,   155,   160,   161,   165,   131,   163,   167,   124,
     156
};

static const yytype_uint8 yycheck[] =
{
      38,    47,    40,     1,    40,     1,    44,    42,    46,    47,
      50,     1,     1,     4,     1,     5,     4,     7,     1,     1,
      42,    59,    48,     5,     7,    60,    10,    12,     0,     5,
      56,     3,     5,    71,    60,    71,    36,    37,    38,    39,
      40,    41,    80,    81,    80,    81,    46,    43,    44,     6,
      76,    49,    78,    42,    89,    42,    82,    83,    50,    97,
      50,    97,    47,    89,    99,    91,    50,    50,    50,   115,
      96,     6,    31,    47,   112,     7,   112,   115,     7,    13,
     106,   107,   108,    17,    18,    19,    45,    51,    22,    23,
      24,    50,    51,     8,    45,    48,    30,     8,   124,    50,
      51,    20,    27,    28,    29,    47,    31,    33,    34,    35,
       9,    28,    29,   151,    31,   151,    50,    10,   153,   154,
      45,    51,   148,   161,     9,    50,    51,   165,    45,   165,
       8,     9,    10,    50,    51,     9,    10,   163,   109,   110,
     111,    19,    20,    45,    22,    19,    24,    10,    11,    14,
      24,    31,    32,    31,    25,    26,    20,    31,    49,    36,
      37,    38,    39,    40,    41,    15,    16,    48,    44,    21,
      12,    46,    51,    46,    44,    21,    48,    46,    46,    46,
      17,    42,    10,    15,    42,    20,    98,    49,    21,    90,
     148
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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
      36,    37,    38,    39,    40,    41,    66,    31,    32,    33,
      34,    35,    20,    61,    49,    44,    67,    67,    61,    61,
      67,    67,    48,    63,    66,    67,    46,    46,    67,    70,
      61,    65,    63,    67,    67,    67,    69,    69,    69,    61,
      21,    51,    72,    48,    12,    46,    67,    46,    44,    46,
      15,    16,    21,    17,    42,    10,    70,    61,    63,    63,
      15,    42,    71,    49,    67,    20,    61,    21
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 98 "mini_l.y"
    {printf("program -> epsilon\n");;}
    break;

  case 3:
#line 99 "mini_l.y"
    {printf("program -> program function\n");;}
    break;

  case 4:
#line 102 "mini_l.y"
    {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");;}
    break;

  case 5:
#line 103 "mini_l.y"
    {yyerror(" \";\" expected");;}
    break;

  case 6:
#line 106 "mini_l.y"
    {printf("declarations -> epsilon\n");;}
    break;

  case 7:
#line 107 "mini_l.y"
    {printf("declarations -> declaration SEMICOLON declarations\n");;}
    break;

  case 8:
#line 108 "mini_l.y"
    {printf("Syntax Error: expected \";\" near line %d\n", currLine);;}
    break;

  case 9:
#line 111 "mini_l.y"
    {printf("declaration -> identifiers COLON INTEGER\n");;}
    break;

  case 10:
#line 112 "mini_l.y"
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");;}
    break;

  case 11:
#line 113 "mini_l.y"
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");;}
    break;

  case 13:
#line 117 "mini_l.y"
    {printf("identifiers -> ident\n");;}
    break;

  case 14:
#line 118 "mini_l.y"
    {printf("identifiers -> ident COMMA identifier\n");;}
    break;

  case 16:
#line 123 "mini_l.y"
    {printf("ident -> IDENT %s \n", (yyvsp[(1) - (1)].cval));;}
    break;

  case 17:
#line 126 "mini_l.y"
    {printf("statements -> epsilon\n");;}
    break;

  case 18:
#line 127 "mini_l.y"
    {printf("statements -> statement SEMICOLON statements\n");;}
    break;

  case 19:
#line 128 "mini_l.y"
    {printf("Syntax Error: expected \";\" near line %d\n", currLine);;}
    break;

  case 20:
#line 131 "mini_l.y"
    {printf("statement -> var ASSIGN expression\n");;}
    break;

  case 21:
#line 132 "mini_l.y"
    {printf("statement -> IF bool_expr THEN statements ENDIF\n");;}
    break;

  case 22:
#line 133 "mini_l.y"
    {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");;}
    break;

  case 23:
#line 134 "mini_l.y"
    {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");;}
    break;

  case 24:
#line 135 "mini_l.y"
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");;}
    break;

  case 25:
#line 136 "mini_l.y"
    {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");;}
    break;

  case 26:
#line 137 "mini_l.y"
    {printf("statement -> READ vars\n");;}
    break;

  case 27:
#line 138 "mini_l.y"
    {printf("statement -> WRITE vars\n");;}
    break;

  case 28:
#line 139 "mini_l.y"
    {printf("statement -> CONTINUE\n");;}
    break;

  case 29:
#line 140 "mini_l.y"
    {printf("statement ->RETURN expression\n");;}
    break;

  case 31:
#line 144 "mini_l.y"
    {printf("bool_expr -> relation_and_expr\n");;}
    break;

  case 32:
#line 145 "mini_l.y"
    {printf("bool_expr -> relation_and_expr OR bool_expr\n");;}
    break;

  case 33:
#line 148 "mini_l.y"
    {printf("relation_and_expr -> relation_expr\n");;}
    break;

  case 34:
#line 149 "mini_l.y"
    {printf("relation_and_expr -> relation_expr AND relation_expr\n");;}
    break;

  case 35:
#line 152 "mini_l.y"
    {printf("relation_expr -> NOT expression comp expression\n");;}
    break;

  case 36:
#line 153 "mini_l.y"
    {printf("relation_expr -> NOT TRUE\n");;}
    break;

  case 37:
#line 154 "mini_l.y"
    {printf("relation_expr -> NOT FALSE\n");;}
    break;

  case 38:
#line 155 "mini_l.y"
    {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");;}
    break;

  case 39:
#line 156 "mini_l.y"
    {printf("relation_expr -> expression comp expression\n");;}
    break;

  case 40:
#line 157 "mini_l.y"
    {printf("relation_expr -> TRUE\n");;}
    break;

  case 41:
#line 158 "mini_l.y"
    {printf("relation_expr -> FALSE\n");;}
    break;

  case 42:
#line 159 "mini_l.y"
    {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");;}
    break;

  case 43:
#line 162 "mini_l.y"
    {printf("comp -> EQ\n");;}
    break;

  case 44:
#line 163 "mini_l.y"
    {printf("comp -> NEQ\n");;}
    break;

  case 45:
#line 164 "mini_l.y"
    {printf("comp -> LT\n");;}
    break;

  case 46:
#line 165 "mini_l.y"
    {printf("comp -> GT\n");;}
    break;

  case 47:
#line 166 "mini_l.y"
    {printf("comp -> LTE\n");;}
    break;

  case 48:
#line 167 "mini_l.y"
    {printf("comp -> GTE\n");;}
    break;

  case 49:
#line 170 "mini_l.y"
    {printf("expression -> multiplicative_expr\n");;}
    break;

  case 50:
#line 171 "mini_l.y"
    {printf("expression -> multiplicative_expr ADD expression\n");;}
    break;

  case 51:
#line 172 "mini_l.y"
    {printf("expression -> multiplicative_expr SUB expression\n");;}
    break;

  case 52:
#line 175 "mini_l.y"
    {printf("multiplicative_expr -> term\n");;}
    break;

  case 53:
#line 176 "mini_l.y"
    {printf("multiplicative_expr -> term MULT term\n");;}
    break;

  case 54:
#line 177 "mini_l.y"
    {printf("multiplicative_expr -> term DIV term\n");;}
    break;

  case 55:
#line 178 "mini_l.y"
    {printf("multiplicative_expr -> term MOD term\n");;}
    break;

  case 56:
#line 181 "mini_l.y"
    {printf("term -> var UMINU\n");;}
    break;

  case 57:
#line 182 "mini_l.y"
    {printf("term-> UMINUS NUMBER\n");;}
    break;

  case 58:
#line 183 "mini_l.y"
    {printf("term -> SUB L_PAREN expression R_PAREN\n");;}
    break;

  case 59:
#line 184 "mini_l.y"
    {printf("term -> var\n");;}
    break;

  case 60:
#line 185 "mini_l.y"
    {printf("term -> NUMBER\n");;}
    break;

  case 61:
#line 186 "mini_l.y"
    {printf("term -> L_PAREN expression R_PAREN\n");;}
    break;

  case 62:
#line 187 "mini_l.y"
    {printf("term -> ident L_PAREN expressions R_PAREN\n");;}
    break;

  case 63:
#line 190 "mini_l.y"
    {printf("expressions -> expression\n");;}
    break;

  case 64:
#line 191 "mini_l.y"
    {printf("expressions -> expression COMMA expressions\n");;}
    break;

  case 65:
#line 194 "mini_l.y"
    {printf("var -> ident\n");;}
    break;

  case 66:
#line 195 "mini_l.y"
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");;}
    break;

  case 67:
#line 198 "mini_l.y"
    {printf("vars -> var\n");;}
    break;

  case 68:
#line 199 "mini_l.y"
    {printf("vars -> var COMMA vars\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1889 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 202 "mini_l.y"


int main(int argc, char **argv) {
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("Syntax Error:in line %d, position %d:%s\n", currLine, currPos, msg);
}

