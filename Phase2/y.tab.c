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
     BEGINPARAMS = 259,
     ENDPARAMS = 260,
     BEGINLOCALS = 261,
     ENDLOCALS = 262,
     BEGINBODY = 263,
     ENDBODY = 264,
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
     TRUE = 280,
     FALSE = 281,
     ASSIGN = 282,
     SEMICOLON = 283,
     COLON = 284,
     COMMA = 285,
     LPAREN = 286,
     RPAREN = 287,
     L_SQUARE_BRACKET = 288,
     R_SQUARE_BRACKET = 289,
     RETURN = 290,
     MULT = 291,
     DIV = 292,
     MOD = 293,
     ADD = 294,
     SUB = 295,
     LT = 296,
     LTE = 297,
     GT = 298,
     GTE = 299,
     EQ = 300,
     NEQ = 301,
     NOT = 302,
     AND = 303,
     OR = 304,
     NUMBER = 305,
     IDENT = 306
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGINPARAMS 259
#define ENDPARAMS 260
#define BEGINLOCALS 261
#define ENDLOCALS 262
#define BEGINBODY 263
#define ENDBODY 264
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
#define TRUE 280
#define FALSE 281
#define ASSIGN 282
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define LPAREN 286
#define RPAREN 287
#define L_SQUARE_BRACKET 288
#define R_SQUARE_BRACKET 289
#define RETURN 290
#define MULT 291
#define DIV 292
#define MOD 293
#define ADD 294
#define SUB 295
#define LT 296
#define LTE 297
#define GT 298
#define GTE 299
#define EQ 300
#define NEQ 301
#define NOT 302
#define AND 303
#define OR 304
#define NUMBER 305
#define IDENT 306




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y"

#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos; 
void yyerror(const char * msg) {
	printf("Error: On line %d, column %d: %s \n", currLine, currPos, msg);
}
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
#line 12 "mini_l.y"
{
	char * identVal;
	int numVal;
}
/* Line 193 of yacc.c.  */
#line 214 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "y.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    11,    24,    25,    29,
      32,    36,    45,    47,    51,    53,    57,    60,    63,    65,
      67,    69,    71,    73,    75,    77,    79,    81,    85,    91,
      99,   105,   112,   126,   127,   131,   135,   139,   141,   144,
     146,   150,   152,   156,   159,   161,   163,   165,   169,   173,
     175,   177,   179,   181,   183,   185,   188,   190,   191,   194,
     197,   199,   203,   207,   211,   214,   216,   219,   221,   225,
     231,   232,   236,   238,   246
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,     1,    -1,    -1,    55,    54,
      -1,     3,    59,    28,     4,    56,     5,     6,    56,     7,
       8,    60,     9,    -1,    -1,    57,    28,    56,    -1,    57,
       1,    -1,    58,    29,    10,    -1,    58,    29,    11,    33,
      50,    34,    12,    10,    -1,    59,    -1,    59,    30,    58,
      -1,    51,    -1,    61,    28,    60,    -1,    61,    28,    -1,
      61,     1,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    82,    27,    77,    -1,    13,    72,    14,    60,    15,
      -1,    13,    72,    14,    60,    16,    60,    15,    -1,    17,
      72,    20,    60,    21,    -1,    18,    20,    60,    21,    17,
      72,    -1,    19,    82,    27,    50,    28,    72,    28,    82,
      27,    77,    20,    60,    21,    -1,    -1,    30,    82,    67,
      -1,    23,    82,    67,    -1,    24,    82,    67,    -1,    22,
      -1,    35,    77,    -1,    73,    -1,    72,    49,    73,    -1,
      74,    -1,    73,    48,    74,    -1,    47,    75,    -1,    75,
      -1,    25,    -1,    26,    -1,    31,    72,    32,    -1,    77,
      76,    77,    -1,    45,    -1,    46,    -1,    41,    -1,    43,
      -1,    42,    -1,    44,    -1,    79,    78,    -1,     1,    -1,
      -1,    39,    77,    -1,    40,    77,    -1,    80,    -1,    80,
      36,    79,    -1,    80,    37,    79,    -1,    80,    38,    79,
      -1,    40,    82,    -1,    82,    -1,    40,    50,    -1,    50,
      -1,    31,    77,    32,    -1,    59,    31,    77,    81,    32,
      -1,    -1,    30,    77,    81,    -1,    59,    -1,    59,    33,
      77,    34,    33,    77,    34,    -1,    59,    33,    77,    34,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    30,    34,    35,    39,    44,    45,    47,
      50,    52,    56,    58,    62,    66,    68,    70,    73,    75,
      77,    79,    81,    83,    85,    87,    89,    93,    97,    99,
     103,   107,   111,   116,   117,   121,   125,   129,   133,   137,
     139,   143,   145,   149,   151,   153,   155,   157,   161,   165,
     167,   169,   171,   173,   175,   179,   181,   185,   186,   188,
     192,   194,   196,   198,   202,   204,   206,   208,   210,   212,
     217,   218,   222,   224,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGINPARAMS", "ENDPARAMS",
  "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "INTEGER", "ARRAY",
  "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE", "ASSIGN",
  "SEMICOLON", "COLON", "COMMA", "LPAREN", "RPAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "RETURN", "MULT", "DIV", "MOD", "ADD", "SUB", "LT",
  "LTE", "GT", "GTE", "EQ", "NEQ", "NOT", "AND", "OR", "NUMBER", "IDENT",
  "$accept", "program", "functions", "function", "declarations",
  "declaration", "identifiers", "ident", "statements", "statement", "svar",
  "sif", "swhile", "sdo", "sfor", "varLoop", "sread", "swrite",
  "scontinue", "sreturn", "bool_expr", "relation_exprs", "relation_expr",
  "ece", "comp", "expression", "addSubExpr", "multi_expr", "term",
  "expressionLoop", "var", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    56,    56,    56,
      57,    57,    58,    58,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    63,
      64,    65,    66,    67,    67,    68,    69,    70,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     2,    12,     0,     3,     2,
       3,     8,     1,     3,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     7,
       5,     6,    13,     0,     3,     3,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     2,     2,
       1,     3,     3,     3,     2,     1,     2,     1,     3,     5,
       0,     3,     1,     7,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     4,    14,     0,     1,     5,
       0,     7,     0,     0,     0,    12,     0,     9,     7,     0,
       0,     7,     8,    10,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      72,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    56,    45,    46,     0,     0,     0,
      67,    72,     0,    39,    41,    44,     0,    57,    60,    65,
       0,     0,     0,    33,    33,     0,    38,     0,     6,    17,
      16,     0,    11,     0,     0,    66,    64,    43,     0,     0,
       0,     0,    51,    53,    52,    54,    49,    50,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,    15,    27,    47,    68,    70,     0,    40,
      42,    48,    58,    59,    61,    62,    63,     0,     0,     0,
      33,    74,     0,     0,    28,     0,    30,     0,     0,    34,
       0,    70,    69,     0,    31,     0,     0,    71,    29,     0,
      73,     0,     0,     0,     0,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    12,    13,    14,    61,    41,    42,
      43,    44,    45,    46,    47,   109,    48,    49,    50,    51,
      62,    63,    64,    65,    98,    66,   101,    67,    68,   133,
      69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
      74,   -74,   -47,    20,   -74,    23,   -74,     4,   -74,   -74,
      47,   -47,    39,     6,    25,    31,    62,   -74,   -47,    80,
     -47,   -47,   -74,   -74,    46,   -74,    66,    38,    85,    83,
      92,   109,    12,    12,   103,   -47,   -74,   -47,   -47,    49,
      97,   122,    13,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   105,   124,   -74,   -74,   -74,    12,    51,    49,
     -74,   -23,    -9,    87,   -74,   -74,    40,    86,    60,   -74,
     -18,    92,   110,   108,   108,    49,   -74,    49,   -74,   -74,
      92,    49,   -74,   -26,   112,   -74,   -74,   -74,    49,    92,
      12,    12,   -74,   -74,   -74,   -74,   -74,   -74,    49,    49,
      49,   -74,    15,    15,    15,    92,   118,    90,   -47,   -74,
     -74,   114,   111,   -74,   -74,   -74,   -74,   119,   113,    87,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   121,   131,   123,
     108,   117,    49,   127,   -74,    92,   -74,    12,    12,   -74,
      49,   119,   -74,   145,   115,    -7,   128,   -74,   -74,   -47,
     -74,   134,    49,   143,    92,   144,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   161,   -74,    -6,   -74,   147,    -2,   -41,   -74,
     -74,   -74,   -74,   -74,   -74,   -73,   -74,   -74,   -74,   -74,
     -30,    78,    79,   116,   -74,   -28,   -74,    16,   -74,    28,
     -13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -5
static const yytype_int16 yytable[] =
{
       7,   110,   105,    70,     6,    89,   115,    17,    88,    15,
      77,    76,    22,    54,    79,    26,    15,    52,    15,    15,
       8,   149,    72,    90,    73,    74,     2,    83,    40,    84,
     106,    90,    10,    40,    18,    40,    40,    55,    56,   113,
      90,    80,    90,    57,    16,    86,    75,   111,   118,   112,
      54,    11,    58,   114,    19,    58,    40,   139,    52,    59,
     117,    20,    60,     6,   127,    60,     6,    52,    21,    40,
     121,   122,   123,    28,    -4,     1,    52,     2,    40,    27,
      75,    92,    93,    94,    95,    96,    97,    40,    29,    58,
      23,    24,    52,    30,   143,   130,   102,   103,   104,    60,
       6,    85,     6,    40,   141,    32,    40,   144,   145,    33,
      34,    35,   146,   155,    36,    37,    38,    31,   124,   125,
     126,    53,    52,    71,   153,    99,   100,    39,   134,   135,
      77,    78,    81,    40,    82,    91,   151,   107,   108,   128,
     129,    52,   136,     6,   116,   131,   116,    40,   137,   132,
     140,   138,    40,    92,    93,    94,    95,    96,    97,   142,
     148,   152,   150,   154,    90,   156,     9,    25,   119,   147,
     120,     0,     0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
       2,    74,    20,    33,    51,    14,    32,     1,    31,    11,
      33,    39,    18,     1,     1,    21,    18,    30,    20,    21,
       0,    28,    35,    49,    37,    38,     3,    57,    30,    57,
      71,    49,    28,    35,    28,    37,    38,    25,    26,    80,
      49,    28,    49,    31,     5,    58,    31,    75,    89,    77,
       1,     4,    40,    81,    29,    40,    58,   130,    71,    47,
      88,    30,    50,    51,   105,    50,    51,    80,     6,    71,
      98,    99,   100,     7,     0,     1,    89,     3,    80,    33,
      31,    41,    42,    43,    44,    45,    46,    89,    50,    40,
      10,    11,   105,     8,   135,   108,    36,    37,    38,    50,
      51,    50,    51,   105,   132,    13,   108,   137,   138,    17,
      18,    19,   140,   154,    22,    23,    24,    34,   102,   103,
     104,    12,   135,    20,   152,    39,    40,    35,    15,    16,
      33,     9,    27,   135,    10,    48,   149,    27,    30,    21,
      50,   154,    21,    51,    32,    34,    32,   149,    17,    30,
      33,    28,   154,    41,    42,    43,    44,    45,    46,    32,
      15,    27,    34,    20,    49,    21,     5,    20,    90,   141,
      91,    -1,    -1,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    53,    54,    55,    51,    59,     0,    54,
      28,     4,    56,    57,    58,    59,     5,     1,    28,    29,
      30,     6,    56,    10,    11,    58,    56,    33,     7,    50,
       8,    34,    13,    17,    18,    19,    22,    23,    24,    35,
      59,    60,    61,    62,    63,    64,    65,    66,    68,    69,
      70,    71,    82,    12,     1,    25,    26,    31,    40,    47,
      50,    59,    72,    73,    74,    75,    77,    79,    80,    82,
      72,    20,    82,    82,    82,    31,    77,    33,     9,     1,
      28,    27,    10,    72,    77,    50,    82,    75,    31,    14,
      49,    48,    41,    42,    43,    44,    45,    46,    76,    39,
      40,    78,    36,    37,    38,    20,    60,    27,    30,    67,
      67,    77,    77,    60,    77,    32,    32,    77,    60,    73,
      74,    77,    77,    77,    79,    79,    79,    60,    21,    50,
      82,    34,    30,    81,    15,    16,    21,    17,    28,    67,
      33,    77,    32,    60,    72,    72,    77,    81,    15,    28,
      34,    82,    27,    77,    20,    60,    21
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
#line 29 "mini_l.y"
    {printf("program -> functions\n");;}
    break;

  case 3:
#line 30 "mini_l.y"
    {yyerrok; yyclearin;;}
    break;

  case 4:
#line 34 "mini_l.y"
    {printf("functions -> epsilon\n");;}
    break;

  case 5:
#line 36 "mini_l.y"
    {printf("functions -> function functions\n");;}
    break;

  case 6:
#line 40 "mini_l.y"
    {printf("function -> FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");;}
    break;

  case 7:
#line 44 "mini_l.y"
    {printf("declarations -> epsilon\n");;}
    break;

  case 8:
#line 46 "mini_l.y"
    {printf("declarations -> declaration SEMICOLON declarations\n");;}
    break;

  case 9:
#line 47 "mini_l.y"
    {yyerrok;;}
    break;

  case 10:
#line 51 "mini_l.y"
    {printf("declaration -> identifiers COLON INTEGER\n");;}
    break;

  case 11:
#line 53 "mini_l.y"
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");;}
    break;

  case 12:
#line 57 "mini_l.y"
    {printf("identifiers -> ident\n");;}
    break;

  case 13:
#line 59 "mini_l.y"
    {printf("identifiers -> ident COMMA identifiers\n");;}
    break;

  case 14:
#line 63 "mini_l.y"
    {printf("ident -> IDENT %s\n", (yyvsp[(1) - (1)].identVal));;}
    break;

  case 15:
#line 67 "mini_l.y"
    {printf("statements -> statement SEMICOLON statements\n");;}
    break;

  case 16:
#line 69 "mini_l.y"
    {printf("statements -> statement SEMICOLON\n");;}
    break;

  case 17:
#line 70 "mini_l.y"
    {yyerrok;;}
    break;

  case 18:
#line 74 "mini_l.y"
    {printf("statements -> svar\n");;}
    break;

  case 19:
#line 76 "mini_l.y"
    {printf("statements -> sif\n");;}
    break;

  case 20:
#line 78 "mini_l.y"
    {printf("statements -> swhile\n");;}
    break;

  case 21:
#line 80 "mini_l.y"
    {printf("statements -> sdo\n");;}
    break;

  case 22:
#line 82 "mini_l.y"
    {printf("statements -> sfor\n");;}
    break;

  case 23:
#line 84 "mini_l.y"
    {printf("statements -> sread\n");;}
    break;

  case 24:
#line 86 "mini_l.y"
    {printf("statements -> swrite\n");;}
    break;

  case 25:
#line 88 "mini_l.y"
    {printf("statements -> scontinue\n");;}
    break;

  case 26:
#line 90 "mini_l.y"
    {printf("statements -> sreturn\n");;}
    break;

  case 27:
#line 94 "mini_l.y"
    {printf("svar -> var ASSIGN expression\n");;}
    break;

  case 28:
#line 98 "mini_l.y"
    {printf("sif -> IF bool_expr THEN statements ENDIF\n");;}
    break;

  case 29:
#line 100 "mini_l.y"
    {printf("sif -> IF bool_expr THEN statements ELSE statements ENDIF\n");;}
    break;

  case 30:
#line 104 "mini_l.y"
    {printf("swhile -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");;}
    break;

  case 31:
#line 108 "mini_l.y"
    {printf("sdo ->  DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");;}
    break;

  case 32:
#line 112 "mini_l.y"
    {printf("sfor ->  FOR var ASSIGN NUMBER SEMI COLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");;}
    break;

  case 33:
#line 116 "mini_l.y"
    {printf("varLoop -> epsilon\n");;}
    break;

  case 34:
#line 118 "mini_l.y"
    {printf("varLoop ->  COMMA var varLoop\n");;}
    break;

  case 35:
#line 122 "mini_l.y"
    {printf("sread -> READ var varLoop\n");;}
    break;

  case 36:
#line 126 "mini_l.y"
    {printf("swrite -> WRITE var varLoop\n");;}
    break;

  case 37:
#line 130 "mini_l.y"
    {printf("scontinue -> CONTINUE\n");;}
    break;

  case 38:
#line 134 "mini_l.y"
    {printf("sreturn -> RETURN expression\n");;}
    break;

  case 39:
#line 138 "mini_l.y"
    {printf("bool_expr -> relation_exprs\n");;}
    break;

  case 40:
#line 140 "mini_l.y"
    {printf("bool_expr -> bool_expr OR relation_exprs\n");;}
    break;

  case 41:
#line 144 "mini_l.y"
    {printf("relation_exprs -> relation_expr\n");;}
    break;

  case 42:
#line 146 "mini_l.y"
    {printf("relation_exprs -> relation_expres AND relation_expr\n");;}
    break;

  case 43:
#line 150 "mini_l.y"
    {printf("relation_expr -> NOT ece\n");;}
    break;

  case 44:
#line 152 "mini_l.y"
    {printf("relation_expr -> ece\n");;}
    break;

  case 45:
#line 154 "mini_l.y"
    {printf("relation_expr -> TRUE\n");;}
    break;

  case 46:
#line 156 "mini_l.y"
    {printf("relation_expr -> FALSE\n");;}
    break;

  case 47:
#line 158 "mini_l.y"
    {printf("relation_expr -> LPAREN bool_expr RPAREN\n");;}
    break;

  case 48:
#line 162 "mini_l.y"
    {printf("ece -> expression comp expression\n");;}
    break;

  case 49:
#line 166 "mini_l.y"
    {printf("comp -> EQ\n");;}
    break;

  case 50:
#line 168 "mini_l.y"
    {printf("comp -> NEQ\n");;}
    break;

  case 51:
#line 170 "mini_l.y"
    {printf("comp -> LT\n");;}
    break;

  case 52:
#line 172 "mini_l.y"
    {printf("comp -> GT\n");;}
    break;

  case 53:
#line 174 "mini_l.y"
    {printf("comp -> LTE\n");;}
    break;

  case 54:
#line 176 "mini_l.y"
    {printf("comp -> GTE\n");;}
    break;

  case 55:
#line 180 "mini_l.y"
    {printf("expression -> multi_exp addSubExpr\n");;}
    break;

  case 56:
#line 181 "mini_l.y"
    {yyerrok;;}
    break;

  case 57:
#line 185 "mini_l.y"
    {printf("addSubExpr -> epsilon\n");;}
    break;

  case 58:
#line 187 "mini_l.y"
    {printf("addSubExpr -> ADD expression\n");;}
    break;

  case 59:
#line 189 "mini_l.y"
    {printf("addSubExpr -> SUB expression\n");;}
    break;

  case 60:
#line 193 "mini_l.y"
    {printf("multi_expr -> term\n");;}
    break;

  case 61:
#line 195 "mini_l.y"
    {printf("multi_expr -> term MULT multi_expr\n");;}
    break;

  case 62:
#line 197 "mini_l.y"
    {printf("multi_expr -> term DIV multi_expr\n");;}
    break;

  case 63:
#line 199 "mini_l.y"
    {printf("multi_expr -> term MOD multi_expr\n");;}
    break;

  case 64:
#line 203 "mini_l.y"
    {printf("term -> SUB var\n");;}
    break;

  case 65:
#line 205 "mini_l.y"
    {printf("term -> var\n");;}
    break;

  case 66:
#line 207 "mini_l.y"
    {printf("term -> SUB NUMBER\n");;}
    break;

  case 67:
#line 209 "mini_l.y"
    {printf("term -> NUMBER\n");;}
    break;

  case 68:
#line 211 "mini_l.y"
    {printf("term -> LPAREN expression RPAREN\n");;}
    break;

  case 69:
#line 213 "mini_l.y"
    {printf("term -> ident LPAREN expression expressionLoop RPAREN\n");;}
    break;

  case 70:
#line 217 "mini_l.y"
    {printf("expressionLoop -> epsilon\n");;}
    break;

  case 71:
#line 219 "mini_l.y"
    {printf("exprssionLoop -> COMMA expression expressionLoop\n");;}
    break;

  case 72:
#line 223 "mini_l.y"
    {printf("var -> ident\n");;}
    break;

  case 73:
#line 225 "mini_l.y"
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BACKET\n");;}
    break;

  case 74:
#line 227 "mini_l.y"
    {printf("var -> ident L_SQSUARE_BRACKET expression R_SQUARE_BRACKET\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1930 "y.tab.c"
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


#line 230 "mini_l.y"


int main(int argc, char ** argv) {
	if (argc >= 2) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			yyin = stdin;
		}
	}
	else {
		yyin = stdin;
	}
	yyparse();
	return 1;
}
