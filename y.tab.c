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
    NOASSOCIATIVE = 321,
    PREC14_LEFT = 322,
    PREC14_NON = 323,
    PREC14_RIGHT = 324,
    PREC13_LEFT = 325,
    PREC13_NON = 326,
    PREC13_RIGHT = 327,
    PREC12_LEFT = 328,
    PREC12_NON = 329,
    PREC12_RIGHT = 330,
    PREC11_LEFT = 331,
    PREC11_NON = 332,
    PREC11_RIGHT = 333,
    PREC10_LEFT = 334,
    PREC10_NON = 335,
    PREC10_RIGHT = 336,
    PREC09_LEFT = 337,
    PREC09_NON = 338,
    PREC09_RIGHT = 339,
    PREC08_LEFT = 340,
    PREC08_NON = 341,
    PREC08_RIGHT = 342,
    PREC07_LEFT = 343,
    PREC07_NON = 344,
    PREC07_RIGHT = 345,
    PREC06_LEFT = 346,
    PREC06_NON = 347,
    PREC06_RIGHT = 348,
    PREC05_LEFT = 349,
    PREC05_NON = 350,
    PREC05_RIGHT = 351,
    PREC04_LEFT = 352,
    PREC04_NON = 353,
    PREC04_RIGHT = 354,
    PREC03_LEFT = 355,
    PREC03_NON = 356,
    PREC03_RIGHT = 357,
    PREC02_LEFT = 358,
    PREC02_NON = 359,
    PREC02_RIGHT = 360,
    PREC01_LEFT = 361,
    PREC01_NON = 362,
    PREC01_RIGHT = 363,
    PREC00_LEFT = 364,
    PREC00_NON = 365,
    PREC00_RIGHT = 366
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
#define PREC14_LEFT 322
#define PREC14_NON 323
#define PREC14_RIGHT 324
#define PREC13_LEFT 325
#define PREC13_NON 326
#define PREC13_RIGHT 327
#define PREC12_LEFT 328
#define PREC12_NON 329
#define PREC12_RIGHT 330
#define PREC11_LEFT 331
#define PREC11_NON 332
#define PREC11_RIGHT 333
#define PREC10_LEFT 334
#define PREC10_NON 335
#define PREC10_RIGHT 336
#define PREC09_LEFT 337
#define PREC09_NON 338
#define PREC09_RIGHT 339
#define PREC08_LEFT 340
#define PREC08_NON 341
#define PREC08_RIGHT 342
#define PREC07_LEFT 343
#define PREC07_NON 344
#define PREC07_RIGHT 345
#define PREC06_LEFT 346
#define PREC06_NON 347
#define PREC06_RIGHT 348
#define PREC05_LEFT 349
#define PREC05_NON 350
#define PREC05_RIGHT 351
#define PREC04_LEFT 352
#define PREC04_NON 353
#define PREC04_RIGHT 354
#define PREC03_LEFT 355
#define PREC03_NON 356
#define PREC03_RIGHT 357
#define PREC02_LEFT 358
#define PREC02_NON 359
#define PREC02_RIGHT 360
#define PREC01_LEFT 361
#define PREC01_NON 362
#define PREC01_RIGHT 363
#define PREC00_LEFT 364
#define PREC00_NON 365
#define PREC00_RIGHT 366

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "parser.y" /* yacc.c:355  */
 
    int iVal;
    double dVal;
    char* sVal;

#line 371 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 388 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   765

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   184,   185,   186,   187,   187,   188,   197,
     197,   198,   198,   199,   200,   200,   201,   201,   201,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   213,   214,   214,   214,   215,   215,   215,   215,
     217,   226,   235,   235,   236,   242,   243,   243,   244,   250,
     251,   251,   252,   252,   254,   255,   256,   257,   258,   259,
     260,   262,   263,   264,   265,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   278,   279,   280,   282,   283,
     285,   286,   288,   289,   290,   291,   293,   294,   296,   298,
     300,   302,   304,   306,   308,   308,   309,   309,   310,   311,
     312,   313,   314,   315,   317,   327,   339,   343,   344,   344,
     345,   346,   347,   357,   370,   371,   371,   372,   372,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   396,   396,   397,   404,   415,   425,   429,   430,
     431,   432,   432,   436,   437,   437
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
  "TURNEDLEFT", "TURNEDRIGHT", "NOASSOCIATIVE", "PREC14_LEFT",
  "PREC14_NON", "PREC14_RIGHT", "PREC13_LEFT", "PREC13_NON",
  "PREC13_RIGHT", "PREC12_LEFT", "PREC12_NON", "PREC12_RIGHT",
  "PREC11_LEFT", "PREC11_NON", "PREC11_RIGHT", "PREC10_LEFT", "PREC10_NON",
  "PREC10_RIGHT", "PREC09_LEFT", "PREC09_NON", "PREC09_RIGHT",
  "PREC08_LEFT", "PREC08_NON", "PREC08_RIGHT", "PREC07_LEFT", "PREC07_NON",
  "PREC07_RIGHT", "PREC06_LEFT", "PREC06_NON", "PREC06_RIGHT",
  "PREC05_LEFT", "PREC05_NON", "PREC05_RIGHT", "PREC04_LEFT", "PREC04_NON",
  "PREC04_RIGHT", "PREC03_LEFT", "PREC03_NON", "PREC03_RIGHT",
  "PREC02_LEFT", "PREC02_NON", "PREC02_RIGHT", "PREC01_LEFT", "PREC01_NON",
  "PREC01_RIGHT", "PREC00_LEFT", "PREC00_NON", "PREC00_RIGHT", "$accept",
  "startHere", "top", "scalarDeclare", "identList", "ident", "id",
  "giveScalar", "type", "type1", "type2", "type3", "type4", "mayHaveConst",
  "mayHaveSign", "mayLongOrShort", "arrayDeclare", "array", "arrayList",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};
# endif

#define YYPACT_NINF -157

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-157)))

#define YYTABLE_NINF -117

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,   -19,     9,  -157,    85,   -15,  -157,  -157,  -157,  -157,
     115,    85,    85,    85,  -157,  -157,   -22,   -12,    -2,  -157,
      31,  -157,  -157,   -18,    28,  -157,    90,  -157,  -157,  -157,
     366,   366,    -8,  -157,   -25,  -157,     0,    33,    62,    38,
    -157,    88,    89,    92,    94,    52,    54,    55,    56,    61,
      -6,   366,   366,   366,   366,   366,   366,   366,   366,   246,
     711,  -157,    70,   583,    51,    50,    59,    -8,    91,   101,
      -2,  -157,    78,    31,  -157,  -157,   366,   366,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,   277,    74,   428,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,  -157,
    -157,   366,    80,  -157,   108,   -48,   125,  -157,    79,  -157,
    -157,   610,   687,    81,    82,   366,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,    83,   110,  -157,  -157,
     158,  -157,    59,   -39,    80,   366,  -157,  -157,   366,  -157,
    -157,    87,  -157,   306,    84,    93,    86,    95,   217,    96,
      97,  -157,    53,  -157,   637,  -157,    99,   158,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   687,  -157,
     337,  -157,  -157,   662,  -157,  -157,   366,   366,   126,   366,
     366,    47,  -157,  -157,  -157,  -157,  -157,    98,   711,  -157,
     711,   112,   459,   111,   490,   521,   337,   113,   366,   217,
     366,   116,   117,    98,  -157,   118,  -157,   552,    22,   121,
    -157,   366,   129,   366,   114,   131,    22,   117,  -157,   130,
    -157,   396,   217,  -157,  -157,  -157,   217,   217,   217,  -157,
    -157,  -157,  -157
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
      45,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      14,    54,     0,     0,     0,     0,   109,    32,    15,     0,
      10,     8,     0,    43,    40,    20,     0,    95,    98,    69,
      70,    67,    68,    65,    66,    71,    72,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    95,    45,   110,     0,     0,    32,   106,     0,     9,
      42,     0,    97,     0,     0,     0,    60,    93,    92,    91,
      90,    89,    86,    87,    83,    85,    82,    84,    80,    81,
      76,    77,    78,    79,    88,    75,     0,    47,   111,   104,
      32,   112,   109,     0,    45,     0,    94,    64,     0,    74,
      63,    49,    41,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,   119,     0,   126,     0,    32,   117,   125,
     124,   123,   122,   121,   108,   105,   113,    44,    97,    73,
      49,    46,   128,     0,   129,   130,   133,     0,     0,     0,
       0,    15,   120,   114,   115,    96,    53,    51,    52,   127,
     132,     0,     0,     0,     0,     0,    49,     0,   133,     0,
       0,     0,     0,    51,    48,     0,   134,     0,   138,   145,
      50,   133,     0,     0,     0,     0,   138,     0,   143,     0,
     135,     0,   142,   136,   137,   144,     0,   142,   142,   140,
     131,   139,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   107,  -135,   123,   119,   -13,  -157,   -29,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -132,   156,   122,  -106,
    -157,    -9,   -69,   -20,   -30,   102,    10,  -157,  -157,  -157,
     132,    45,   100,  -157,  -113,    23,  -157,  -136,  -157,  -157,
    -130,  -157,  -157,   -34,  -157,  -156,  -157,  -157
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    37,    18,    19,    33,     5,     6,
       7,     8,     9,    10,    26,    44,    11,    20,    39,    78,
     162,   206,   217,   207,   174,   123,   156,    61,    62,    12,
      65,   117,    66,    13,   175,   176,   177,   248,   179,   180,
     211,   181,   182,   235,   236,   249,   183,   238
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    63,   151,    64,    35,     1,   147,    30,   149,    14,
      30,   150,   -30,   -25,   178,   171,    16,   185,   173,    34,
     150,    79,    80,    81,    82,    83,    84,    85,    86,    89,
      88,    68,   198,   -30,   -25,    31,    67,    17,    64,    32,
     186,   178,   171,   -30,   -25,   173,   121,   122,   187,   233,
     234,    76,    69,    36,  -107,    77,    35,    84,   124,   -26,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    30,
     -26,   122,   113,   226,   201,    -7,    38,    64,   225,    71,
     -26,   251,   252,    72,    74,   159,   -36,   -37,     1,    40,
     -38,   239,    75,   114,    31,    69,    41,    42,    43,   229,
     250,    15,   115,   -99,   116,  -101,  -102,  -103,    27,    28,
      29,   172,  -100,    30,   245,   188,    21,    22,   189,    23,
      24,   111,    68,   193,    25,    31,   125,    76,     1,   148,
     194,   153,   161,   157,   158,   160,   190,   196,   172,   195,
     213,   237,   191,   216,   230,    70,   197,   199,   200,   203,
     208,    45,    46,    47,    48,    49,   210,   212,   218,   214,
     215,     1,   220,   224,   231,   228,   150,   242,   163,   164,
     165,   166,   167,   168,   169,   240,   208,   170,   210,    50,
     227,   243,   246,   119,    73,   120,   223,   184,   205,   118,
     204,   210,   244,   241,     0,    51,    52,    53,    54,    55,
      56,    57,    58,   146,     0,     0,   152,   150,  -116,    59,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,   168,   169,     0,     0,   170,     0,    50,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,   150,    50,    59,     0,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       1,     0,     0,    51,    52,    53,    54,    55,    87,    57,
      58,     0,     0,     0,     0,     0,     0,    59,    50,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,    50,    59,     0,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
      58,     0,   192,     0,     0,     0,     0,    59,    50,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,   190,    50,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,    59,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,   247,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,   107,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
     126,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,   219,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,   221,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,   222,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,     0,   107,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,   232,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,   107,   108,   109,   110,     0,     0,
       0,   112,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,   107,   108,   109,   110,     0,     0,     0,   154,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,   107,   108,
     109,   110,     0,   202,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,     0,   107,   108,   109,   110,     0,   209,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,   107,   108,
     109,   110,   155,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      30,    31,   115,    32,    17,    13,   112,    32,    56,     0,
      32,    59,    31,    31,   150,   150,    31,    56,   150,    31,
      59,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      59,    31,   168,    52,    52,    57,    61,    52,    67,    61,
     153,   177,   177,    62,    62,   177,    76,    77,   154,    27,
      28,    57,    52,    55,    62,    61,    69,    87,    87,    31,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    32,
      52,   111,    31,   219,    31,     0,    55,   116,   218,    56,
      62,   247,   248,    31,    56,   125,     8,     8,    13,     9,
       8,   231,     8,    52,    57,    52,    16,    17,    18,   222,
     246,     4,    62,    61,    55,    61,    61,    61,    11,    12,
      13,   150,    61,    32,   237,   155,    11,    12,   158,    14,
      15,    61,    31,   163,    19,    57,    62,    57,    13,    31,
      56,    62,    32,    62,    62,    62,    59,    61,   177,    56,
      24,    30,   161,    55,   223,    36,    61,    61,    61,    60,
     190,     3,     4,     5,     6,     7,   196,   197,    56,   199,
     200,    13,    61,    60,    56,    59,    59,    63,    20,    21,
      22,    23,    24,    25,    26,    56,   216,    29,   218,    31,
     220,    60,    62,    70,    38,    73,   216,   152,   188,    67,
     177,   231,   236,   233,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,   111,    -1,    -1,   116,    59,    60,    61,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    31,    61,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    31,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    31,    61,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    31,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    31,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
      -1,    58,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    53,    54,    -1,    -1,    -1,    58,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    54,    -1,    56,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    54,    -1,    56,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,   113,   114,   115,   120,   121,   122,   123,   124,
     125,   128,   141,   145,     0,   114,    31,    52,   117,   118,
     129,    11,    12,    14,    15,    19,   126,   114,   114,   114,
      32,    57,    61,   119,    31,   118,    55,   116,    55,   130,
       9,    16,    17,    18,   127,     3,     4,     5,     6,     7,
      31,    47,    48,    49,    50,    51,    52,    53,    54,    61,
     136,   139,   140,   136,   120,   142,   144,    61,    31,    52,
     117,    56,    31,   129,    56,     8,    57,    61,   131,   136,
     136,   136,   136,   136,   136,   136,   136,    52,   120,   136,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    51,    52,    53,
      54,    61,    58,    31,    52,    62,    55,   143,   142,   116,
     130,   136,   136,   137,   120,    62,    62,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   131,    31,    56,
      59,   146,   144,    62,    58,    55,   138,    62,    62,   136,
      62,    32,   132,    20,    21,    22,    23,    24,    25,    26,
      29,   115,   120,   128,   136,   146,   147,   148,   149,   150,
     151,   153,   154,   158,   143,    56,   146,   131,   136,   136,
      59,   133,    56,   136,    56,    56,    61,    61,   149,    61,
      61,    31,    56,    60,   147,   138,   133,   135,   136,    56,
     136,   152,   136,    24,   136,   136,    55,   134,    56,    62,
      61,    62,    62,   135,    60,   152,   149,   136,    59,   146,
     134,    56,    62,    27,    28,   155,   156,    30,   159,   152,
      56,   136,    63,    60,   155,   146,    62,    63,   149,   157,
     149,   157,   157
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   114,   114,   114,   114,   114,   115,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     121,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     124,   125,   125,   126,   126,   126,   127,   127,   127,   127,
     128,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   138,   138,   139,   140,
     140,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   151,   152,   152,   153,   153,   154,   155,   155,   156,
     156,   157,   157,   158,   159,   159
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
       3,     2,     2,     4,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     5,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     6,     7,     2,     0,     3,     0,
       2,     3,     6,     7,     3,     2,     0,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       2,     9,     1,     0,     5,     7,     7,     2,     0,     4,
       3,     2,     0,     6,     2,     0
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
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].sVal));}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 184 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 185 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 186 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 187 "parser.y" /* yacc.c:1646  */
    {char* s = malloc(sizeof(char)*(strlen((yyvsp[-1].sVal))+strlen((yyvsp[0].sVal))+20)); strcpy(s,""); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 188 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_SCALAR_LEFT);
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_SCALAR_RIGHT);
    (yyval.sVal)=s;}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 197 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 199 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 200 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s; }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 202 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 203 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 205 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 206 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 207 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 208 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 209 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 210 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 211 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[0].sVal));  (yyval.sVal)=s;}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 217 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,_ARRAY_LEFT);
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    strcat(s,_ARRAY_RIGHT);
    (yyval.sVal)=s;}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 226 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-5].sVal)); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 235 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 236 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 243 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 244 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal));
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 251 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 254 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 255 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,intToString((yyvsp[0].iVal)));    strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,doubleToString((yyvsp[0].dVal))); strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 257 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 258 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 259 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,"0");                strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 260 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 262 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 263 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 264 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 265 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,_EXPR_RIGHT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 267 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 268 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 269 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 271 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 272 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 273 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 275 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-4].sVal)); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 276 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-3].sVal)); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 278 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 279 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 280 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 282 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 283 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 285 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 286 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 288 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 289 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 290 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 291 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 293 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 294 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 296 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 298 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 300 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 302 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 304 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 306 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_EXPR_RIGHT); (yyval.sVal)=s;}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 308 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 308 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 309 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 309 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 310 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 311 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,intToString((yyvsp[0].iVal)));    strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 312 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,doubleToString((yyvsp[0].dVal))); strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 313 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 314 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,(yyvsp[0].sVal));                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 315 "parser.y" /* yacc.c:1646  */
    {char*s = reserveStr(); strcat(s,_EXPR_LEFT); strcat(s,"0");                 strcat(s,_EXPR_RIGHT);(yyval.sVal)=s;}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 317 "parser.y" /* yacc.c:1646  */
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
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 327 "parser.y" /* yacc.c:1646  */
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
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 339 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-1].sVal)); 
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 343 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 344 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 345 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 346 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 347 "parser.y" /* yacc.c:1646  */
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
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 357 "parser.y" /* yacc.c:1646  */
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
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 370 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 371 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 371 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 373 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 374 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 375 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 376 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 377 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 378 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 379 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,(yyvsp[0].sVal)); strcat(s,_STMT_RIGHT);(yyval.sVal)=s;}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 380 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal)); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 381 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 382 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 383 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal)); (yyval.sVal)=s;}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 384 "parser.y" /* yacc.c:1646  */
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
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 396 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)=(yyvsp[0].sVal);}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 396 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 397 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-4].sVal)); 
    strcat(s,(yyvsp[-3].sVal)); 
    strcat(s,(yyvsp[-2].sVal)); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 404 "parser.y" /* yacc.c:1646  */
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
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 415 "parser.y" /* yacc.c:1646  */
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
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 425 "parser.y" /* yacc.c:1646  */
    {
    char* s = reserveStr(); 
    strcat(s,(yyvsp[-1].sVal));
    strcat(s,(yyvsp[0].sVal));
    (yyval.sVal)=s;}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 429 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 430 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-3].sVal));strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 431 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 432 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 432 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 436 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-5].sVal));strcat(s,(yyvsp[-4].sVal));strcat(s,(yyvsp[-3].sVal));strcat(s,(yyvsp[-2].sVal));strcat(s,(yyvsp[-1].sVal)); strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 437 "parser.y" /* yacc.c:1646  */
    {char* s = reserveStr(); strcat(s,(yyvsp[-1].sVal));strcat(s,(yyvsp[0].sVal));(yyval.sVal)=s;}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 437 "parser.y" /* yacc.c:1646  */
    {(yyval.sVal)="";}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2766 "y.tab.c" /* yacc.c:1646  */
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
#line 438 "parser.y" /* yacc.c:1906  */

int yylex();
int main(void) {
    yyparse();
    return 0;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
    return 0;
}
