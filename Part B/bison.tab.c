/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 12 "bison.y"

   /*Αρχεία header (#include...), δηλώσεις define (εδώ δεν υπάρχει κάποια), αρχικοποίηση 
   μεταβλητών και συναρτήσεων που θα χρησιμοποιήσουμε στο πρόγραμμα*/ 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern int yyparse();

extern FILE *yyin;
extern FILE *yyout;

void yyerror(char *);
void exp_report(int,int);
void yytrue (char *);

int ce  = 0;
int ie  = 0;

int function_start_line=0;
int function_started_flag=0;

// Μεταβλητή line για την μέτρηση γραμμών
int line=1;

/* Line 371 of yacc.c  */
#line 96 "bison.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.tab.h".  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOP = 258,
     UNKNOWN = 259,
     DOT = 260,
     SEMI = 261,
     HASH = 262,
     COLON = 263,
     COMMA = 264,
     FLOAT = 265,
     DOUBLE = 266,
     STR = 267,
     NEWLINE = 268,
     KEYWORD = 269,
     INT = 270,
     IDENTIFIER = 271,
     KEYWORD_IF = 272,
     AMPER = 273,
     EXCLA = 274,
     KEYWORD_RET = 275,
     KEYWORD_FOR = 276,
     KEYWORD_STR = 277,
     KEYWORD_ELSE = 278,
     KEYWORD_SIZE = 279,
     KEYWORD_CONT = 280,
     KEYWORD_CASE = 281,
     KEYWORD_INCL = 282,
     KEYWORD_FUNC = 283,
     KEYWORD_VOID = 284,
     KEYWORD_SWITCH = 285,
     KEYWORD_VAR_TYPE = 286,
     KEYWORD_SCAN = 287,
     KEYWORD_LEN = 288,
     KEYWORD_CMP = 289,
     KEYWORD_PRINT = 290,
     PAR_START = 291,
     PAR_END = 292,
     BRACE_START = 293,
     BRACE_END = 294,
     LOGICAL_OR = 295,
     LOGICAL_AND = 296,
     BRACKET_START = 297,
     BRACKET_END = 298,
     GREATER = 299,
     LESSER = 300,
     GREATER_EQ = 301,
     LESSER_EQ = 302,
     EQQ = 303,
     EQ = 304,
     NEQ = 305,
     EQ_MULTI = 306,
     EQ_DIV = 307,
     EQ_PLUS = 308,
     EQ_MINUS = 309,
     PLUS = 310,
     PLUSPLUS = 311,
     MINUS = 312,
     MINUSMINUS = 313,
     DIV = 314,
     MOD = 315,
     MULTI = 316,
     POW = 317
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 224 "bison.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   485

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    46,    48,    50,    56,    60,    64,
      67,    70,    73,    75,    76,    80,    82,    86,    90,    94,
      99,   101,   103,   107,   109,   110,   115,   120,   125,   131,
     133,   137,   143,   149,   152,   157,   163,   171,   175,   180,
     184,   187,   191,   192,   200,   204,   210,   211,   217,   218,
     226,   227,   233,   238,   246,   254,   257,   263,   270,   276,
     283,   289,   294,   299,   303,   307,   311,   314,   322,   328,
     331,   334,   337,   340,   345,   351,   353,   355,   357,   360,
     363,   366,   369,   372,   375,   377,   379,   382,   384,   386,
     388,   390,   392,   394,   396,   398,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    64,    96,    -1,    -1,    10,    -1,    12,
      -1,    11,    -1,    14,    -1,    15,    -1,    16,    -1,     4,
      -1,    49,    -1,    48,    -1,    50,    -1,    59,    -1,    62,
      -1,    55,    -1,    57,    -1,    61,    -1,    52,    -1,    53,
      -1,    51,    -1,    54,    -1,    -1,    58,    -1,    56,    -1,
      65,    66,    65,    49,    65,    -1,    65,    66,    65,    -1,
      65,    66,    68,    -1,    65,    67,    -1,    67,    65,    -1,
      69,    96,    -1,    96,    -1,    -1,    65,     9,    70,    -1,
      65,    -1,    42,    70,    43,    -1,    38,    69,    39,    -1,
      22,    16,    72,    -1,    22,    16,    13,    72,    -1,    90,
      -1,    65,    -1,    65,     9,    77,    -1,    29,    -1,    -1,
      42,    77,    43,     6,    -1,    42,    77,    43,     6,    -1,
      42,    77,    43,     6,    -1,    16,    42,    15,    43,     6,
      -1,    65,    -1,    65,     9,    65,    -1,    28,    16,    36,
      75,    37,    -1,    28,    16,    36,    65,    37,    -1,    31,
      16,    -1,    31,    16,    49,    68,    -1,    31,    16,    71,
      49,    68,    -1,    31,    16,    71,    49,    38,    70,    39,
      -1,    31,    16,    71,    -1,    31,    16,    49,    94,    -1,
      16,    49,    68,    -1,    20,     6,    -1,    20,    65,     6,
      -1,    -1,     7,    27,    45,    16,     5,    16,    44,    -1,
       7,    27,    12,    -1,    32,    36,    65,    37,     6,    -1,
      -1,    33,    36,    65,    37,     6,    -1,    -1,    34,    36,
      65,     9,    65,    37,     6,    -1,    -1,    26,     8,    96,
      13,    86,    -1,    26,     8,    96,    13,    -1,    30,    36,
      68,    37,    38,    86,    39,    -1,    30,    36,    65,    37,
      38,    86,    39,    -1,    23,    72,    -1,    17,    36,    68,
      37,    72,    -1,    17,    36,    68,    37,    68,    13,    -1,
      21,    36,    91,    37,    72,    -1,    21,    36,    91,    37,
      68,    13,    -1,    68,     6,    68,     6,    68,    -1,     6,
      68,     6,    68,    -1,    68,     6,     6,    68,    -1,    68,
       6,     6,    -1,     6,    68,     6,    -1,     6,     6,    68,
      -1,     6,     6,    -1,    35,    36,    12,     9,    16,    37,
       6,    -1,    35,    36,    65,    37,     6,    -1,    66,    16,
      -1,    66,    15,    -1,    66,    11,    -1,    66,    10,    -1,
      24,    36,    31,    37,    -1,    24,    36,    31,    37,    93,
      -1,    89,    -1,    88,    -1,    87,    -1,    81,     6,    -1,
      94,     6,    -1,    82,     6,    -1,    68,     6,    -1,    80,
       6,    -1,    79,     6,    -1,    74,    -1,    72,    -1,    73,
       6,    -1,    78,    -1,    95,    -1,    83,    -1,    84,    -1,
      85,    -1,    76,    -1,    92,    -1,    13,    -1,     3,    -1,
       1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    92,    99,   100,   101,   102,   103,   104,
     105,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   124,   125,   126,   131,   132,   133,   134,
     135,   140,   141,   142,   146,   147,   152,   155,   158,   159,
     163,   167,   168,   169,   170,   173,   174,   175,   176,   179,
     180,   185,   186,   191,   192,   193,   194,   195,   196,   201,
     205,   206,   207,   211,   212,   215,   216,   219,   220,   223,
     224,   227,   228,   231,   232,   236,   239,   240,   244,   245,
     249,   250,   251,   252,   253,   254,   255,   258,   259,   264,
     265,   266,   267,   272,   273,   278,   279,   280,   285,   286,
     287,   288,   289,   290,   291,   292,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOP", "UNKNOWN", "DOT", "SEMI", "HASH",
  "COLON", "COMMA", "FLOAT", "DOUBLE", "STR", "NEWLINE", "KEYWORD", "INT",
  "IDENTIFIER", "KEYWORD_IF", "AMPER", "EXCLA", "KEYWORD_RET",
  "KEYWORD_FOR", "KEYWORD_STR", "KEYWORD_ELSE", "KEYWORD_SIZE",
  "KEYWORD_CONT", "KEYWORD_CASE", "KEYWORD_INCL", "KEYWORD_FUNC",
  "KEYWORD_VOID", "KEYWORD_SWITCH", "KEYWORD_VAR_TYPE", "KEYWORD_SCAN",
  "KEYWORD_LEN", "KEYWORD_CMP", "KEYWORD_PRINT", "PAR_START", "PAR_END",
  "BRACE_START", "BRACE_END", "LOGICAL_OR", "LOGICAL_AND", "BRACKET_START",
  "BRACKET_END", "GREATER", "LESSER", "GREATER_EQ", "LESSER_EQ", "EQQ",
  "EQ", "NEQ", "EQ_MULTI", "EQ_DIV", "EQ_PLUS", "EQ_MINUS", "PLUS",
  "PLUSPLUS", "MINUS", "MINUSMINUS", "DIV", "MOD", "MULTI", "POW",
  "$accept", "program", "expr_part", "operator", "in_de_crement_operator",
  "expr_proc", "body", "elements", "in_brack", "in_brace", "struct",
  "loops", "arguments", "arr", "arr_help", "func_par", "declaration",
  "assignment", "return", "include", "scan", "len", "cmp", "cases",
  "case_grammar", "else_grammar", "if_grammar", "for_grammar", "for_args",
  "print", "half_expr", "sizeof", "conditionals", "valid", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    71,    72,    73,    73,
      74,    75,    75,    75,    75,    76,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    94,    94,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     5,     3,     3,     2,
       2,     2,     1,     0,     3,     1,     3,     3,     3,     4,
       1,     1,     3,     1,     0,     4,     4,     4,     5,     1,
       3,     5,     5,     2,     4,     5,     7,     3,     4,     3,
       2,     3,     0,     7,     3,     5,     0,     5,     0,     7,
       0,     5,     4,     7,     7,     2,     5,     6,     5,     6,
       5,     4,     4,     3,     3,     3,     2,     7,     5,     2,
       2,     2,     2,     4,     5,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,   116,   115,    10,     0,     4,     6,     5,
     114,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      24,    23,     0,     0,   105,     0,   104,   112,   107,     0,
       0,     0,     0,   109,   110,   111,    97,    96,    95,    40,
     113,     0,   108,     2,     0,     0,     0,     0,    60,     9,
       0,     0,     0,    75,     0,     0,     0,    53,     0,     0,
       0,     0,     0,    32,    49,     0,    12,    11,    13,    21,
      19,    20,    22,    16,    17,    14,    18,    15,     0,    29,
      30,   101,   106,   103,   102,    98,   100,    99,    64,     0,
       0,    59,     0,    61,     0,     0,     0,     0,    38,     0,
      44,     0,     0,     0,     0,    57,     0,     0,     0,     5,
       0,    37,    31,     0,     0,    23,    28,     0,     0,     0,
      86,     0,     0,     0,    39,    93,    43,     0,     0,     0,
       0,    35,     0,    54,    58,     0,     0,     0,     0,     0,
       0,    50,    45,    11,     0,    48,     0,    76,    85,    84,
      83,     0,     0,    78,     0,    94,     0,    52,    51,     0,
       0,     0,    36,     0,    55,    65,    67,     0,     0,    88,
      26,     0,    77,    81,    82,     0,    79,    92,    91,    90,
      89,    42,     0,     0,     0,    34,     0,     0,     0,    63,
      80,     0,    74,    73,    56,    69,    87,     0,    72,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    31,    88,    32,    33,    72,   142,   115,    34,
      35,    36,   138,    37,    75,    38,    39,    40,    41,    42,
      43,    44,    45,   193,    46,    47,    48,    49,   106,    50,
     165,    51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
    -167,   165,  -167,  -167,  -167,  -167,    -1,  -167,  -167,  -167,
    -167,  -167,  -167,   -17,   -23,   198,    -9,    12,    -8,     2,
      28,    11,    32,    23,    26,    31,    35,   221,   254,  -167,
    -167,   393,   254,    66,  -167,    67,  -167,  -167,  -167,    71,
      76,    81,    82,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,    87,  -167,  -167,    -2,    65,   382,   382,  -167,  -167,
      89,     5,    -5,  -167,    70,    61,   382,     4,   254,   254,
     254,   418,   277,  -167,    93,    55,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   382,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,    88,
      60,  -167,    84,  -167,    25,   102,    85,    -8,  -167,    86,
     103,   362,    90,   254,   134,    62,    91,    92,   115,   116,
      96,  -167,  -167,   254,   120,   408,  -167,   125,   129,    54,
     382,   130,   314,    54,  -167,   423,  -167,    14,   100,   104,
     105,   131,    98,  -167,  -167,   369,   141,   145,   254,   137,
     148,  -167,  -167,   254,   139,  -167,   143,  -167,  -167,   382,
     382,   154,   149,  -167,    74,  -167,   254,  -167,  -167,   135,
     135,   254,  -167,   254,  -167,  -167,  -167,   126,   127,  -167,
    -167,   123,  -167,  -167,  -167,   382,  -167,  -167,  -167,  -167,
    -167,  -167,   162,   144,   152,  -167,   155,   167,   178,  -167,
    -167,   333,  -167,  -167,  -167,  -167,  -167,   188,   135,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,   -14,    80,   -25,   -54,  -167,  -149,  -167,   -13,
    -167,  -167,  -167,  -167,    39,  -167,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -166,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,    97,  -167,   -27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      73,    60,   101,   102,   194,    63,    89,   105,   107,     5,
      98,   104,   112,    57,    74,     7,     8,     9,    90,    11,
      12,    59,   195,   166,   196,    55,    54,    61,    62,     5,
      27,   130,    56,    27,   126,     7,     8,     9,    64,    11,
      12,    59,   209,    99,    65,   122,   113,    66,    67,   108,
     131,   167,   111,   114,   116,   117,   118,   120,     5,    68,
     143,    29,    69,    30,     7,     8,     9,    70,    11,    12,
      59,    71,    91,    92,   125,   156,   158,    93,   161,   162,
     100,    29,    94,    30,   187,   188,    89,    95,    96,   189,
     190,   174,    27,    97,   134,   103,   137,   110,   124,   141,
      89,   109,   123,   128,   127,   183,   184,     5,   132,   151,
      29,   145,    30,     7,     8,     9,   157,    11,    12,    59,
     163,   129,   133,   135,   148,   149,   152,   140,   146,   147,
     154,   200,   136,   150,   177,   155,   159,   168,     5,   180,
     171,   172,   169,   170,     7,     8,     9,   175,    11,    12,
      59,   176,    74,   178,   179,   181,   182,   141,    19,   141,
     185,   192,   186,   197,   198,     2,     3,   199,     4,     5,
     201,   -62,     6,   205,   207,     7,     8,     9,    10,    11,
      12,    13,    14,   202,   206,    15,    16,    17,    18,    19,
      29,   203,    30,    20,   204,    21,    22,    23,    24,    25,
      26,   208,     5,    27,    58,   191,     0,    28,     7,     8,
       9,   144,    11,    12,    59,   164,     0,     0,     0,     0,
       0,    29,     3,    30,     4,     5,     0,   -33,     6,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,    15,    16,    17,    18,    19,     0,     0,     0,    20,
       0,    21,    22,    23,    24,    25,    26,     0,     5,    27,
     -33,     0,     0,    28,     7,     8,     9,     0,    11,    12,
      59,     0,     0,     0,     0,     0,     0,    29,     3,    30,
       4,     5,     0,   -62,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,    15,    16,    17,
      18,    19,     0,     0,     0,    20,     0,    21,    22,    23,
      24,    25,    26,     0,     0,    27,   121,     0,     5,    28,
     160,     0,     0,     0,     7,     8,     9,     0,    11,    12,
      59,     0,     0,    29,     3,    30,     4,     5,     0,   -62,
       6,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,    15,    16,    17,    18,    19,     0,     0,
       0,    20,     0,    21,    22,    23,    24,    25,    26,     0,
      29,    27,    30,     5,     0,    28,     0,     0,     0,     7,
       8,     9,     0,    11,    12,    59,     5,     0,     0,    29,
       0,    30,     7,     8,     9,     0,    11,    12,    59,   139,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    29,    84,
      30,    85,     5,    86,    87,    29,     0,    30,     7,     8,
     119,     0,    11,    12,    59,     0,     0,     0,    29,     0,
      30,    76,    77,    78,    79,    80,    81,    82,    83,    29,
      84,    30,    85,     0,    86,    87,    76,   153,    78,    79,
      80,    81,    82,    83,    29,    84,    30,    85,     0,    86,
      87,    76,    77,    78,    79,    80,    81,    82,    83,     0,
      84,     0,    85,     0,    86,    87
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-167)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      27,    15,    56,    57,   170,    18,    31,    61,    13,     4,
      12,     6,    66,    36,    28,    10,    11,    12,    32,    14,
      15,    16,   171,     9,   173,    42,    27,    36,    16,     4,
      38,     6,    49,    38,    88,    10,    11,    12,    36,    14,
      15,    16,   208,    45,    16,    72,    42,    36,    16,    62,
     104,    37,    66,    49,    68,    69,    70,    71,     4,    36,
     114,    56,    36,    58,    10,    11,    12,    36,    14,    15,
      16,    36,     6,     6,    88,   129,   130,     6,   132,   133,
      15,    56,     6,    58,    10,    11,   111,     6,     6,    15,
      16,   145,    38,     6,   107,     6,   110,    36,    43,   113,
     125,    31,     9,    43,    16,   159,   160,     4,     6,   123,
      56,    49,    58,    10,    11,    12,   129,    14,    15,    16,
     133,    37,    37,    37,     9,     9,     6,    37,    37,    37,
       5,   185,    29,    37,   148,     6,     6,    37,     4,   153,
       9,    43,    38,    38,    10,    11,    12,     6,    14,    15,
      16,     6,   166,    16,     6,    16,    13,   171,    24,   173,
       6,    26,    13,    37,    37,     0,     1,    44,     3,     4,
       8,     6,     7,     6,   201,    10,    11,    12,    13,    14,
      15,    16,    17,    39,     6,    20,    21,    22,    23,    24,
      56,    39,    58,    28,    39,    30,    31,    32,    33,    34,
      35,    13,     4,    38,     6,   166,    -1,    42,    10,    11,
      12,   114,    14,    15,    16,   135,    -1,    -1,    -1,    -1,
      -1,    56,     1,    58,     3,     4,    -1,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,     4,    38,
      39,    -1,    -1,    42,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    56,     1,    58,
       3,     4,    -1,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,     4,    42,
       6,    -1,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    56,     1,    58,     3,     4,    -1,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      56,    38,    58,     4,    -1,    42,    -1,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    16,     4,    -1,    -1,    56,
      -1,    58,    10,    11,    12,    -1,    14,    15,    16,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     4,    61,    62,    56,    -1,    58,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    56,    -1,
      58,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    59,    -1,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,     0,     1,     3,     4,     7,    10,    11,    12,
      13,    14,    15,    16,    17,    20,    21,    22,    23,    24,
      28,    30,    31,    32,    33,    34,    35,    38,    42,    56,
      58,    65,    67,    68,    72,    73,    74,    76,    78,    79,
      80,    81,    82,    83,    84,    85,    87,    88,    89,    90,
      92,    94,    95,    96,    27,    42,    49,    36,     6,    16,
      65,    36,    16,    72,    36,    16,    36,    16,    36,    36,
      36,    36,    69,    96,    65,    77,    48,    49,    50,    51,
      52,    53,    54,    55,    57,    59,    61,    62,    66,    67,
      65,     6,     6,     6,     6,     6,     6,     6,    12,    45,
      15,    68,    68,     6,     6,    68,    91,    13,    72,    31,
      36,    65,    68,    42,    49,    71,    65,    65,    65,    12,
      65,    39,    96,     9,    43,    65,    68,    16,    43,    37,
       6,    68,     6,    37,    72,    37,    29,    65,    75,    37,
      37,    65,    70,    68,    94,    49,    37,    37,     9,     9,
      37,    65,     6,    49,     5,     6,    68,    72,    68,     6,
       6,    68,    68,    72,    66,    93,     9,    37,    37,    38,
      38,     9,    43,    38,    68,     6,     6,    65,    16,     6,
      65,    16,    13,    68,    68,     6,    13,    10,    11,    15,
      16,    77,    26,    86,    86,    70,    70,    37,    37,    44,
      68,     8,    39,    39,    39,     6,     6,    96,    13,    86
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 10:
/* Line 1792 of yacc.c  */
#line 105 "bison.y"
    { printf("(X) \tLine:  %d \t",line); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 185 "bison.y"
    {ce++; yytrue("arguments"); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 186 "bison.y"
    {ce++; yytrue("argument"); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 285 "bison.y"
    { ce++; yytrue("return");}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 286 "bison.y"
    { ce++; yytrue("sizeof");}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 287 "bison.y"
    { ce++; yytrue("include");}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 288 "bison.y"
    { ce++; yytrue("expression");}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 289 "bison.y"
    { ce++; yytrue("assignment");}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 290 "bison.y"
    { ce++; yytrue("declaration");}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 291 "bison.y"
    { ce++; yytrue("loop clause");}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 292 "bison.y"
    { ce++;
                        if( function_started_flag)
                        {
                            function_started_flag=0;
                            if (line == function_start_line)
                            {
                               printf("Line:  %d \tFunction is correct.\n",function_start_line);
                            } else if (line >= function_start_line) {
                               printf("Lines: %d-%d\tFunction is correct.\n",function_start_line, line);
                            }
                        } else {
                            function_started_flag=1;
                            function_start_line=line;
                        }
                      }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 307 "bison.y"
    { ce++; yytrue("struct");}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 308 "bison.y"
    { ce++; yytrue("function declaration");}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 309 "bison.y"
    { ce++; yytrue("conditional clause");  }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 310 "bison.y"
    { ce++; yytrue("scan");  }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 311 "bison.y"
    { ce++; yytrue("len");  }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 312 "bison.y"
    { ce++; yytrue("cmp");  }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 313 "bison.y"
    { ce++; yytrue("array"); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 314 "bison.y"
    { ce++; yytrue("print statement"); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 315 "bison.y"
    { line++; }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 316 "bison.y"
    { exp_report(ce,ie); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 317 "bison.y"
    { ie++;}
    break;


/* Line 1792 of yacc.c  */
#line 1818 "bison.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 320 "bison.y"




/* Αυτή η συνάρτηση ενεργοποιείται όταν ο bison δεχτεί token EOP 
και τυπώνει το πλήθος των σωστών και λάθος λέξεων και εκφράσεων*/

// (End of Parse, στο τέλος του αρχείου)
void exp_report (int ce,int ie) {
    printf("\n===================\n"
        "\nThe program counted (%d) expressions,\nOf which (%d) were correct,\nAnd (%d) were incorrect.\n",ce+ie,ce,ie);
}

void yytrue (char * type) 
{
    printf("Line:%d \tCorrect %s\n"    ,line, type);
}

void yyerror(char *s) 
{
    fprintf(stderr, "(X)\tOn Line:%d \tError: %s\n",line, s);
}

//Αναγκαίες εντολές για την εκτέλεση debugging στον Bison
#ifdef YYDEBUG
  int yydebug = 1;
#endif


   /*Η συνάρτηση main, που σηματοδοτεί την εκκίνηση του προγράμματος.
   Εδώ απλά καλεί την συνάρτηση yyparse του Bison και ξεκινάει η συντακτική
   ανάλυση*/
int main(int argc, char* argv[]) 
{
    FILE *fp = NULL;
    if(argc<2)
    {
        printf("No arguments found, defaulting to input.txt...\n");
        fp = fopen("input.txt","r");
    }
    if(argc>1)
        fp = fopen(argv[1],"r");
    yyin = fp;
    printf("\nBeginning analysis:\n");
    yyparse();
    fclose(fp);
}