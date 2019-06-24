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
     T_EOF = 258,
     ID = 259,
     NUM_INT = 260,
     NUM_REAL = 261,
     ABRE_PAR = 262,
     FECHA_PAR = 263,
     PT = 264,
     VIR = 265,
     DOIS_PTS = 266,
     PT_VIR = 267,
     ATRIB = 268,
     IGUAL = 269,
     DIF = 270,
     MAIOR_IGUAL = 271,
     MENOR_IGUAL = 272,
     MAIOR = 273,
     MENOR = 274,
     MAIS = 275,
     MENOS = 276,
     MULT = 277,
     DIV = 278,
     PROGRAM = 279,
     CONST = 280,
     VAR = 281,
     REAL = 282,
     INT = 283,
     PROCEDURE = 284,
     T_BEGIN = 285,
     T_END = 286,
     READ = 287,
     WRITE = 288,
     WHILE = 289,
     DO = 290,
     FOR = 291,
     TO = 292,
     IF = 293,
     THEN = 294,
     ELSE = 295
   };
#endif
/* Tokens.  */
#define T_EOF 258
#define ID 259
#define NUM_INT 260
#define NUM_REAL 261
#define ABRE_PAR 262
#define FECHA_PAR 263
#define PT 264
#define VIR 265
#define DOIS_PTS 266
#define PT_VIR 267
#define ATRIB 268
#define IGUAL 269
#define DIF 270
#define MAIOR_IGUAL 271
#define MENOR_IGUAL 272
#define MAIOR 273
#define MENOR 274
#define MAIS 275
#define MENOS 276
#define MULT 277
#define DIV 278
#define PROGRAM 279
#define CONST 280
#define VAR 281
#define REAL 282
#define INT 283
#define PROCEDURE 284
#define T_BEGIN 285
#define T_END 286
#define READ 287
#define WRITE 288
#define WHILE 289
#define DO 290
#define FOR 291
#define TO 292
#define IF 293
#define THEN 294
#define ELSE 295




/* Copy the first part of user declarations.  */
#line 1 "lalg.y"

    #include <iostream>

    extern int yylex();
    extern int yyerror(const char *str);
    
    using namespace std;
    
    extern char *yytext;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 197 "y.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    12,    13,    19,    22,    23,
      28,    31,    32,    38,    41,    42,    47,    51,    54,    55,
      60,    62,    64,    69,    73,    75,    79,    82,    83,    87,
      88,    95,    99,   102,   105,   108,   111,   113,   115,   118,
     119,   125,   130,   132,   134,   136,   138,   140,   143,   144,
     148,   149,   152,   155,   156,   161,   162,   168,   171,   172,
     176,   177,   181,   185,   190,   191,   194,   199,   200,   206,
     210,   213,   216,   218,   220,   222,   223,   227,   231,   234,
     235,   239,   240,   243,   244,   247,   248,   252,   253,   258,
     259,   264,   269,   274,   281,   287,   291,   294,   298,   299,
     306,   307,   315,   319,   321,   323,   325,   327,   329,   331,
     333,   336,   337,   339,   341,   342,   346,   348,   350,   354,
     355,   359,   361,   363,   365,   367,   370,   372,   375,   378,
     380,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    24,    46,    -1,    -1,     1,     4,    43,
      49,    -1,    -1,     1,    12,    44,    52,    51,    -1,     1,
       9,    -1,    -1,     1,    45,    52,    51,    -1,     4,    49,
      -1,    -1,     1,    12,    47,    52,    51,    -1,     1,     9,
      -1,    -1,     1,    48,    52,    51,    -1,    12,    52,    51,
      -1,     1,     9,    -1,    -1,     1,    50,    52,    51,    -1,
       9,    -1,     1,    -1,    54,    30,    86,    53,    -1,    54,
       1,    31,    -1,    31,    -1,    55,    61,    68,    -1,    56,
      55,    -1,    -1,    25,     4,    58,    -1,    -1,    25,     1,
      14,    57,   103,    60,    -1,    25,     1,    12,    -1,    14,
      59,    -1,     1,    12,    -1,   103,    60,    -1,     1,    12,
      -1,    12,    -1,     1,    -1,    62,    61,    -1,    -1,    26,
      65,    11,    64,    63,    -1,    26,    65,     1,    12,    -1,
      12,    -1,     1,    -1,    27,    -1,    28,    -1,     1,    -1,
       4,    67,    -1,    -1,     1,    66,    67,    -1,    -1,    10,
      65,    -1,    69,    68,    -1,    -1,    29,     4,    73,    71,
      -1,    -1,    29,     1,    12,    70,    76,    -1,    12,    76,
      -1,    -1,     1,    72,    76,    -1,    -1,     7,    74,     8,
      -1,     7,    74,     1,    -1,    65,    11,    64,    75,    -1,
      -1,    12,    74,    -1,    80,    30,    86,    78,    -1,    -1,
      80,     1,    31,    77,    79,    -1,    80,     1,    12,    -1,
      31,    79,    -1,     1,    12,    -1,    12,    -1,     1,    -1,
      61,    -1,    -1,     7,    82,     8,    -1,     7,    82,     1,
      -1,     4,    84,    -1,    -1,     1,    83,    84,    -1,    -1,
      12,    82,    -1,    -1,    40,    89,    -1,    -1,    89,    12,
      86,    -1,    -1,    89,     1,    87,    86,    -1,    -1,     1,
      12,    88,    86,    -1,    32,     7,    65,     8,    -1,    33,
       7,    65,     8,    -1,    34,     7,    92,     8,    35,    89,
      -1,    38,    92,    39,    89,    85,    -1,     4,    13,    94,
      -1,     4,    81,    -1,    30,    86,    31,    -1,    -1,    38,
      92,     1,    90,    89,    85,    -1,    -1,    34,     7,    92,
       8,     1,    91,    89,    -1,    94,    93,    94,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,     1,    -1,    98,    96,    -1,    -1,    20,    -1,    21,
      -1,    -1,    97,    98,    96,    -1,    20,    -1,    21,    -1,
      95,   101,    99,    -1,    -1,   100,   101,    99,    -1,    22,
      -1,    23,    -1,     4,    -1,   103,    -1,     7,   102,    -1,
       1,    -1,    94,     8,    -1,    94,     1,    -1,     5,    -1,
       6,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    40,    41,    41,    42,    43,    43,
      46,    47,    47,    48,    49,    49,    52,    53,    54,    54,
      57,    58,    64,    65,    68,    74,    80,    81,    84,    85,
      85,    86,    89,    90,    93,    94,    97,    98,   104,   105,
     108,   109,   112,   113,   119,   120,   121,   128,   129,   129,
     132,   133,   140,   141,   144,   145,   145,   148,   149,   149,
     155,   156,   157,   160,   163,   164,   170,   171,   171,   172,
     175,   176,   179,   180,   186,   192,   193,   194,   200,   201,
     201,   207,   208,   214,   215,   221,   222,   223,   223,   224,
     224,   230,   231,   232,   233,   234,   235,   236,   238,   238,
     239,   239,   246,   252,   253,   254,   255,   256,   257,   258,
     264,   270,   271,   272,   278,   279,   285,   286,   292,   298,
     299,   306,   307,   313,   314,   315,   316,   319,   320,   326,
     327,   328
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_EOF", "ID", "NUM_INT", "NUM_REAL",
  "ABRE_PAR", "FECHA_PAR", "PT", "VIR", "DOIS_PTS", "PT_VIR", "ATRIB",
  "IGUAL", "DIF", "MAIOR_IGUAL", "MENOR_IGUAL", "MAIOR", "MENOR", "MAIS",
  "MENOS", "MULT", "DIV", "PROGRAM", "CONST", "VAR", "REAL", "INT",
  "PROCEDURE", "T_BEGIN", "T_END", "READ", "WRITE", "WHILE", "DO", "FOR",
  "TO", "IF", "THEN", "ELSE", "$accept", "programa", "@1", "@2", "@3",
  "programa_0", "@4", "@5", "programa_1", "@6", "programa_2", "corpo",
  "corpo_0", "dc", "dc_c", "dc_c_0", "@7", "dc_c_1", "dc_c_2", "dc_c_3",
  "dc_v", "dc_v_0", "dc_v_1", "tipo_var", "variaveis", "@8", "mais_var",
  "dc_p", "dc_p_0", "@9", "dc_p_1", "@10", "parametros", "lista_par",
  "mais_par", "corpo_p", "@11", "corpo_p_0", "corpo_p_1", "dc_loc",
  "lista_arg", "argumentos", "@12", "mais_ident", "pfalsa", "comandos",
  "@13", "@14", "cmd", "@15", "@16", "condicao", "relacao", "expressao",
  "op_un", "outros_termos", "op_ad", "termo", "mais_fatores", "op_mul",
  "fator", "fator_0", "numero", 0
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    42,    44,    42,    42,    45,    42,
      46,    47,    46,    46,    48,    46,    49,    49,    50,    49,
      51,    51,    52,    52,    53,    54,    55,    55,    56,    57,
      56,    56,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    66,    65,
      67,    67,    68,    68,    69,    70,    69,    71,    72,    71,
      73,    73,    73,    74,    75,    75,    76,    77,    76,    76,
      78,    78,    79,    79,    80,    81,    81,    81,    82,    83,
      82,    84,    84,    85,    85,    86,    86,    87,    86,    88,
      86,    89,    89,    89,    89,    89,    89,    89,    90,    89,
      91,    89,    92,    93,    93,    93,    93,    93,    93,    93,
      94,    95,    95,    95,    96,    96,    97,    97,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   102,   103,
     103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     5,     2,     0,     4,
       2,     0,     5,     2,     0,     4,     3,     2,     0,     4,
       1,     1,     4,     3,     1,     3,     2,     0,     3,     0,
       6,     3,     2,     2,     2,     2,     1,     1,     2,     0,
       5,     4,     1,     1,     1,     1,     1,     2,     0,     3,
       0,     2,     2,     0,     4,     0,     5,     2,     0,     3,
       0,     3,     3,     4,     0,     2,     4,     0,     5,     3,
       2,     2,     1,     1,     1,     0,     3,     3,     2,     0,
       3,     0,     2,     0,     2,     0,     3,     0,     4,     0,
       4,     4,     4,     6,     5,     3,     2,     3,     0,     6,
       0,     7,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     1,     0,     3,     1,     1,     3,     0,
       3,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     3,     7,     5,    27,    14,     0,
       2,     1,     0,    27,     0,     0,     0,    39,    27,    13,
      11,    27,    18,    27,    10,     4,     0,     0,     0,    21,
      20,     9,     0,     0,     0,    53,    39,    26,    27,     0,
      17,    27,     0,     6,    31,    29,     0,     0,    28,    23,
       0,    75,     0,     0,     0,     0,   111,     0,     0,    48,
      50,     0,     0,    25,    53,    38,     0,    15,     0,    16,
       0,    33,   131,   129,   130,    32,     0,    89,     0,   111,
      96,     0,     0,     0,   111,   112,   113,     0,     0,     0,
     114,    24,    22,    87,     0,    50,     0,    47,     0,     0,
       0,    60,    52,    12,    19,   131,     0,    35,    37,    36,
      34,     0,    79,    81,     0,    95,    97,     0,     0,     0,
      98,     0,   109,   103,   104,   105,   106,   107,   108,   111,
     126,   123,   111,   119,   124,   116,   117,   110,   111,     0,
      86,    49,    51,    41,    46,    44,    45,     0,    55,     0,
       0,    30,    90,    81,     0,    78,    77,    76,    91,    92,
       0,     0,    83,   102,     0,   125,   121,   122,   118,     0,
     114,    88,    43,    42,    40,    39,     0,     0,    58,    39,
      54,    80,    82,   100,     0,    83,     0,    94,   128,   127,
     119,   115,    74,    56,     0,     0,    62,    61,    39,    57,
       0,    93,    99,    84,   120,     0,     0,    64,    59,   101,
      69,    67,     0,     0,    63,     0,     0,     0,    66,    65,
      73,    72,    68,    71,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    12,    13,     7,    10,    38,    21,    24,    41,
      31,    15,    92,    16,    17,    18,    70,    48,    75,   110,
     192,    36,   174,   147,   176,    95,    97,    63,    64,   175,
     180,   198,   150,   177,   214,   193,   215,   218,   222,   194,
      80,   114,   153,   155,   187,    57,   139,   111,    58,   161,
     200,    87,   129,    88,    89,   137,   138,    90,   168,   169,
     133,   165,   134
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
       7,    72,   100,    20,  -167,  -167,  -167,    58,   107,    16,
    -167,  -167,    16,    58,   119,    14,    23,   101,    58,  -167,
    -167,    58,   124,    58,  -167,  -167,    14,   116,    13,  -167,
    -167,  -167,   103,     5,   120,   106,   101,  -167,    58,    14,
    -167,    58,    14,  -167,  -167,  -167,   126,    57,  -167,  -167,
     127,     9,     5,   129,   130,   133,    82,   110,    55,  -167,
     132,    49,   121,  -167,   106,  -167,    14,  -167,    14,  -167,
     112,  -167,   131,  -167,  -167,  -167,    67,  -167,   125,    82,
    -167,   113,   120,   120,    82,  -167,  -167,     1,    76,   105,
      94,  -167,  -167,  -167,     5,   132,   120,  -167,   134,     6,
     135,   138,  -167,  -167,  -167,  -167,    67,  -167,  -167,  -167,
    -167,     5,  -167,   136,    74,  -167,  -167,   141,   142,   143,
    -167,    40,  -167,  -167,  -167,  -167,  -167,  -167,  -167,    82,
    -167,  -167,    82,   109,  -167,  -167,  -167,  -167,    82,     5,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,    84,  -167,   120,
      87,  -167,  -167,   136,   125,  -167,  -167,  -167,  -167,  -167,
      11,    40,   115,  -167,    97,  -167,  -167,  -167,  -167,   105,
      94,  -167,  -167,  -167,  -167,   101,   145,    99,  -167,   101,
    -167,  -167,  -167,  -167,    40,   115,    40,  -167,  -167,  -167,
     109,  -167,  -167,  -167,    25,     6,  -167,  -167,   101,  -167,
      40,  -167,  -167,  -167,  -167,    -2,     5,   140,  -167,  -167,
    -167,  -167,    18,   120,  -167,    96,   146,    96,  -167,  -167,
    -167,  -167,  -167,  -167,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   147,  -167,
     -21,    48,  -167,  -167,   139,  -167,  -167,  -167,  -167,    47,
      -6,  -167,  -167,   -35,   -31,  -167,    66,    98,  -167,  -167,
    -167,  -167,  -167,   -50,  -167,  -166,  -167,  -167,   -53,  -167,
    -167,    12,  -167,    15,   -20,   -52,  -167,  -167,  -120,  -167,
    -167,    83,  -167,   -75,  -167,    -1,  -167,    32,   -19,  -167,
       3,  -167,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      81,   162,   120,    61,   115,    43,    50,   144,     1,    51,
     210,    35,   183,   199,    46,    29,    78,    22,    67,   216,
      11,    69,    79,    30,    32,    76,   205,    47,    23,   211,
      65,     2,   208,   145,   146,    52,   -85,    53,    54,    55,
     121,   185,   140,    56,    51,   103,   184,   104,   106,   217,
      98,   117,   118,    33,   163,   206,    93,   164,    72,   152,
      99,    26,    73,    74,   201,   142,   203,    94,   108,    39,
      52,    42,    53,    54,    55,   156,     4,   122,    56,   109,
     209,     5,   157,    14,     6,   172,    66,   171,   178,    68,
     123,   124,   125,   126,   127,   128,   173,   220,   188,   179,
     196,     8,    85,    86,     9,   189,   130,   197,   221,   131,
      73,    74,   132,   105,   135,   136,    19,    73,    74,    20,
      27,    59,   100,    28,    60,   101,   112,    34,    44,   113,
      45,   166,   167,    40,    49,    62,    82,    83,    71,    77,
      84,    91,    96,   107,   116,   149,   143,   148,   154,   158,
     159,   160,   213,   151,   212,   186,   195,    37,   223,    25,
     207,   141,   102,   219,   224,   202,   182,   119,   181,   191,
     170,   204,   190
};

static const yytype_uint8 yycheck[] =
{
      52,   121,     1,    34,    79,    26,     1,     1,     1,     4,
      12,    17,     1,   179,     1,     1,     7,     1,    39,     1,
       0,    42,    13,     9,     1,    47,     1,    14,    12,    31,
      36,    24,   198,    27,    28,    30,    31,    32,    33,    34,
      39,   161,    94,    38,     4,    66,    35,    68,    70,    31,
       1,    82,    83,    30,   129,    30,     1,   132,     1,   111,
      11,    13,     5,     6,   184,    96,   186,    12,     1,    21,
      30,    23,    32,    33,    34,     1,     4,     1,    38,    12,
     200,     9,     8,    25,    12,     1,    38,   139,     1,    41,
      14,    15,    16,    17,    18,    19,    12,     1,     1,    12,
       1,     1,    20,    21,     4,     8,     1,     8,    12,     4,
       5,     6,     7,     1,    20,    21,     9,     5,     6,    12,
       1,     1,     1,     4,     4,     4,     1,    26,    12,     4,
      14,    22,    23,     9,    31,    29,     7,     7,    12,    12,
       7,    31,    10,    12,    31,     7,    12,    12,    12,     8,
       8,     8,    12,   106,   206,    40,    11,    18,    12,    12,
     195,    95,    64,   213,   217,   185,   154,    84,   153,   170,
     138,   190,   169
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    24,    42,     4,     9,    12,    45,     1,     4,
      46,     0,    43,    44,    25,    52,    54,    55,    56,     9,
      12,    48,     1,    12,    49,    49,    52,     1,     4,     1,
       9,    51,     1,    30,    26,    61,    62,    55,    47,    52,
       9,    50,    52,    51,    12,    14,     1,    14,    58,    31,
       1,     4,    30,    32,    33,    34,    38,    86,    89,     1,
       4,    65,    29,    68,    69,    61,    52,    51,    52,    51,
      57,    12,     1,     5,     6,    59,   103,    12,     7,    13,
      81,    86,     7,     7,     7,    20,    21,    92,    94,    95,
      98,    31,    53,     1,    12,    66,    10,    67,     1,    11,
       1,     4,    68,    51,    51,     1,   103,    12,     1,    12,
      60,    88,     1,     4,    82,    94,    31,    65,    65,    92,
       1,    39,     1,    14,    15,    16,    17,    18,    19,    93,
       1,     4,     7,   101,   103,    20,    21,    96,    97,    87,
      86,    67,    65,    12,     1,    27,    28,    64,    12,     7,
      73,    60,    86,    83,    12,    84,     1,     8,     8,     8,
       8,    90,    89,    94,    94,   102,    22,    23,    99,   100,
      98,    86,     1,    12,    63,    70,    65,    74,     1,    12,
      71,    84,    82,     1,    35,    89,    40,    85,     1,     8,
     101,    96,    61,    76,    80,    11,     1,     8,    72,    76,
      91,    89,    85,    89,    99,     1,    30,    64,    76,    89,
      12,    31,    86,    12,    75,    77,     1,    31,    78,    74,
       1,    12,    79,    12,    79
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
#line 39 "lalg.y"
    { cout << "SINTAX programa\n"; }
    break;

  case 3:
#line 40 "lalg.y"
    { yyerror("program"); }
    break;

  case 5:
#line 41 "lalg.y"
    { yyerror("program"); }
    break;

  case 7:
#line 42 "lalg.y"
    { yyerror("program"); }
    break;

  case 8:
#line 43 "lalg.y"
    { yyerror("program"); }
    break;

  case 11:
#line 47 "lalg.y"
    { yyerror("ID"); }
    break;

  case 13:
#line 48 "lalg.y"
    { yyerror("ID"); }
    break;

  case 14:
#line 49 "lalg.y"
    { yyerror("id"); }
    break;

  case 17:
#line 53 "lalg.y"
    { yyerror(";"); }
    break;

  case 18:
#line 54 "lalg.y"
    { yyerror(";"); }
    break;

  case 21:
#line 58 "lalg.y"
    { yyerror("."); }
    break;

  case 22:
#line 64 "lalg.y"
    { cout << "SINTAX corpo\n"; }
    break;

  case 23:
#line 65 "lalg.y"
    { yyerror("begin"); }
    break;

  case 25:
#line 74 "lalg.y"
    { cout << "SINTAX dc\n"; }
    break;

  case 26:
#line 80 "lalg.y"
    { cout << "SINTAX DC_C\n"; }
    break;

  case 27:
#line 81 "lalg.y"
    { cout << "SINTAX DC_C\n"; }
    break;

  case 29:
#line 85 "lalg.y"
    { yyerror("ID"); }
    break;

  case 31:
#line 86 "lalg.y"
    { yyerror("ID"); }
    break;

  case 33:
#line 90 "lalg.y"
    { yyerror("="); }
    break;

  case 35:
#line 94 "lalg.y"
    { yyerror(";"); }
    break;

  case 37:
#line 98 "lalg.y"
    { yyerror(";"); }
    break;

  case 38:
#line 104 "lalg.y"
    {cout << "SINTAX dc_v\n"; }
    break;

  case 39:
#line 105 "lalg.y"
    {cout << "SINTAX dc_v\n"; }
    break;

  case 41:
#line 109 "lalg.y"
    { yyerror(":"); }
    break;

  case 43:
#line 113 "lalg.y"
    { yyerror(";"); }
    break;

  case 44:
#line 119 "lalg.y"
    { cout << "SINTAX tipo_var\n"; }
    break;

  case 45:
#line 120 "lalg.y"
    { cout << "SINTAX tipo_var\n"; }
    break;

  case 46:
#line 121 "lalg.y"
    { yyerror("tipo de dado (integer ou real)"); }
    break;

  case 47:
#line 128 "lalg.y"
    { cout << "SINTAX variaveis\n"; }
    break;

  case 48:
#line 129 "lalg.y"
    { yyerror("id"); }
    break;

  case 50:
#line 132 "lalg.y"
    { cout << "SINTAX mais_var\n"; }
    break;

  case 51:
#line 133 "lalg.y"
    { cout << "SINTAX mais_var\n"; }
    break;

  case 52:
#line 140 "lalg.y"
    { cout << "SINTAX dc_p\n"; }
    break;

  case 53:
#line 141 "lalg.y"
    { cout << "SINTAX dc_p\n"; }
    break;

  case 55:
#line 145 "lalg.y"
    { yyerror("id"); }
    break;

  case 58:
#line 149 "lalg.y"
    { yyerror(";"); }
    break;

  case 60:
#line 155 "lalg.y"
    { cout << "SINTAX parametros\n"; }
    break;

  case 61:
#line 156 "lalg.y"
    { cout << "SINTAX parametros\n"; }
    break;

  case 62:
#line 157 "lalg.y"
    { /*yyclearin;*/ yyerror(")"); }
    break;

  case 63:
#line 160 "lalg.y"
    { cout << "SINTAX lista_par\n"; }
    break;

  case 64:
#line 163 "lalg.y"
    { cout << "SINTAX mais_par\n"; }
    break;

  case 65:
#line 164 "lalg.y"
    { cout << "SINTAX mais_par\n"; }
    break;

  case 66:
#line 170 "lalg.y"
    { cout << "SINTAX corpo_p\n"; }
    break;

  case 67:
#line 171 "lalg.y"
    { yyerror("begin"); }
    break;

  case 69:
#line 172 "lalg.y"
    { yyerror("begin"); }
    break;

  case 71:
#line 176 "lalg.y"
    { yyerror("end"); }
    break;

  case 73:
#line 180 "lalg.y"
    { yyerror(";"); }
    break;

  case 74:
#line 186 "lalg.y"
    { cout << "SINTAX dc_loc\n"; }
    break;

  case 75:
#line 192 "lalg.y"
    { cout << "SINTAX lista_arg\n"; }
    break;

  case 76:
#line 193 "lalg.y"
    { cout << "SINTAX lista_arg\n"; }
    break;

  case 77:
#line 194 "lalg.y"
    { yyerror(")"); }
    break;

  case 78:
#line 200 "lalg.y"
    { cout << "SINTAX argumentos\n"; }
    break;

  case 79:
#line 201 "lalg.y"
    { yyerror("ID"); }
    break;

  case 81:
#line 207 "lalg.y"
    { cout << "SINTAX mais_ident\n"; }
    break;

  case 82:
#line 208 "lalg.y"
    { cout << "SINTAX mais_ident\n"; }
    break;

  case 83:
#line 214 "lalg.y"
    { cout << "SINTAX pfalsa\n"; }
    break;

  case 84:
#line 215 "lalg.y"
    { cout << "SINTAX pfalsa\n"; }
    break;

  case 85:
#line 221 "lalg.y"
    { cout << "SINTAX comandos\n"; }
    break;

  case 86:
#line 222 "lalg.y"
    { cout << "SINTAX comandos\n"; }
    break;

  case 87:
#line 223 "lalg.y"
    { /**/; yyerror(";"); }
    break;

  case 89:
#line 224 "lalg.y"
    { yyerror("cmd"); }
    break;

  case 91:
#line 230 "lalg.y"
    { cout << "SINTAX cmd - read\n"; }
    break;

  case 92:
#line 231 "lalg.y"
    { cout << "SINTAX cmd - write\n"; }
    break;

  case 93:
#line 232 "lalg.y"
    { cout << "SINTAX cmd - while\n"; }
    break;

  case 94:
#line 233 "lalg.y"
    { cout << "SINTAX cmd - if\n"; }
    break;

  case 95:
#line 234 "lalg.y"
    { cout << "SINTAX cmd - atrib\n"; }
    break;

  case 96:
#line 235 "lalg.y"
    { cout << "SINTAX cmd - procedure\n"; }
    break;

  case 97:
#line 236 "lalg.y"
    { cout << "SINTAX cmd - begin/end\n"; }
    break;

  case 98:
#line 238 "lalg.y"
    { yyerror("then"); }
    break;

  case 100:
#line 239 "lalg.y"
    { yyerror("do"); }
    break;

  case 102:
#line 246 "lalg.y"
    { cout << "SINTAX condicao\n"; }
    break;

  case 103:
#line 252 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 104:
#line 253 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 105:
#line 254 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 106:
#line 255 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 107:
#line 256 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 108:
#line 257 "lalg.y"
    { cout << "SINTAX relacao\n"; }
    break;

  case 109:
#line 258 "lalg.y"
    { yyerror("operador relacional(=, <>, >=, <=, >, <)"); }
    break;

  case 110:
#line 264 "lalg.y"
    { cout << "SINTAX expressao\n"; }
    break;

  case 111:
#line 270 "lalg.y"
    { cout << "SINTAX op_un\n"; }
    break;

  case 112:
#line 271 "lalg.y"
    { cout << "SINTAX op_un\n"; }
    break;

  case 113:
#line 272 "lalg.y"
    { cout << "SINTAX op_un\n"; }
    break;

  case 114:
#line 278 "lalg.y"
    { cout << "SINTAX outros_termos\n"; }
    break;

  case 115:
#line 279 "lalg.y"
    { cout << "SINTAX outros_termos\n"; }
    break;

  case 116:
#line 285 "lalg.y"
    { cout << "SINTAX op_ad\n"; }
    break;

  case 117:
#line 286 "lalg.y"
    { cout << "SINTAX op_ad\n"; }
    break;

  case 118:
#line 292 "lalg.y"
    { cout << "SINTAX termo\n"; }
    break;

  case 119:
#line 298 "lalg.y"
    { cout << "SINTAX mais_fatores\n"; }
    break;

  case 120:
#line 299 "lalg.y"
    { cout << "SINTAX mais_fatores\n"; }
    break;

  case 121:
#line 306 "lalg.y"
    { cout << "SINTAX op_mul\n"; }
    break;

  case 122:
#line 307 "lalg.y"
    { cout << "SINTAX op_mul\n"; }
    break;

  case 123:
#line 313 "lalg.y"
    { cout << "SINTAX fator\n"; }
    break;

  case 124:
#line 314 "lalg.y"
    { cout << "SINTAX fator\n"; }
    break;

  case 125:
#line 315 "lalg.y"
    { cout << "SINTAX fator\n"; }
    break;

  case 126:
#line 316 "lalg.y"
    { yyerror("id, numero ou (expressão)"); }
    break;

  case 128:
#line 320 "lalg.y"
    { yyerror(")"); }
    break;

  case 129:
#line 326 "lalg.y"
    { cout << "SINTAX numero\n"; }
    break;

  case 130:
#line 327 "lalg.y"
    { cout << "SINTAX numero\n"; }
    break;

  case 131:
#line 328 "lalg.y"
    { yyerror("numero real ou inteiro"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2094 "y.tab.c"
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


#line 330 "lalg.y"


extern int yyparse();

bool error = false;

int main()
{    
    yyparse();
    if (!error)
        printf("SUCCESS :D\n");
}

int yywrap(){
    return 1;
}

int yyerror(const char *str){
    // TODO: DO NOT SHOW WHEN str == "syntax error"
    cout << "Era esperado " << str << ", encontrado: " << yytext << endl; 
    error = true;
    return 1;
}

