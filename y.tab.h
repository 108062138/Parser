#define INT 257
#define MYCHAR 258
#define MYSTRING 259
#define MYNULL 260
#define DOUBLE 261
#define INTTYPE 262
#define CHARTYPE 263
#define STRINGTYPE 264
#define DOUBLETYPE 265
#define FLOATTYPE 266
#define CONSTTYPE 267
#define SIGNEDTYPE 268
#define UNSIGNEDTYPE 269
#define LONGLONGTYPE 270
#define LONGTYPE 271
#define SHORTTYPE 272
#define VOIDTYPE 273
#define RETURN 274
#define BREAK 275
#define CONTINUE 276
#define FOR 277
#define WHILE 278
#define DO 279
#define SWITCH 280
#define CASE 281
#define DEFAULT 282
#define IF 283
#define ELSE 284
#define IDENT 285
#define ASSIGN 286
#define LOGICALOR 287
#define LOGICALAND 288
#define BITWISEOR 289
#define XOR 290
#define EQ 291
#define NOTEQ 292
#define BIGOREQ 293
#define SMALLOREQ 294
#define BIG 295
#define SMALL 296
#define SHIFTLEFT 297
#define SHIFTRIGHT 298
#define SLASH 299
#define MOD 300
#define ADD 301
#define MINUS 302
#define TILDA 303
#define EXCLAMATION 304
#define BITWISEAND 305
#define MULSTAR 306
#define ADDONE 307
#define MINUSONE 308
#define COMMA 309
#define EOL 310
#define LSQUAREBRACKET 311
#define RSQUAREBRACKET 312
#define LBRACE 313
#define RBRACE 314
#define LPARENTHESIS 315
#define RPARENTHESIS 316
#define COLON 317
#define TURNEDLEFT 318
#define TURNEDRIGHT 319
#define NOASSOCIATIVE 320
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
