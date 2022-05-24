/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
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
/*it convert an int to string*/
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
#line 41 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union { 
    int iVal;
    double dVal;
    char* sVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 72 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INT 257
#define MYCHAR 258
#define MYSTRING 259
#define DOUBLE 260
#define INTTYPE 261
#define CHARTYPE 262
#define STRINGTYPE 263
#define DOUBLETYPE 264
#define FLOATTYPE 265
#define CONSTTYPE 266
#define SIGNEDTYPE 267
#define UNSIGNEDTYPE 268
#define LONGLONGTYPE 269
#define LONGTYPE 270
#define SHORTTYPE 271
#define VOIDTYPE 272
#define RETURN 273
#define BREAK 274
#define CONTINUE 275
#define FOR 276
#define WHILE 277
#define DO 278
#define SWITCH 279
#define CASE 280
#define DEFAULT 281
#define IF 282
#define ELSE 283
#define IDENT 284
#define ASSIGN 285
#define MULSTAR 286
#define COMMA 287
#define EOL 288
#define LSQUAREBRACKET 289
#define RSQUAREBRACKET 290
#define LBRACE 291
#define RBRACE 292
#define LPARENTHESIS 293
#define RPARENTHESIS 294
#define COLON 295
#define fakeCompoundStmt 296
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   42,   42,   42,   42,   42,   42,    5,    4,    4,
    3,    3,    2,    1,    1,    6,    6,    6,    6,    7,
    8,    8,    8,    8,    9,    9,    9,    9,    9,   10,
   11,   11,   12,   12,   12,   13,   13,   13,   13,   16,
   22,   23,   23,   17,   17,   18,   18,   19,   19,   21,
   21,   20,   20,   14,   15,   15,   15,   15,   15,   24,
   24,   25,   25,   27,   27,   26,   26,   28,   28,   29,
   30,   30,   31,   31,   31,   32,   32,   32,   32,   32,
   32,   32,   37,   37,   37,   37,   36,   41,   41,   35,
   35,   34,   38,   38,   39,   39,   40,   40,   33,   33,
};
static const YYINT yylen[] = {                            2,
    1,    1,    1,    1,    1,    1,    1,    4,    3,    0,
    2,    1,    2,    2,    0,    1,    1,    1,    1,    4,
    3,    3,    3,    3,    2,    2,    2,    2,    2,    1,
    1,    0,    1,    1,    0,    1,    1,    1,    0,    4,
    6,    3,    0,    4,    0,    2,    0,    4,    0,    3,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    6,
    7,    2,    0,    3,    0,    2,    3,    6,    7,    3,
    2,    0,    1,    1,    1,    2,    1,    1,    1,    1,
    1,    1,    3,    2,    2,    2,    9,    1,    0,    5,
    7,    7,    2,    0,    4,    3,    2,    0,    5,    7,
};
static const YYINT yydefred[] = {                         0,
   55,   56,   57,   58,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   59,    0,    0,    2,    0,   16,   17,
   18,   19,    0,    0,   54,    3,    4,    5,   82,    7,
   77,   78,   79,   80,   81,    1,   84,    0,   85,   86,
    0,    0,    0,    0,    0,    0,   74,    0,   75,    0,
    0,   73,    0,    0,   12,    0,    0,   28,   27,    0,
    0,   29,    0,   76,   83,   88,    0,    0,    0,    0,
    0,    0,    0,   70,   71,    0,    0,    0,   13,    0,
   11,    0,    0,    0,    0,   24,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   14,    0,    0,    0,
    0,    0,    0,    8,    0,    0,   40,   20,    0,   90,
    0,    0,    0,    0,   66,    0,    0,    0,   62,    0,
    9,   42,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   67,   60,   68,    0,    0,    0,   91,    0,    0,
   92,   93,  100,    0,    0,   41,   64,   61,   69,    0,
    0,    0,   96,    0,    0,   46,   87,   95,   97,   44,
   52,   53,    0,    0,    0,    0,   48,   50,
};
static const YYINT yydgoto[] = {                         16,
   79,   55,   56,   83,   47,   99,   19,   20,   21,   22,
   23,   63,   90,   43,   25,   49,  131,  146,  162,  163,
  165,   57,   85,   27,  100,  101,  119,   28,   29,   50,
   51,  152,   31,   32,   33,   34,   35,  127,  128,  153,
   67,   36,
};
static const YYINT yysindex[] = {                      -246,
    0,    0,    0,    0,    0, -196, -281, -242, -194, -191,
 -208, -182, -179,    0, -246,    0,    0, -209,    0,    0,
    0,    0, -178, -203,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -160,    0,    0,
 -136, -136, -203, -146, -136, -136,    0, -107,    0, -158,
 -246,    0, -156, -131,    0, -128, -115,    0,    0,    0,
    0,    0,  -88,    0,    0,    0, -112, -109, -104, -102,
  -93, -250,  -71,    0,    0, -136, -136,  -67,    0, -269,
    0,  -80,  -70,  -65,  -68,    0,    0,    0,    0,  -53,
 -136, -208, -136,  -69,  -66,  -64,    0,  -63,  -79,  -62,
  -61,  -67, -128,    0,  -60, -115,    0,    0,  -58,    0,
  -59, -113,  -55,  -56,    0,  -50, -265,  -67,    0,  -57,
    0,    0, -136,  -52, -136,  -72,  -54, -113,  -66, -136,
  -46,    0,    0,    0,  -61, -235,  -51,    0,  -49, -208,
    0,    0,    0,  -45,  -47,    0,    0,    0,    0, -208,
 -208, -208,    0,  -56, -200,    0,    0,    0,    0,    0,
    0,    0,  -40, -200,  -44,  -40,    0,    0,
};
static const YYINT yyrindex[] = {                       -74,
    0,    0,    0,    0, -126,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -152,    0,    0,    0,    0,    0,
    0,    0, -189,  224,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -39,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -152,    0,  -78,    0,    0,  -38,  -37,    0,    0, -106,
 -100,    0,  -30,    0,    0,    0,    0,    0,    0,    0,
    0,  -78,    0,    0,    0,    0,    0, -164,    0,  -78,
    0,    0,    0,    0,    0,    0, -244, -135, -111,    0,
  -39,    0,    0,    0,    0,  -78,    0,    0,    0,    0,
  -42, -164,  -38,    0,    0,  -37,    0,    0,    0,    0,
    0,  -36,    1,  -85,    0,    0,    0,  -74,    0,    0,
    0,    0,  -41,    0,    0,    0,    0,  -36,    0,    0,
  -76,    0,    0,    0,  -42,    0,    0,    0,    0, -271,
    0,    0,    0,    0,  -73,    0,    0,    0,    0,    0,
 -271, -271,    0,  -85, -140,    0,    0,    0,    0,    0,
    0,    0,  -35, -140,    0,  -35,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  -48,  158,  138,  242,    3,    0,    0,    0,    0,
    0,    0,    0,    2,    0,  254,  101,    0,  119,  120,
  121,  202,  182,    0,  187,  172,  156,    0,  -95,  243,
    0,    4,    0,    0,    0,    0,    0,  167,    0,   65,
  -86,    0,
};
#define YYTABLESIZE 295
static const YYINT yytable[] = {                        113,
   99,   24,   18,   30,  109,   81,   39,   38,   98,   98,
    1,    2,    3,    4,   44,   76,   36,   48,   52,    5,
   98,  134,  133,  102,   81,   15,    6,    7,    8,    9,
   10,   11,   12,  143,   76,   13,  137,   14,   77,   21,
  149,   21,   66,   68,   15,   40,   70,   71,    1,    2,
    3,    4,  148,   48,   52,   15,    1,    2,    3,    4,
    1,    2,    3,    4,    6,    7,    8,    9,   10,   11,
   12,   35,   35,   13,   53,   14,   54,   97,   98,   35,
   35,   35,   15,   14,   64,   58,   59,   14,   60,   61,
  155,   37,   66,   62,  111,  110,   32,   32,   41,   32,
   32,   42,   32,   32,   32,   32,   32,   32,   32,   32,
   45,   32,   32,   46,   32,   32,   32,   32,   32,   32,
    1,    2,    3,    4,   66,   37,  139,   65,   76,   63,
   69,  144,   77,   74,   31,   31,   78,   31,   31,   72,
   31,   31,   31,   31,   31,   31,   49,   14,   22,   38,
   22,   49,   80,  157,   33,   33,  161,   30,   82,   30,
   34,   34,   33,   33,   33,  161,  125,  126,   34,   34,
   34,   84,   23,   86,   23,   91,   72,   25,   73,   25,
   87,   88,   89,   26,   92,   26,   32,   32,   93,   32,
   32,   94,   32,   32,   32,   32,   32,   32,    5,   45,
   95,   45,   45,   96,  115,   73,  116,  108,   15,   15,
   47,   47,   96,   49,   49,  158,  159,  104,  105,  107,
   76,  112,  140,    6,   15,  118,  114,  129,   77,  123,
   39,  117,  130,  132,  124,  138,  136,  141,  145,  103,
  121,   17,  150,  155,  154,  151,  164,  167,   89,   10,
   43,   65,   89,   26,  160,   94,   51,   99,   99,   99,
   99,   99,   99,  156,   99,   99,   99,   99,   99,   99,
   99,   99,   99,   99,   99,   99,   99,   99,   99,   99,
   99,   99,   99,  166,   99,  106,  168,  122,  120,  135,
  147,   99,   99,   75,  142,
};
static const YYINT yycheck[] = {                         95,
    0,    0,    0,    0,   91,   54,  288,    6,  280,  281,
  257,  258,  259,  260,   11,  285,  261,   15,   15,  266,
  292,  117,  288,  293,   73,  291,  273,  274,  275,  276,
  277,  278,  279,  129,  285,  282,  123,  284,  289,  284,
  136,  286,   41,   42,  291,  288,   45,   46,  257,  258,
  259,  260,  288,   51,   51,  291,  257,  258,  259,  260,
  257,  258,  259,  260,  273,  274,  275,  276,  277,  278,
  279,  261,  262,  282,  284,  284,  286,   76,   77,  269,
  270,  271,  291,  284,  288,  264,  265,  284,  267,  268,
  291,  288,   91,  272,   93,   92,  261,  262,  293,  264,
  265,  293,  267,  268,  269,  270,  271,  272,  261,  262,
  293,  264,  265,  293,  267,  268,  269,  270,  271,  272,
  257,  258,  259,  260,  123,  261,  125,  288,  285,  294,
  277,  130,  289,  292,  261,  262,  293,  264,  265,  292,
  267,  268,  269,  270,  271,  272,  287,  284,  284,  261,
  286,  292,  284,  150,  261,  262,  155,  284,  287,  286,
  261,  262,  269,  270,  271,  164,  280,  281,  269,  270,
  271,  287,  284,  262,  286,  288,  284,  284,  286,  286,
  269,  270,  271,  284,  294,  286,  261,  262,  293,  264,
  265,  294,  267,  268,  269,  270,  271,  272,  266,  285,
  294,  287,  288,  284,  284,  286,  286,  261,  287,  288,
  287,  288,  284,  287,  288,  151,  152,  288,  284,  288,
  285,  291,  295,    0,  291,  287,  290,  283,  289,  288,
  261,  294,  289,  284,  294,  288,  294,  292,  285,   82,
  103,    0,  294,  291,  290,  295,  287,  292,  288,  288,
  288,  294,  294,    0,  154,  292,  292,  257,  258,  259,
  260,  261,  262,  145,  264,  265,  266,  267,  268,  269,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  164,  284,   84,  166,  106,  102,  118,
  135,  291,  292,   51,  128,
};
#define YYFINAL 16
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 296
#define YYUNDFTOKEN 341
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","MYCHAR","MYSTRING",
"DOUBLE","INTTYPE","CHARTYPE","STRINGTYPE","DOUBLETYPE","FLOATTYPE","CONSTTYPE",
"SIGNEDTYPE","UNSIGNEDTYPE","LONGLONGTYPE","LONGTYPE","SHORTTYPE","VOIDTYPE",
"RETURN","BREAK","CONTINUE","FOR","WHILE","DO","SWITCH","CASE","DEFAULT","IF",
"ELSE","IDENT","ASSIGN","MULSTAR","COMMA","EOL","LSQUAREBRACKET",
"RSQUAREBRACKET","LBRACE","RBRACE","LPARENTHESIS","RPARENTHESIS","COLON",
"fakeCompoundStmt",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : startHere",
"startHere : top",
"top : scalarDeclare",
"top : arrayDeclare",
"top : functionDeclare",
"top : functionDefinition",
"top : expr",
"top : stmt",
"scalarDeclare : type ident identList EOL",
"identList : COMMA ident identList",
"identList :",
"ident : MULSTAR id",
"ident : id",
"id : IDENT giveScalar",
"giveScalar : ASSIGN expr",
"giveScalar :",
"type : type1",
"type : type2",
"type : type3",
"type : type4",
"type1 : mayHaveConst mayHaveSign mayLongOrShort INTTYPE",
"type2 : mayHaveConst mayHaveSign LONGLONGTYPE",
"type2 : mayHaveConst mayHaveSign LONGTYPE",
"type2 : mayHaveConst mayHaveSign SHORTTYPE",
"type2 : mayHaveConst mayHaveSign CHARTYPE",
"type3 : mayHaveConst SIGNEDTYPE",
"type3 : mayHaveConst UNSIGNEDTYPE",
"type3 : mayHaveConst FLOATTYPE",
"type3 : mayHaveConst DOUBLETYPE",
"type3 : mayHaveConst VOIDTYPE",
"type4 : CONSTTYPE",
"mayHaveConst : CONSTTYPE",
"mayHaveConst :",
"mayHaveSign : SIGNEDTYPE",
"mayHaveSign : UNSIGNEDTYPE",
"mayHaveSign :",
"mayLongOrShort : LONGLONGTYPE",
"mayLongOrShort : LONGTYPE",
"mayLongOrShort : SHORTTYPE",
"mayLongOrShort :",
"arrayDeclare : type array arrayList EOL",
"array : IDENT LSQUAREBRACKET expr RSQUAREBRACKET lrSquareBracketList giveArray",
"arrayList : COMMA array arrayList",
"arrayList :",
"lrSquareBracketList : LSQUAREBRACKET expr RSQUAREBRACKET lrSquareBracketList",
"lrSquareBracketList :",
"giveArray : ASSIGN arrayContent",
"giveArray :",
"arrayContent : LBRACE item itemList RBRACE",
"arrayContent :",
"itemList : COMMA item itemList",
"itemList :",
"item : expr",
"item : arrayContent",
"expr : fakeExpr",
"fakeExpr : INT",
"fakeExpr : MYCHAR",
"fakeExpr : MYSTRING",
"fakeExpr : DOUBLE",
"fakeExpr : IDENT",
"functionDeclare : type IDENT LPARENTHESIS parameters RPARENTHESIS EOL",
"functionDeclare : type MULSTAR IDENT LPARENTHESIS parameters RPARENTHESIS EOL",
"parameters : parameter parameterList",
"parameters :",
"parameterList : COMMA parameter parameterList",
"parameterList :",
"parameter : type IDENT",
"parameter : type MULSTAR IDENT",
"functionDefinition : type IDENT LPARENTHESIS parameters RPARENTHESIS compoundStmt",
"functionDefinition : type MULSTAR IDENT LPARENTHESIS parameters RPARENTHESIS compoundStmt",
"compoundStmt : LBRACE stmtOrVarDeclares RBRACE",
"stmtOrVarDeclares : stmtOrVarDeclare stmtOrVarDeclares",
"stmtOrVarDeclares :",
"stmtOrVarDeclare : stmt",
"stmtOrVarDeclare : scalarDeclare",
"stmtOrVarDeclare : arrayDeclare",
"stmt : expr EOL",
"stmt : ifOrIfElseStmt",
"stmt : switchStmt",
"stmt : whileStmt",
"stmt : forStmt",
"stmt : returnBreakContinueStmt",
"stmt : compoundStmt",
"returnBreakContinueStmt : RETURN expr EOL",
"returnBreakContinueStmt : RETURN EOL",
"returnBreakContinueStmt : BREAK EOL",
"returnBreakContinueStmt : CONTINUE EOL",
"forStmt : FOR LPARENTHESIS mayHaveExpr EOL mayHaveExpr EOL mayHaveExpr RPARENTHESIS stmt",
"mayHaveExpr : expr",
"mayHaveExpr :",
"whileStmt : WHILE LPARENTHESIS expr RPARENTHESIS stmt",
"whileStmt : DO stmt WHILE LPARENTHESIS expr RPARENTHESIS EOL",
"switchStmt : SWITCH LPARENTHESIS expr RPARENTHESIS LBRACE switchCluses RBRACE",
"switchCluses : switchClue switchCluses",
"switchCluses :",
"switchClue : CASE expr COLON stmts",
"switchClue : DEFAULT COLON stmts",
"stmts : stmt stmts",
"stmts :",
"ifOrIfElseStmt : IF LPARENTHESIS expr RPARENTHESIS compoundStmt",
"ifOrIfElseStmt : IF LPARENTHESIS expr RPARENTHESIS compoundStmt ELSE compoundStmt",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 269 "parser.y"
int yylex();
int main(void) {
    yyparse();
    return 0;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
    return 0;
}
#line 481 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 71 "parser.y"
	{printf("%s",yystack.l_mark[0].sVal);}
break;
case 2:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 3:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 4:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 5:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 6:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 7:
#line 72 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 8:
#line 74 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,_SCALAR_LEFT);
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_SCALAR_RIGHT);
    yyval.sVal=s;}
break;
case 9:
#line 83 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 10:
#line 83 "parser.y"
	{yyval.sVal="";}
break;
case 11:
#line 84 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 12:
#line 84 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 13:
#line 85 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 14:
#line 86 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s; }
break;
case 15:
#line 86 "parser.y"
	{yyval.sVal="";}
break;
case 16:
#line 87 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 17:
#line 87 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 18:
#line 87 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 19:
#line 87 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 20:
#line 88 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-3].sVal); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 21:
#line 89 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 22:
#line 90 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 23:
#line 91 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 24:
#line 92 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 25:
#line 93 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 26:
#line 94 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 27:
#line 95 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 28:
#line 96 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 29:
#line 97 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 30:
#line 98 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[0].sVal);  yyval.sVal=s;}
break;
case 31:
#line 99 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 32:
#line 99 "parser.y"
	{yyval.sVal="";}
break;
case 33:
#line 100 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 34:
#line 100 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 35:
#line 100 "parser.y"
	{yyval.sVal="";}
break;
case 36:
#line 101 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 37:
#line 101 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 38:
#line 101 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 39:
#line 101 "parser.y"
	{yyval.sVal="";}
break;
case 40:
#line 103 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,_ARRAY_LEFT);
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_ARRAY_RIGHT);
    yyval.sVal=s;
}
break;
case 41:
#line 113 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal);
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 42:
#line 122 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 43:
#line 122 "parser.y"
	{yyval.sVal="";}
break;
case 44:
#line 123 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 45:
#line 129 "parser.y"
	{yyval.sVal="";}
break;
case 46:
#line 130 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 47:
#line 130 "parser.y"
	{yyval.sVal="";}
break;
case 48:
#line 131 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal);
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 49:
#line 137 "parser.y"
	{yyval.sVal="";}
break;
case 50:
#line 138 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 51:
#line 138 "parser.y"
	{yyval.sVal="";}
break;
case 52:
#line 139 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 53:
#line 139 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 54:
#line 141 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,_EXPR_LEFT); 
    strcat(s,yystack.l_mark[0].sVal); 
    strcat(s,_EXPR_RIGHT); 
    yyval.sVal=s;
    }
break;
case 55:
#line 148 "parser.y"
	{char* s = intToString(yystack.l_mark[0].iVal); yyval.sVal=s;}
break;
case 56:
#line 148 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 57:
#line 148 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 58:
#line 148 "parser.y"
	{char* s = doubleToString(yystack.l_mark[0].dVal); yyval.sVal=s;}
break;
case 59:
#line 148 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 60:
#line 149 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal);
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_FUNC_DECL_RIGHT);
    yyval.sVal=s;}
break;
case 61:
#line 159 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,yystack.l_mark[-6].sVal); 
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal);
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_FUNC_DECL_RIGHT);
    yyval.sVal=s;}
break;
case 62:
#line 171 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 63:
#line 175 "parser.y"
	{yyval.sVal="";}
break;
case 64:
#line 176 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 65:
#line 176 "parser.y"
	{yyval.sVal="";}
break;
case 66:
#line 177 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 67:
#line 178 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 68:
#line 179 "parser.y"
	{
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal);
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal); 
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_FUNCT_DEF_RIGHT);
    yyval.sVal=s;}
break;
case 69:
#line 189 "parser.y"
	{
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,yystack.l_mark[-6].sVal); 
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal);
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    strcat(s,_FUNCT_DEF_RIGHT);
    yyval.sVal=s;}
break;
case 70:
#line 202 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 71:
#line 203 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 72:
#line 203 "parser.y"
	{yyval.sVal="";}
break;
case 73:
#line 204 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 74:
#line 204 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 75:
#line 204 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 76:
#line 205 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 77:
#line 206 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 78:
#line 207 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 79:
#line 208 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 80:
#line 209 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 81:
#line 210 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 82:
#line 211 "parser.y"
	{char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,yystack.l_mark[0].sVal); strcat(s,_STMT_RIGHT);yyval.sVal=s;}
break;
case 83:
#line 212 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 84:
#line 213 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 85:
#line 214 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 86:
#line 215 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal); strcat(s,yystack.l_mark[0].sVal); yyval.sVal=s;}
break;
case 87:
#line 216 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-8].sVal); 
    strcat(s,yystack.l_mark[-7].sVal); 
    strcat(s,yystack.l_mark[-6].sVal); 
    strcat(s,yystack.l_mark[-5].sVal);
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 88:
#line 228 "parser.y"
	{yyval.sVal=yystack.l_mark[0].sVal;}
break;
case 89:
#line 228 "parser.y"
	{yyval.sVal="";}
break;
case 90:
#line 229 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal); 
    strcat(s,yystack.l_mark[-2].sVal); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 91:
#line 236 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-6].sVal); 
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal);
    strcat(s,yystack.l_mark[-2].sVal);
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;
    }
break;
case 92:
#line 247 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-6].sVal); 
    strcat(s,yystack.l_mark[-5].sVal); 
    strcat(s,yystack.l_mark[-4].sVal); 
    strcat(s,yystack.l_mark[-3].sVal);
    strcat(s,yystack.l_mark[-2].sVal);
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;
}
break;
case 93:
#line 258 "parser.y"
	{
    char* s = reserveStr(); 
    strcat(s,yystack.l_mark[-1].sVal);
    strcat(s,yystack.l_mark[0].sVal);
    yyval.sVal=s;}
break;
case 94:
#line 262 "parser.y"
	{yyval.sVal="";}
break;
case 95:
#line 263 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-3].sVal);strcat(s,yystack.l_mark[-2].sVal);strcat(s,yystack.l_mark[-1].sVal);strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 96:
#line 264 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-2].sVal);strcat(s,yystack.l_mark[-1].sVal);strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 97:
#line 265 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-1].sVal);strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 98:
#line 265 "parser.y"
	{yyval.sVal="";}
break;
case 99:
#line 266 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-4].sVal);strcat(s,yystack.l_mark[-3].sVal);strcat(s,yystack.l_mark[-2].sVal);strcat(s,yystack.l_mark[-1].sVal);strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
case 100:
#line 267 "parser.y"
	{char* s = reserveStr(); strcat(s,yystack.l_mark[-6].sVal);strcat(s,yystack.l_mark[-5].sVal);strcat(s,yystack.l_mark[-4].sVal);strcat(s,yystack.l_mark[-3].sVal);strcat(s,yystack.l_mark[-2].sVal);strcat(s,yystack.l_mark[-1].sVal);strcat(s,yystack.l_mark[0].sVal);yyval.sVal=s;}
break;
#line 1214 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
