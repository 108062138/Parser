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
#define CHAR4TYPE 274
#define CHAR8TYPE 275
#define RETURN 276
#define BREAK 277
#define CONTINUE 278
#define FOR 279
#define WHILE 280
#define DO 281
#define SWITCH 282
#define CASE 283
#define DEFAULT 284
#define IF 285
#define ELSE 286
#define IDENT 287
#define ASSIGN 288
#define LOGICALOR 289
#define LOGICALAND 290
#define BITWISEOR 291
#define XOR 292
#define EQ 293
#define NOTEQ 294
#define BIGOREQ 295
#define SMALLOREQ 296
#define BIG 297
#define SMALL 298
#define SHIFTLEFT 299
#define SHIFTRIGHT 300
#define SLASH 301
#define MOD 302
#define ADD 303
#define MINUS 304
#define TILDA 305
#define EXCLAMATION 306
#define BITWISEAND 307
#define MULSTAR 308
#define ADDONE 309
#define MINUSONE 310
#define COMMA 311
#define EOL 312
#define LSQUAREBRACKET 313
#define RSQUAREBRACKET 314
#define LBRACE 315
#define RBRACE 316
#define LPARENTHESIS 317
#define RPARENTHESIS 318
#define COLON 319
#define TURNEDLEFT 320
#define TURNEDRIGHT 321
#define NOASSOCIATIVE 322
#define LV13 323
#define LV12 324
#define LV11 325
#define LV10 326
#define LV9 327
#define LV8 328
#define LV7 329
#define LV6 330
#define LV5 331
#define LV4 332
#define LV3 333
#define LV2 334
#define LV1 335
#define LV0_L 336
#define LV0_N 337
#define LV0_R 338
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
