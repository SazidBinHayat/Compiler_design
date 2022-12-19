
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "f.y"

	/* C Declarations */
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex ();
	int yyerror();

	#define maxn 1000007
	char valname[1009][1009];
	int data[1009], switch_data[maxn+1];
	int idx = 1;
	int isDeclared(char *now) {
		for(int i=1; i<idx; i++) {
			if(strcmp(valname[i], now) == 0) {
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)) return 0;
		strcpy(valname[idx], now);
		data[idx]=0;
		idx++;
	}
	int getVal(char *now) {
		return data[isDeclared(now)];
	}
	int setVal(char *now, int v) {
		int id = isDeclared(now);
		data[id] = v;
	}


/* Line 189 of yacc.c  */
#line 110 "f.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VAR = 259,
     START = 260,
     IS = 261,
     PLUS = 262,
     MINUS = 263,
     MUL = 264,
     DIV = 265,
     MOD = 266,
     INCREMENT = 267,
     XCHANGE = 268,
     CONVERT_TO_BINARY = 269,
     DECREMENT = 270,
     POW = 271,
     GT = 272,
     LT = 273,
     LTE = 274,
     GTE = 275,
     EQL = 276,
     NEQL = 277,
     NONE = 278,
     ELIS = 279,
     INT = 280,
     FLOAT = 281,
     CHAR = 282,
     CBS = 283,
     CBE = 284,
     FLOOP = 285,
     WHILE = 286,
     EVEN_OR_ODD = 287,
     DISPLAY = 288,
     FACTORIAL = 289,
     IF = 290,
     DEFAULT = 291,
     GO = 292,
     CASE = 293,
     MIN = 294,
     MAX = 295,
     ISPRIME = 296,
     FUNCTION = 297,
     ARRAY = 298,
     ARRINT = 299,
     ARRFLOAT = 300,
     ARRCHAR = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "f.y"

	char text[1009];
	int val;



/* Line 214 of yacc.c  */
#line 199 "f.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 211 "f.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    49,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    19,    22,    27,
      35,    47,    66,    74,    84,    94,   104,   114,   126,   135,
     141,   149,   157,   165,   171,   177,   185,   193,   199,   206,
     211,   212,   215,   217,   220,   223,   228,   236,   248,   267,
     275,   285,   295,   305,   315,   327,   333,   341,   349,   357,
     363,   369,   377,   385,   391,   398,   403,   406,   408,   410,
     412,   416,   418,   420,   423,   424,   427,   433,   438,   440,
     442,   446,   450,   454,   458,   462,   466,   470,   474,   478,
     481,   484,   488,   492,   496
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,     5,    47,    48,    28,    55,    29,    -1,
      -1,    55,    56,    -1,    49,    -1,    59,    49,    -1,    66,
      49,    -1,     4,    50,    66,    49,    -1,     6,    47,    66,
      48,    28,    56,    29,    -1,     6,    47,    66,    48,    28,
      56,    29,    23,    28,    56,    29,    -1,     6,    47,    66,
      48,    28,    56,    29,    24,    47,    66,    48,    28,    56,
      29,    23,    28,    56,    29,    -1,    37,    47,    66,    48,
      28,    62,    29,    -1,    30,    47,    66,    18,    66,    48,
      28,    56,    29,    -1,    30,    47,    66,    19,    66,    48,
      28,    56,    29,    -1,    30,    47,    66,    17,    66,    48,
      28,    56,    29,    -1,    30,    47,    66,    20,    66,    48,
      28,    56,    29,    -1,    30,    47,    66,    51,    66,    51,
      66,    48,    28,    56,    29,    -1,    42,     4,    47,    57,
      48,    28,    57,    29,    -1,    33,    47,    66,    48,    49,
      -1,    43,    44,     4,    47,     3,    48,    49,    -1,    43,
      45,     4,    47,     3,    48,    49,    -1,    43,    46,     4,
      47,     3,    48,    49,    -1,    34,    47,     3,    48,    49,
      -1,    32,    47,     3,    48,    49,    -1,    39,    47,     3,
      51,     3,    48,    49,    -1,    40,    47,     3,    51,     3,
      48,    49,    -1,    41,    47,     3,    48,    49,    -1,    13,
      47,    66,    51,    66,    48,    -1,    14,    47,    66,    48,
      -1,    -1,    57,    58,    -1,    49,    -1,    59,    49,    -1,
      66,    49,    -1,     4,    50,    66,    49,    -1,     6,    47,
      66,    48,    28,    58,    29,    -1,     6,    47,    66,    48,
      28,    58,    29,    23,    28,    58,    29,    -1,     6,    47,
      66,    48,    28,    58,    29,    24,    47,    66,    48,    28,
      58,    29,    23,    28,    58,    29,    -1,    37,    47,    66,
      48,    28,    62,    29,    -1,    30,    47,    66,    18,    66,
      48,    28,    58,    29,    -1,    30,    47,    66,    19,    66,
      48,    28,    58,    29,    -1,    30,    47,    66,    17,    66,
      48,    28,    58,    29,    -1,    30,    47,    66,    20,    66,
      48,    28,    58,    29,    -1,    30,    47,    66,    51,    66,
      51,    66,    48,    28,    58,    29,    -1,    33,    47,    66,
      48,    49,    -1,    43,    44,     4,    47,     3,    48,    49,
      -1,    43,    45,     4,    47,     3,    48,    49,    -1,    43,
      46,     4,    47,     3,    48,    49,    -1,    34,    47,     3,
      48,    49,    -1,    32,    47,     3,    48,    49,    -1,    39,
      47,     3,    51,     3,    48,    49,    -1,    40,    47,     3,
      51,     3,    48,    49,    -1,    41,    47,     3,    48,    49,
      -1,    13,    47,    66,    51,    66,    48,    -1,    14,    47,
      66,    48,    -1,    60,    61,    -1,    25,    -1,    26,    -1,
      27,    -1,    61,    51,     4,    -1,     4,    -1,    63,    -1,
      63,    65,    -1,    -1,    63,    64,    -1,    38,     3,    52,
      66,    49,    -1,    36,    52,    66,    49,    -1,     3,    -1,
       4,    -1,    66,     7,    66,    -1,    66,     8,    66,    -1,
      66,     9,    66,    -1,    66,    18,    66,    -1,    66,    17,
      66,    -1,    66,    19,    66,    -1,    66,    20,    66,    -1,
      66,    21,    66,    -1,    66,    22,    66,    -1,    66,    12,
      -1,    66,    15,    -1,    47,    66,    48,    -1,    66,    10,
      66,    -1,    66,    11,    66,    -1,    66,    16,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    64,    67,    69,    71,    73,    79,
      88,    97,   109,   117,   121,   125,   129,   133,   141,   145,
     149,   154,   159,   164,   172,   181,   189,   197,   209,   219,
     237,   238,   241,   243,   245,   247,   253,   262,   271,   283,
     290,   294,   298,   302,   306,   314,   318,   323,   328,   333,
     341,   350,   358,   366,   377,   387,   406,   410,   411,   412,
     417,   425,   434,   435,   438,   439,   442,   448,   454,   456,
     458,   460,   462,   464,   466,   468,   470,   472,   474,   476,
     478,   480,   482,   487,   492
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VAR", "START", "IS", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "INCREMENT", "XCHANGE",
  "CONVERT_TO_BINARY", "DECREMENT", "POW", "GT", "LT", "LTE", "GTE", "EQL",
  "NEQL", "NONE", "ELIS", "INT", "FLOAT", "CHAR", "CBS", "CBE", "FLOOP",
  "WHILE", "EVEN_OR_ODD", "DISPLAY", "FACTORIAL", "IF", "DEFAULT", "GO",
  "CASE", "MIN", "MAX", "ISPRIME", "FUNCTION", "ARRAY", "ARRINT",
  "ARRFLOAT", "ARRCHAR", "'('", "')'", "';'", "'='", "','", "':'",
  "$accept", "program", "line", "statement", "function_line",
  "function_statement", "declaration", "datatype", "ID", "casenumber",
  "caserule", "casenum", "defaultnum", "expression", 0
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
     295,   296,   297,   298,   299,   300,   301,    40,    41,    59,
      61,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     2,     2,     4,     7,
      11,    18,     7,     9,     9,     9,     9,    11,     8,     5,
       7,     7,     7,     5,     5,     7,     7,     5,     6,     4,
       0,     2,     1,     2,     2,     4,     7,    11,    18,     7,
       9,     9,     9,     9,    11,     5,     7,     7,     7,     5,
       5,     7,     7,     5,     6,     4,     2,     1,     1,     1,
       3,     1,     1,     2,     0,     2,     5,     4,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    68,    69,
       0,     0,     0,    57,    58,    59,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     6,    61,    56,     0,     0,     0,     0,     0,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,    81,     0,    70,    71,    72,
      82,    83,    84,    74,    73,    75,    76,    77,    78,     8,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,    74,    73,    75,    76,     0,    24,    19,    23,
      64,     0,     0,    27,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    31,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    33,    34,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    12,     0,     0,    65,    63,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
      15,    13,    14,    16,     0,     0,     0,     0,     0,    74,
      73,    75,    76,     0,    50,    45,    49,    64,     0,     0,
      53,     0,     0,     0,     0,     0,     0,    67,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,    17,    66,    36,     0,     0,     0,
       0,     0,    39,    51,    52,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      40,    41,    43,     0,     0,     0,     0,     0,     0,    37,
       0,    44,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    29,   115,   149,   150,    31,    53,   162,
     163,   196,   197,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -256
static const yytype_int16 yypact[] =
{
       6,   -29,    19,   -17,  -256,    12,  -256,   165,  -256,    -4,
     -14,    -6,    14,  -256,  -256,  -256,  -256,    16,    17,    18,
      20,    26,    27,    28,    29,    49,   -23,     5,  -256,  -256,
      34,    62,   490,     5,     5,     5,     5,     5,    74,     5,
      90,     5,    92,    98,    99,    56,   100,   101,   102,  -256,
     595,  -256,  -256,    57,     5,     5,     5,     5,     5,  -256,
    -256,     5,     5,     5,     5,     5,     5,     5,  -256,   506,
     611,   379,   629,   395,    59,   645,    63,   663,    64,    65,
      66,  -256,    71,    75,    76,  -256,   117,    70,    70,    -5,
      -5,   985,    -5,   985,   985,   985,   985,   985,   985,  -256,
      96,     5,  -256,     5,     5,     5,     5,     5,    77,    78,
      79,    97,   127,   131,    88,   240,   138,   139,   141,  -256,
     106,   679,   697,   713,   731,   747,   416,  -256,  -256,  -256,
    -256,   103,   104,  -256,   107,   109,   111,   119,   123,   125,
     126,   128,   129,   130,   133,   146,    -9,   122,  -256,  -256,
     115,   525,   148,   152,   153,   145,  -256,   175,   181,   182,
     183,     5,   186,   -33,   167,   168,     5,     5,     5,     5,
       5,   215,     5,   217,     5,   218,   219,   221,   226,   227,
     228,  -256,  -256,  -256,   184,   185,   187,     1,   106,   106,
     106,   106,   765,  -256,   188,   232,  -256,  -256,  -256,  -256,
     541,   781,   432,   799,   453,   189,   815,   190,   833,   197,
     199,   191,   205,   208,   209,   294,  -256,  -256,  -256,   229,
     211,   230,   231,   233,   234,   236,     5,   216,  -256,   241,
       5,  -256,     5,     5,     5,     5,     5,   212,   222,   235,
     247,   273,   279,   237,   282,   287,   288,  -256,   106,     5,
    -256,  -256,  -256,  -256,   106,   560,     5,   336,   849,   867,
     883,   901,   917,   469,  -256,  -256,  -256,  -256,   244,   245,
    -256,   246,   248,   251,   266,   935,   274,  -256,   576,   275,
    -256,   278,   281,   284,   285,     5,   286,   253,   261,   265,
     267,   268,  -256,   290,  -256,  -256,    15,   336,   336,   336,
     336,   951,  -256,  -256,  -256,  -256,  -256,  -256,   106,   302,
     289,   293,   303,   309,   315,   317,   318,   336,     5,  -256,
    -256,  -256,  -256,   336,   323,   319,   969,   322,   324,  -256,
     325,  -256,   106,   336,   326,   327,  -256,   331,   329,   336,
     330,  -256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,  -256,  -256,  -119,   177,  -255,    -3,  -256,  -256,    93,
    -256,  -256,  -256,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      32,   155,   279,   194,    30,   195,    58,    59,     8,    49,
      60,     1,    62,    63,    64,    65,    66,    67,     3,     4,
      50,    46,    47,    48,   219,   220,    69,    70,    71,    72,
      73,     5,    75,    34,    77,   178,   179,   180,   309,   310,
       6,    35,   311,   312,   313,   314,    33,    87,    88,    89,
      90,    91,    27,    45,    92,    93,    94,    95,    96,    97,
      98,    36,   325,    37,    38,    39,    52,    40,   327,   221,
     222,   223,   224,    41,    42,    43,    44,    74,   335,    56,
      57,    58,    59,    51,   340,    60,    61,    62,    63,    64,
      65,    66,    67,    76,   121,    78,   122,   123,   124,   125,
     126,    79,    80,    81,    82,    83,    84,   108,    86,     8,
       9,   110,    10,    32,   114,   112,   113,    30,   116,    11,
      12,   119,   117,   118,   120,   130,   127,   128,   129,   274,
     131,    13,    14,    15,   132,   276,    17,   133,    18,    19,
      20,   152,   153,    21,   154,    22,    23,    24,    25,    26,
     181,   164,   165,    27,   192,    28,   167,   166,   168,   200,
     201,   202,   203,   204,   182,   206,   169,   208,     8,     9,
     170,    10,   171,   172,   187,   173,   174,   175,    11,    12,
     176,    32,    32,    32,    32,    30,    30,    30,    30,   316,
      13,    14,    15,   177,    16,    17,   184,    18,    19,    20,
     185,   186,    21,   188,    22,    23,    24,    25,    26,   189,
     190,   191,    27,   334,    28,   193,   198,   199,   205,   255,
     207,   209,   210,   258,   211,   259,   260,   261,   262,   263,
     212,   213,   214,   216,   217,   227,   218,   237,   239,   243,
     226,    32,   275,     8,   134,    30,   135,    32,   241,   278,
     242,    30,   244,   136,   137,   245,   246,   248,   249,   250,
     251,   264,   252,   253,   254,    13,    14,    15,   256,   257,
     138,   265,   139,   140,   141,   267,   268,   142,   301,   143,
     144,   145,   269,   146,   266,   271,   270,    27,   147,   148,
     272,   273,   287,   288,   289,   292,   290,     8,   134,   291,
     135,    32,   303,   294,   296,    30,   297,   136,   137,   298,
     304,   326,   299,   300,   305,   302,   306,   307,   308,    13,
      14,    15,   319,   247,   138,    32,   139,   140,   141,    30,
     317,   142,   320,   143,   144,   145,   318,   146,   321,     8,
     134,    27,   135,   148,   322,   323,   328,   324,   329,   136,
     137,   331,   332,   333,   338,   336,   337,   339,   215,   341,
     286,    13,    14,    15,     0,     0,   138,     0,   139,   140,
     141,     0,     0,   142,     0,   143,   144,   145,     0,   146,
       0,     0,     0,    27,     0,   148,    54,    55,    56,    57,
      58,    59,     0,     0,    60,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    56,    57,    58,    59,     0,     0,
      60,    61,   103,   104,   105,   106,    66,    67,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,     0,
     101,    60,    61,    62,    63,    64,    65,    66,    67,    54,
      55,    56,    57,    58,    59,     0,   107,    60,    61,    62,
      63,    64,    65,    66,    67,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,    59,     0,   161,    60,    61,
     232,   233,   234,   235,    66,    67,    54,    55,    56,    57,
      58,    59,     0,   230,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,     0,   236,    60,    61,    62,    63,    64,
      65,    66,    67,    54,    55,    56,    57,    58,    59,     0,
     285,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,     0,    54,    55,    56,    57,    58,    59,     0,    68,
      60,    61,    62,    63,    64,    65,    66,    67,    54,    55,
      56,    57,    58,    59,     0,    99,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,     0,    54,    55,    56,
      57,    58,    59,     0,   183,    60,    61,    62,    63,    64,
      65,    66,    67,    54,    55,    56,    57,    58,    59,     0,
     228,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,     0,    54,    55,    56,    57,    58,    59,     0,   277,
      60,    61,    62,    63,    64,    65,    66,    67,    54,    55,
      56,    57,    58,    59,     0,   295,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    54,    55,    56,    57,
      58,    59,     0,    85,    60,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    56,    57,    58,    59,     0,   100,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      54,    55,    56,    57,    58,    59,     0,   102,    60,    61,
      62,    63,    64,    65,    66,    67,    54,    55,    56,    57,
      58,    59,     0,   109,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    54,    55,    56,    57,    58,    59,
       0,   111,    60,    61,    62,    63,    64,    65,    66,    67,
      54,    55,    56,    57,    58,    59,     0,   156,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    54,    55,
      56,    57,    58,    59,     0,   157,    60,    61,    62,    63,
      64,    65,    66,    67,    54,    55,    56,    57,    58,    59,
       0,   158,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    54,    55,    56,    57,    58,    59,     0,   159,
      60,    61,    62,    63,    64,    65,    66,    67,    54,    55,
      56,    57,    58,    59,     0,   160,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    54,    55,    56,    57,
      58,    59,     0,   225,    60,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    56,    57,    58,    59,     0,   229,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      54,    55,    56,    57,    58,    59,     0,   231,    60,    61,
      62,    63,    64,    65,    66,    67,    54,    55,    56,    57,
      58,    59,     0,   238,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    54,    55,    56,    57,    58,    59,
       0,   240,    60,    61,    62,    63,    64,    65,    66,    67,
      54,    55,    56,    57,    58,    59,     0,   280,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    54,    55,
      56,    57,    58,    59,     0,   281,    60,    61,    62,    63,
      64,    65,    66,    67,    54,    55,    56,    57,    58,    59,
       0,   282,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    54,    55,    56,    57,    58,    59,     0,   283,
      60,    61,    62,    63,    64,    65,    66,    67,    54,    55,
      56,    57,    58,    59,     0,   284,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    54,    55,    56,    57,
      58,    59,     0,   293,    60,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    56,    57,    58,    59,     0,   315,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   330
};

static const yytype_int16 yycheck[] =
{
       7,   120,   257,    36,     7,    38,    11,    12,     3,     4,
      15,     5,    17,    18,    19,    20,    21,    22,    47,     0,
      27,    44,    45,    46,    23,    24,    33,    34,    35,    36,
      37,    48,    39,    47,    41,    44,    45,    46,    23,    24,
      28,    47,   297,   298,   299,   300,    50,    54,    55,    56,
      57,    58,    47,     4,    61,    62,    63,    64,    65,    66,
      67,    47,   317,    47,    47,    47,     4,    47,   323,   188,
     189,   190,   191,    47,    47,    47,    47,     3,   333,     9,
      10,    11,    12,    49,   339,    15,    16,    17,    18,    19,
      20,    21,    22,     3,   101,     3,   103,   104,   105,   106,
     107,     3,     3,    47,     4,     4,     4,    48,    51,     3,
       4,    48,     6,   120,    48,    51,    51,   120,    47,    13,
      14,     4,    47,    47,    28,    28,    49,    49,    49,   248,
       3,    25,    26,    27,     3,   254,    30,    49,    32,    33,
      34,     3,     3,    37,     3,    39,    40,    41,    42,    43,
      28,    48,    48,    47,   161,    49,    47,    50,    47,   166,
     167,   168,   169,   170,    49,   172,    47,   174,     3,     4,
      47,     6,    47,    47,    29,    47,    47,    47,    13,    14,
      47,   188,   189,   190,   191,   188,   189,   190,   191,   308,
      25,    26,    27,    47,    29,    30,    48,    32,    33,    34,
      48,    48,    37,    28,    39,    40,    41,    42,    43,    28,
      28,    28,    47,   332,    49,    29,    49,    49,     3,   226,
       3,     3,     3,   230,     3,   232,   233,   234,   235,   236,
       4,     4,     4,    49,    49,     3,    49,    48,    48,    48,
      52,   248,   249,     3,     4,   248,     6,   254,    51,   256,
      51,   254,    47,    13,    14,    47,    47,    28,    47,    29,
      29,    49,    29,    29,    28,    25,    26,    27,    52,    28,
      30,    49,    32,    33,    34,    28,     3,    37,   285,    39,
      40,    41,     3,    43,    49,     3,    49,    47,    48,    49,
       3,     3,    48,    48,    48,    29,    48,     3,     4,    48,
       6,   308,    49,    29,    29,   308,    28,    13,    14,    28,
      49,   318,    28,    28,    49,    29,    49,    49,    28,    25,
      26,    27,    29,    29,    30,   332,    32,    33,    34,   332,
      28,    37,    29,    39,    40,    41,    47,    43,    29,     3,
       4,    47,     6,    49,    29,    28,    23,    29,    29,    13,
      14,    29,    28,    28,    23,    29,    29,    28,   181,    29,
     267,    25,    26,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    -1,    49,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    -1,
      51,    15,    16,    17,    18,    19,    20,    21,    22,     7,
       8,     9,    10,    11,    12,    -1,    51,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    51,    15,    16,
      17,    18,    19,    20,    21,    22,     7,     8,     9,    10,
      11,    12,    -1,    51,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    -1,    51,    15,    16,    17,    18,    19,
      20,    21,    22,     7,     8,     9,    10,    11,    12,    -1,
      51,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    49,
      15,    16,    17,    18,    19,    20,    21,    22,     7,     8,
       9,    10,    11,    12,    -1,    49,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    -1,    49,    15,    16,    17,    18,    19,
      20,    21,    22,     7,     8,     9,    10,    11,    12,    -1,
      49,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    49,
      15,    16,    17,    18,    19,    20,    21,    22,     7,     8,
       9,    10,    11,    12,    -1,    49,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    48,    15,    16,    17,    18,    19,    20,
      21,    22,     7,     8,     9,    10,    11,    12,    -1,    48,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    48,    15,    16,
      17,    18,    19,    20,    21,    22,     7,     8,     9,    10,
      11,    12,    -1,    48,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    48,    15,    16,    17,    18,    19,    20,    21,    22,
       7,     8,     9,    10,    11,    12,    -1,    48,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    48,    15,    16,    17,    18,
      19,    20,    21,    22,     7,     8,     9,    10,    11,    12,
      -1,    48,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    48,
      15,    16,    17,    18,    19,    20,    21,    22,     7,     8,
       9,    10,    11,    12,    -1,    48,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    48,    15,    16,    17,    18,    19,    20,
      21,    22,     7,     8,     9,    10,    11,    12,    -1,    48,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    48,    15,    16,
      17,    18,    19,    20,    21,    22,     7,     8,     9,    10,
      11,    12,    -1,    48,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    48,    15,    16,    17,    18,    19,    20,    21,    22,
       7,     8,     9,    10,    11,    12,    -1,    48,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    48,    15,    16,    17,    18,
      19,    20,    21,    22,     7,     8,     9,    10,    11,    12,
      -1,    48,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    48,
      15,    16,    17,    18,    19,    20,    21,    22,     7,     8,
       9,    10,    11,    12,    -1,    48,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    48,    15,    16,    17,    18,    19,    20,
      21,    22,     7,     8,     9,    10,    11,    12,    -1,    48,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    54,    47,     0,    48,    28,    55,     3,     4,
       6,    13,    14,    25,    26,    27,    29,    30,    32,    33,
      34,    37,    39,    40,    41,    42,    43,    47,    49,    56,
      59,    60,    66,    50,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,     4,    44,    45,    46,     4,
      66,    49,     4,    61,     7,     8,     9,    10,    11,    12,
      15,    16,    17,    18,    19,    20,    21,    22,    49,    66,
      66,    66,    66,    66,     3,    66,     3,    66,     3,     3,
       3,    47,     4,     4,     4,    48,    51,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    49,
      48,    51,    48,    17,    18,    19,    20,    51,    48,    48,
      48,    48,    51,    51,    48,    57,    47,    47,    47,     4,
      28,    66,    66,    66,    66,    66,    66,    49,    49,    49,
      28,     3,     3,    49,     4,     6,    13,    14,    30,    32,
      33,    34,    37,    39,    40,    41,    43,    48,    49,    58,
      59,    66,     3,     3,     3,    56,    48,    48,    48,    48,
      48,    51,    62,    63,    48,    48,    50,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    44,    45,
      46,    28,    49,    49,    48,    48,    48,    29,    28,    28,
      28,    28,    66,    29,    36,    38,    64,    65,    49,    49,
      66,    66,    66,    66,    66,     3,    66,     3,    66,     3,
       3,     3,     4,     4,     4,    57,    49,    49,    49,    23,
      24,    56,    56,    56,    56,    48,    52,     3,    49,    48,
      51,    48,    17,    18,    19,    20,    51,    48,    48,    48,
      48,    51,    51,    48,    47,    47,    47,    29,    28,    47,
      29,    29,    29,    29,    28,    66,    52,    28,    66,    66,
      66,    66,    66,    66,    49,    49,    49,    28,     3,     3,
      49,     3,     3,     3,    56,    66,    56,    49,    66,    58,
      48,    48,    48,    48,    48,    51,    62,    48,    48,    48,
      48,    48,    29,    48,    29,    49,    29,    28,    28,    28,
      28,    66,    29,    49,    49,    49,    49,    49,    28,    23,
      24,    58,    58,    58,    58,    48,    56,    28,    47,    29,
      29,    29,    29,    28,    29,    58,    66,    58,    23,    29,
      48,    29,    28,    28,    56,    58,    29,    29,    23,    28,
      58,    29
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 60 "f.y"
    {printf("\nCompilation Successful\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 69 "f.y"
    { ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 71 "f.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 73 "f.y"
    { 
		printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)].val));
		setVal((yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].val)); 								//data[$1]=$3;
		(yyval.val) = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 79 "f.y"
    {
		if((yyvsp[(3) - (7)].val)) {
			printf("\nvalue of expression in IS: %d\n",(yyvsp[(6) - (7)].val));
		}
		else{
			printf("\ncondition value zero in IS block\n");
		}
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 "f.y"
    {
		if((yyvsp[(3) - (11)].val)){
			printf("value of expression in IS: %d\n",(yyvsp[(6) - (11)].val));
		}
		else{
			printf("value of expression in NONE: %d\n",(yyvsp[(10) - (11)].val));
		}
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 97 "f.y"
    {
		if((yyvsp[(3) - (18)].val)) {
			printf("\nValue of expression in IS: %d\n", (yyvsp[(6) - (18)].val));
		}
		else if((yyvsp[(10) - (18)].val)) {
			printf("\nValue of expression in ELIS: %d\n", (yyvsp[(13) - (18)].val));
		}
		else{
			printf("\nValue of expression in NONE: %d\n", (yyvsp[(17) - (18)].val));
		}
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 109 "f.y"
    {
		printf("\nSIMILIAR of Switch Case\n");
		if(switch_data[(yyvsp[(3) - (7)].val)]) printf("\nChoosen case number is : %d and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		memset(switch_data, 0, sizeof(switch_data));
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "f.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}	
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 121 "f.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<=(yyvsp[(5) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}	
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 125 "f.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<(yyvsp[(3) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}		
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 129 "f.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<=(yyvsp[(3) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}		
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 133 "f.y"
    {
	    if((yyvsp[(3) - (11)].val) <= (yyvsp[(5) - (11)].val)) {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i+=(yyvsp[(7) - (11)].val)) {printf("\nCount loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i>(yyvsp[(5) - (11)].val) ; i-=(yyvsp[(7) - (11)].val)) {printf("\nCount loop: %d\n", i);}	
	    }
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 141 "f.y"
    {
		printf("\nFunction Declaration\n");
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 145 "f.y"
    {
		printf("\nPrint Function: %d\n",(yyvsp[(3) - (5)].val));
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 149 "f.y"
    {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 154 "f.y"
    {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 159 "f.y"
    {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 164 "f.y"
    {
		int fact = 1;
		for(int i=1; i<=(yyvsp[(3) - (5)].val); i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", (yyvsp[(3) - (5)].val), fact);
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 172 "f.y"
    {
		if((yyvsp[(3) - (5)].val) % 2 == 0) {
			printf("Number : %d is Even\n",(yyvsp[(3) - (5)].val));
		}
		else {
			printf("Number :%d is Odd\n",(yyvsp[(3) - (5)].val));
		}
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 181 "f.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 189 "f.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 197 "f.y"
    {
		int n1 = (yyvsp[(3) - (5)].val), fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 209 "f.y"
    {
		int n1 = (yyvsp[(3) - (6)].val), n2 = (yyvsp[(5) - (6)].val), temp;
		temp = n1;
		n1=n2;
		n2=temp;
		printf("\nFirst variabel = %d\n",n1);
		printf("\nSecond variabel = %d\n",n2);

	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 219 "f.y"
    {
		int n = (yyvsp[(3) - (4)].val), c, k;

		for (c = 31; c >= 0; c--)
  		{
   	 		k = n >> c;

    		if (k & 1)
      		printf("1");
    		else
      		printf("0");
  		}

  		printf("\n");
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 243 "f.y"
    { ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 245 "f.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 247 "f.y"
    { 
		printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)].val));
		setVal((yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].val)); //data[$1]=$3;
		(yyval.val) = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 253 "f.y"
    {
		if((yyvsp[(3) - (7)].val)) {
			printf("\nvalue of expression in IS: %d\n",(yyvsp[(6) - (7)].val));
		}
		else{
			printf("\ncondition value zero in IS block\n");
		}
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 262 "f.y"
    {
		if((yyvsp[(3) - (11)].val)){
			printf("value of expression in IS: %d\n",(yyvsp[(6) - (11)].val));
		}
		else{
			printf("value of expression in NONE: %d\n",(yyvsp[(10) - (11)].val));
		}
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 271 "f.y"
    {
		if((yyvsp[(3) - (18)].val)) {
			printf("\nValue of expression in IS: %d\n", (yyvsp[(6) - (18)].val));
		}
		else if((yyvsp[(10) - (18)].val)) {
			printf("\nValue of expression in ELIS: %d\n", (yyvsp[(13) - (18)].val));
		}
		else{
			printf("\nValue of expression in NONE: %d\n", (yyvsp[(17) - (18)].val));
		}
	;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 283 "f.y"
    {
		printf("\nSIMILIAR of Switch Case\n");
		if(switch_data[(yyvsp[(3) - (7)].val)]) printf("\nChoosen case number is : %d and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		memset(switch_data, 0, sizeof(switch_data));
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 290 "f.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}	
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 294 "f.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<=(yyvsp[(5) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 298 "f.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<(yyvsp[(3) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}	
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 302 "f.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<=(yyvsp[(3) - (9)].val) ; i++) {printf("\nCount loop: %d\n", i);}
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 306 "f.y"
    {
	    if((yyvsp[(3) - (11)].val) <= (yyvsp[(5) - (11)].val)) {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i+=(yyvsp[(7) - (11)].val)) {printf("\nCount loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i>(yyvsp[(5) - (11)].val) ; i-=(yyvsp[(7) - (11)].val)) {printf("\nCount loop: %d\n", i);}	
	    }
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 314 "f.y"
    {
		printf("\nPrint Function: %d\n",(yyvsp[(3) - (5)].val));
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 318 "f.y"
    {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 323 "f.y"
    {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 328 "f.y"
    {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 333 "f.y"
    {
		int fact = 1;
		for(int i=1; i<=(yyvsp[(3) - (5)].val); i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", (yyvsp[(3) - (5)].val), fact);
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 341 "f.y"
    {
		if((yyvsp[(3) - (5)].val) % 2 == 0) {
			printf("Number : %d is Even\n",(yyvsp[(3) - (5)].val));
		}
		else {
			printf("Number :%d is Odd\n",(yyvsp[(3) - (5)].val));
		}
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 350 "f.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 358 "f.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 366 "f.y"
    {
		int n1 = (yyvsp[(3) - (5)].val), fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 377 "f.y"
    {
		int n1 = (yyvsp[(3) - (6)].val), n2 = (yyvsp[(5) - (6)].val), temp;
		temp = n1;
		n1=n2;
		n2=temp;
		printf("\nFirst variabel = %d\n",n1);
		printf("\nSecond variabel = %d\n",n2);

	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 387 "f.y"
    {
		int n = (yyvsp[(3) - (4)].val), c, k;

		for (c = 31; c >= 0; c--)
  		{
   	 		k = n >> c;

    		if (k & 1)
      		printf("1");
    		else
      		printf("0");
  		}

  		printf("\n");
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 406 "f.y"
    {printf("\nVariable Declared\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 410 "f.y"
    {printf("\nInterger Declaration\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 411 "f.y"
    {printf("\nFloat Declaration\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 412 "f.y"
    {printf("\nCharacter Declaration\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 417 "f.y"
    {
	int res = addNewVal((yyvsp[(3) - (3)].text));
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 425 "f.y"
    {
		int res = addNewVal((yyvsp[(1) - (1)].text));
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 442 "f.y"
    {
		printf("\nExpression value is %d of Case %d\n", (yyvsp[(4) - (5)].val), (yyvsp[(2) - (5)].val));
		switch_data[(yyvsp[(2) - (5)].val)] = (yyvsp[(4) - (5)].val);
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 448 "f.y"
    {
		printf("\nExpression value is %d of Default case\n", (yyvsp[(3) - (4)].val));
		switch_data[maxn] = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 454 "f.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 456 "f.y"
    {(yyval.val) = getVal((yyvsp[(1) - (1)].text));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 458 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 460 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 462 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 464 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 466 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 468 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 470 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 472 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 474 "f.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 476 "f.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val) + 1;;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 478 "f.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val) - 1;;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 480 "f.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 482 "f.y"
    {
		if((yyvsp[(3) - (3)].val)) {(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);}
		else {(yyval.val) = 0; printf("\nDivision by Zero\n");} 	
	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 487 "f.y"
    { 
		if((yyvsp[(3) - (3)].val)) {(yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);}
		else {(yyval.val) = 0; printf("\nMod by Zero\n");} 	
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 492 "f.y"
    { 
		if((yyvsp[(3) - (3)].val)) {(yyval.val) = pow((yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val));}	
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2564 "f.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 499 "f.y"




/* Additional C Codes */
int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt" ,"w", stdout);

	yyparse();

	return 0;
}
