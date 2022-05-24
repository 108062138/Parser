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
extern YYSTYPE yylval;
