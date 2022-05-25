/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* _SCALAR_LEFT = "<scalar_decl>";
char* _SCALAR_RIGHT = "</scalar_decl>";
char* _ARRAY_LEFT = "<array_decl>";
char* _ARRAY_RIGHT = "</array_decl>";
char* _FUNC_DECL_LEFT = "<func_decl>";
char* _FUNC_DECL_RIGHT = "</func_decl>";
char* _FUNCT_DEF_LEFT = "<func_def>";
char* _FUNCT_DEF_RIGHT = "</func_def>";
char* _EXPR_LEFT = "<expr>";
char* _EXPR_RIGHT = "</expr>";
char* _STMT_LEFT = "<stmt>";
char* _STMT_RIGHT = "</stmt>";
//it convert an int to string
char* intToString(int x) {
    int y = x;
    int l = 1;
    while (y > 9) {
        y /= 10;
        l += 1;
    }
    char* t = malloc(sizeof(char) * l);
    sprintf(t, "%d", x);
    return t;
}
char* doubleToString(double x) {
    char* s = malloc(sizeof(char) * 30);
    sprintf(s, "%f", x);
    return s;
}
char* reserveStr(){
    char* s = malloc(sizeof(char)*5000); strcpy(s,"");
    return s;
}

#line 106 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    MYCHAR = 259,
    MYSTRING = 260,
    MYNULL = 261,
    DOUBLE = 262,
    INTTYPE = 263,
    CHARTYPE = 264,
    STRINGTYPE = 265,
    DOUBLETYPE = 266,
    FLOATTYPE = 267,
    CONSTTYPE = 268,
    SIGNEDTYPE = 269,
    UNSIGNEDTYPE = 270,
    LONGLONGTYPE = 271,
    LONGTYPE = 272,
    SHORTTYPE = 273,
    VOIDTYPE = 274,
    RETURN = 275,
    BREAK = 276,
    CONTINUE = 277,
    FOR = 278,
    WHILE = 279,
    DO = 280,
    SWITCH = 281,
    CASE = 282,
    DEFAULT = 283,
    IF = 284,
    ELSE = 285,
    IDENT = 286,
    ASSIGN = 287,
    LOGICALOR = 288,
    LOGICALAND = 289,
    BITWISEOR = 290,
    XOR = 291,
    EQ = 292,
    NOTEQ = 293,
    BIGOREQ = 294,
    SMALLOREQ = 295,
    BIG = 296,
    SMALL = 297,
    SHIFTLEFT = 298,
    SHIFTRIGHT = 299,
    SLASH = 300,
    MOD = 301,
    ADD = 302,
    MINUS = 303,
    TILDA = 304,
    EXCLAMATION = 305,
    BITWISEAND = 306,
    MULSTAR = 307,
    ADDONE = 308,
    MINUSONE = 309,
    COMMA = 310,
    EOL = 311,
    LSQUAREBRACKET = 312,
    RSQUAREBRACKET = 313,
    LBRACE = 314,
    RBRACE = 315,
    LPARENTHESIS = 316,
    RPARENTHESIS = 317,
    COLON = 318,
    TURNEDLEFT = 319,
    TURNEDRIGHT = 320,
    NOASSOCIATIVE = 321
  };
#endif
/* Tokens.  */
#define INT 258
#define MYCHAR 259
#define MYSTRING 260
#define MYNULL 261
#define DOUBLE 262
#define INTTYPE 263
#define CHARTYPE 264
#define STRINGTYPE 265
#define DOUBLETYPE 266
#define FLOATTYPE 267
#define CONSTTYPE 268
#define SIGNEDTYPE 269
#define UNSIGNEDTYPE 270
#define LONGLONGTYPE 271
#define LONGTYPE 272
#define SHORTTYPE 273
#define VOIDTYPE 274
#define RETURN 275
#define BREAK 276
#define CONTINUE 277
#define FOR 278
#define WHILE 279
#define DO 280
#define SWITCH 281
#define CASE 282
#define DEFAULT 283
#define IF 284
#define ELSE 285
#define IDENT 286
#define ASSIGN 287
#define LOGICALOR 288
#define LOGICALAND 289
#define BITWISEOR 290
#define XOR 291
#define EQ 292
#define NOTEQ 293
#define BIGOREQ 294
#define SMALLOREQ 295
#define BIG 296
#define SMALL 297
#define SHIFTLEFT 298
#define SHIFTRIGHT 299
#define SLASH 300
#define MOD 301
#define ADD 302
#define MINUS 303
#define TILDA 304
#define EXCLAMATION 305
#define BITWISEAND 306
#define MULSTAR 307
#define ADDONE 308
#define MINUSONE 309
#define COMMA 310
#define EOL 311
#define LSQUAREBRACKET 312
#define RSQUAREBRACKET 313
#define LBRACE 314
#define RBRACE 315
#define LPARENTHESIS 316
#define RPARENTHESIS 317
#define COLON 318
#define TURNEDLEFT 319
#define TURNEDRIGHT 320
#define NOASSOCIATIVE 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "parser.y" /* yacc.c:355  */
 
    int iVal;
    double dVal;
    char* sVal;

#line 281 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 298 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   123,   124,   125,   125,   126,   135,
     135,   136,   136,   137,   138,   138,   139,   139,   139,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     155,   164,   173,   173,   174,   180,   181,   181,   182,   188,
     189,   189,   190,   190,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   235,   236,   236,
     237,   238,   239,   240,   241,   242,   273,   283,   295,   299,
     300,   300,   301,   302,   303,   313,   326,   327,   327,   328,
     328,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   352,   352,   353,   360,   371,   381,
     385,   386,   387,   388,   388,   392,   393,   393
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "MYCHAR", "MYSTRING", "MYNULL",
  "DOUBLE", "INTTYPE", "CHARTYPE", "STRINGTYPE", "DOUBLETYPE", "FLOATTYPE",
  "CONSTTYPE", "SIGNEDTYPE", "UNSIGNEDTYPE", "LONGLONGTYPE", "LONGTYPE",
  "SHORTTYPE", "VOIDTYPE", "RETURN", "BREAK", "CONTINUE", "FOR", "WHILE",
  "DO", "SWITCH", "CASE", "DEFAULT", "IF", "ELSE", "IDENT", "ASSIGN",
  "LOGICALOR", "LOGICALAND", "BITWISEOR", "XOR", "EQ", "NOTEQ", "BIGOREQ",
  "SMALLOREQ", "BIG", "SMALL", "SHIFTLEFT", "SHIFTRIGHT", "SLASH", "MOD",
  "ADD", "MINUS", "TILDA", "EXCLAMATION", "BITWISEAND", "MULSTAR",
  "ADDONE", "MINUSONE", "COMMA", "EOL", "LSQUAREBRACKET", "RSQUAREBRACKET",
  "LBRACE", "RBRACE", "LPARENTHESIS", "RPARENTHESIS", "COLON",
  "TURNEDLEFT", "TURNEDRIGHT", "NOASSOCIATIVE", "$accept", "startHere",
  "top", "scalarDeclare", "identList", "ident", "id", "giveScalar", "type",
  "type1", "type2", "type3", "type4", "mayHaveConst", "mayHaveSign",
  "mayLongOrShort", "arrayDeclare", "array", "arrayList",
  "lrSquareBracketList", "giveArray", "arrayContent", "itemList", "item",
  "expr", "contiExpr", "exprList", "identOrArray", "element",
  "functionDeclare", "parameters", "parameterList", "parameter",
  "functionDefinition", "compoundStmt", "stmtOrVarDeclares",
  "stmtOrVarDeclare", "stmt", "returnBreakContinueStmt", "forStmt",
  "mayHaveExpr", "whileStmt", "switchStmt", "switchCluses", "switchClue",
  "stmts", "ifOrIfElseStmt", "mayHaveElse", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -213

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-213)))

#define YYTABLE_NINF -119

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,   -15,    44,  -213,    93,    49,  -213,  -213,  -213,  -213,
     102,    93,    93,    93,  -213,  -213,    13,    45,    33,  -213,
      47,  -213,  -213,   -14,   -11,  -213,   119,  -213,  -213,  -213,
     235,   235,    15,  -213,   -26,  -213,    56,    48,    72,    62,
    -213,   112,   118,   126,   131,    86,    88,    89,    90,    91,
      68,   235,   235,   235,   235,    79,   580,  -213,   105,   452,
      59,   106,   124,    15,   135,   154,    33,  -213,   134,    47,
    -213,  -213,   235,   235,  -213,  -213,  -213,  -213,  -213,   183,
     130,   297,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,     8,     8,  -213,
    -213,     8,     8,  -213,  -213,   235,   136,  -213,   163,   -49,
     194,  -213,   146,  -213,  -213,   479,   556,   147,   148,   235,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
     160,   191,  -213,  -213,   152,  -213,   124,    82,   136,   235,
    -213,  -213,   235,  -213,  -213,   166,  -213,    92,   176,   177,
     182,   184,   195,   189,   190,  -213,    60,  -213,   506,  -213,
     192,   152,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,   556,  -213,   224,  -213,  -213,   531,  -213,  -213,
     235,   235,   229,   235,   235,   -24,  -213,  -213,  -213,  -213,
    -213,   202,   580,  -213,   580,   203,   328,   197,   359,   390,
     224,   200,   235,   195,   235,   204,   205,   202,  -213,   206,
    -213,   421,    -9,   231,  -213,   235,   209,   235,   207,   208,
      -9,   205,  -213,   210,  -213,   265,   195,  -213,  -213,  -213,
     195,   195,   195,  -213,  -213,  -213,  -213
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      32,    31,     0,     2,    32,     0,    16,    17,    18,    19,
      35,    32,    32,    32,     1,     3,    15,     0,    10,    12,
      43,    28,    27,    33,    34,    29,    39,     4,     5,     6,
       0,     0,    32,    13,    15,    11,     0,     0,     0,     0,
      24,    21,    22,    23,     0,    55,    57,    58,    59,    56,
      45,     0,     0,     0,     0,    32,    14,    54,     0,     0,
       0,     0,   111,    32,    15,     0,    10,     8,     0,    43,
      40,    20,     0,    97,   100,    94,    95,    88,    89,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    80,    81,    97,    45,   112,     0,     0,
      32,   108,     0,     9,    42,     0,    99,     0,     0,     0,
      60,    79,    77,    78,    75,    74,    72,    73,    69,    71,
      68,    70,    66,    67,    64,    65,    61,    62,    76,    63,
       0,    47,   113,   106,    32,   114,   111,     0,    45,     0,
      96,    93,     0,    90,    92,    49,    41,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   121,     0,   128,
       0,    32,   119,   127,   126,   125,   124,   123,   110,   107,
     115,    44,    99,    91,    49,    46,   130,     0,   131,   132,
     135,     0,     0,     0,     0,    15,   122,   116,   117,    98,
      53,    51,    52,   129,   134,     0,     0,     0,     0,     0,
      49,     0,   135,     0,     0,     0,     0,    51,    48,     0,
     136,     0,   140,   147,    50,   135,     0,     0,     0,     0,
     140,     0,   145,     0,   137,     0,   144,   138,   139,   146,
       0,   144,   144,   142,   133,   141,   143
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,   158,  -139,   201,   233,    14,  -213,   -29,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,   -71,   236,   211,  -102,
    -213,   116,    64,    63,   -30,   174,   100,  -213,  -213,  -213,
     221,   144,   181,  -213,  -107,   121,  -213,  -135,  -213,  -213,
    -118,  -213,  -213,    65,  -213,  -212,  -213,  -213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    37,    18,    19,    33,     5,     6,
       7,     8,     9,    10,    26,    44,    11,    20,    39,    74,
     156,   200,   211,   201,   168,   117,   150,    57,    58,    12,
      61,   111,    62,    13,   169,   170,   171,   242,   173,   174,
     205,   175,   176,   229,   230,   243,   177,   232
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    59,   145,    60,   141,   165,    30,   143,    30,   172,
     144,    45,    46,    47,    48,    49,   -30,   -25,   227,   228,
     -26,    75,    76,    77,    78,    81,    80,   192,     1,   245,
     246,    35,   165,    31,    60,    63,   172,   -30,   -25,    50,
     180,   -26,   115,   116,    14,    30,   181,   -30,   -25,    76,
     118,   -26,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    55,
      31,   138,   139,   167,    32,   116,    34,  -109,   220,    35,
      16,    60,    45,    46,    47,    48,    49,    64,    36,   153,
     107,   195,     1,    -7,   219,    45,    46,    47,    48,    49,
     167,    17,    38,    68,    67,   244,     1,   233,    65,   223,
      50,   108,    65,    21,    22,   166,    23,    24,    70,   182,
     -36,    25,   183,    50,   239,    72,   -37,   187,    40,    73,
      51,    79,    53,    54,   -38,    41,    42,    43,   179,    71,
      55,   144,   166,    51,    52,    53,    54,  -101,   186,  -103,
    -104,  -105,  -102,    55,   202,    45,    46,    47,    48,    49,
     204,   206,    15,   208,   209,     1,   105,    30,   109,    27,
      28,    29,   157,   158,   159,   160,   161,   162,   163,   110,
     202,   164,   204,    50,   221,    64,    45,    46,    47,    48,
      49,    31,   119,    72,   142,   204,     1,   235,    45,    46,
      47,    48,    49,    51,    52,    53,    54,     1,   147,   151,
     152,   144,  -118,    55,    50,   157,   158,   159,   160,   161,
     162,   163,   154,   155,   164,   184,    50,    45,    46,    47,
      48,    49,   188,   189,    51,    52,    53,    54,    45,    46,
      47,    48,    49,   190,    55,   191,    51,    52,    53,    54,
     193,   194,   197,   207,   144,    50,    55,   210,   214,   212,
     218,   231,   225,   222,   144,   234,    50,   113,   237,    66,
     236,   185,   240,   217,    69,    51,    52,    53,    54,   140,
     114,   224,   199,   184,   112,    55,    51,    52,    53,    54,
     178,   146,   198,     0,     0,   238,    55,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   241,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,     0,     0,   120,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
     213,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,   215,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,   216,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,   226,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
     106,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,   148,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,   196,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     0,   203,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   149,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104
};

static const yytype_int16 yycheck[] =
{
      30,    31,   109,    32,   106,   144,    32,    56,    32,   144,
      59,     3,     4,     5,     6,     7,    31,    31,    27,    28,
      31,    51,    52,    53,    54,    55,    55,   162,    13,   241,
     242,    17,   171,    57,    63,    61,   171,    52,    52,    31,
     147,    52,    72,    73,     0,    32,   148,    62,    62,    79,
      79,    62,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    61,
      57,   101,   102,   144,    61,   105,    31,    62,   213,    65,
      31,   110,     3,     4,     5,     6,     7,    31,    55,   119,
      31,    31,    13,     0,   212,     3,     4,     5,     6,     7,
     171,    52,    55,    31,    56,   240,    13,   225,    52,   216,
      31,    52,    52,    11,    12,   144,    14,    15,    56,   149,
       8,    19,   152,    31,   231,    57,     8,   157,     9,    61,
      51,    52,    53,    54,     8,    16,    17,    18,    56,     8,
      61,    59,   171,    51,    52,    53,    54,    61,    56,    61,
      61,    61,    61,    61,   184,     3,     4,     5,     6,     7,
     190,   191,     4,   193,   194,    13,    61,    32,    62,    11,
      12,    13,    20,    21,    22,    23,    24,    25,    26,    55,
     210,    29,   212,    31,   214,    31,     3,     4,     5,     6,
       7,    57,    62,    57,    31,   225,    13,   227,     3,     4,
       5,     6,     7,    51,    52,    53,    54,    13,    62,    62,
      62,    59,    60,    61,    31,    20,    21,    22,    23,    24,
      25,    26,    62,    32,    29,    59,    31,     3,     4,     5,
       6,     7,    56,    56,    51,    52,    53,    54,     3,     4,
       5,     6,     7,    61,    61,    61,    51,    52,    53,    54,
      61,    61,    60,    24,    59,    31,    61,    55,    61,    56,
      60,    30,    56,    59,    59,    56,    31,    66,    60,    36,
      63,   155,    62,   210,    38,    51,    52,    53,    54,   105,
      69,   217,   182,    59,    63,    61,    51,    52,    53,    54,
     146,   110,   171,    -1,    -1,   230,    61,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      58,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    58,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    68,    69,    70,    75,    76,    77,    78,    79,
      80,    83,    96,   100,     0,    69,    31,    52,    72,    73,
      84,    11,    12,    14,    15,    19,    81,    69,    69,    69,
      32,    57,    61,    74,    31,    73,    55,    71,    55,    85,
       9,    16,    17,    18,    82,     3,     4,     5,     6,     7,
      31,    51,    52,    53,    54,    61,    91,    94,    95,    91,
      75,    97,    99,    61,    31,    52,    72,    56,    31,    84,
      56,     8,    57,    61,    86,    91,    91,    91,    91,    52,
      75,    91,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    61,    58,    31,    52,    62,
      55,    98,    97,    71,    85,    91,    91,    92,    75,    62,
      62,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    86,    31,    56,    59,   101,    99,    62,    58,    55,
      93,    62,    62,    91,    62,    32,    87,    20,    21,    22,
      23,    24,    25,    26,    29,    70,    75,    83,    91,   101,
     102,   103,   104,   105,   106,   108,   109,   113,    98,    56,
     101,    86,    91,    91,    59,    88,    56,    91,    56,    56,
      61,    61,   104,    61,    61,    31,    56,    60,   102,    93,
      88,    90,    91,    56,    91,   107,    91,    24,    91,    91,
      55,    89,    56,    62,    61,    62,    62,    90,    60,   107,
     104,    91,    59,   101,    89,    56,    62,    27,    28,   110,
     111,    30,   114,   107,    56,    91,    63,    60,   110,   101,
      62,    63,   104,   112,   104,   112,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    73,    74,    74,    75,    75,    75,    75,
      76,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    93,
      94,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   102,   102,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   105,   106,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   112,   112,   113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     0,     4,     3,
       0,     2,     1,     2,     2,     0,     1,     1,     1,     1,
       4,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     0,
       4,     6,     3,     0,     4,     0,     2,     0,     4,     0,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     5,     4,     4,     2,     2,     2,     0,     3,     0,
       2,     1,     1,     1,     1,     1,     6,     7,     2,     0,
       3,     0,     2,     3,     6,     7,     3,     2,     0,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     2,     9,     1,     0,     5,     7,     7,     2,
       0,     4,     3,     2,     0,     6,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].sVal));}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 122 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 123 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 124 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 125 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_SCALAR_LEFT);
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_SCALAR_RIGHT);
    (yyval.sVal)=s;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 135 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 136 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s; }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 143 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 145 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 146 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 147 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[0].sVal));  (yyval.sVal)=s;}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_ARRAY_LEFT);
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_ARRAY_RIGHT);
    (yyval.sVal)=s;}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 173 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 182 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 189 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 192 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,intToString((yyvsp[0].iVal)));    strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 194 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,doubleToString((yyvsp[0].dVal))); strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 195 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 196 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,"0");                strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 202 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 203 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 204 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 205 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 206 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 208 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 209 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 210 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 211 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 212 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 213 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 214 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 215 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 216 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 217 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 221 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 222 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 223 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 224 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 225 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 226 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 227 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 228 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 229 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 230 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-4].sVal)); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 231 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 232 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,_EXPR_RIGHT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 233 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 234 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 235 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 236 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 237 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 238 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,intToString((yyvsp[0].iVal)));    strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 239 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,doubleToString((yyvsp[0].dVal))); strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 240 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 241 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 242 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,"0");                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 273 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_FUNC_DECL_RIGHT);
    (yyval.sVal)=s;}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 283 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,(yyvsp[-6].sVal)); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal));
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_FUNC_DECL_RIGHT);
    (yyval.sVal)=s;}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 295 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 300 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 301 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 302 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 303 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal));
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_FUNCT_DEF_RIGHT);
    (yyval.sVal)=s;}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 313 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,(yyvsp[-6].sVal)); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal));
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_FUNCT_DEF_RIGHT);
    (yyval.sVal)=s;}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 326 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 327 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 327 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 329 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 330 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 331 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 332 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 333 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 334 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 335 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 336 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 337 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 338 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 339 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 340 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-8].sVal)); 
    strcat(s,(yyvsp[-7].sVal)); 
    strcat(s,(yyvsp[-6].sVal)); 
    strcat(s,(yyvsp[-5].sVal));
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 353 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 360 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-6].sVal)); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal));
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;
    }
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 371 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-6].sVal)); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal));
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 381 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 385 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 386 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-3].sVal));strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 387 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 388 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 388 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 392 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-5].sVal));strcat(s,(yyvsp[-4].sVal));strcat(s,(yyvsp[-3].sVal));strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 393 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 393 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2640 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 394 "parser.y" /* yacc.c:1906  */

int yylex();
int main(void) {
    yyparse();
    return 0;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
    return 0;
}
