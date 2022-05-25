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
#define PREC14_LEFT 321
#define PREC14_NON 322
#define PREC14_RIGHT 323
#define PREC13_LEFT 324
#define PREC13_NON 325
#define PREC13_RIGHT 326
#define PREC12_LEFT 327
#define PREC12_NON 328
#define PREC12_RIGHT 329
#define PREC11_LEFT 330
#define PREC11_NON 331
#define PREC11_RIGHT 332
#define PREC10_LEFT 333
#define PREC10_NON 334
#define PREC10_RIGHT 335
#define PREC09_LEFT 336
#define PREC09_NON 337
#define PREC09_RIGHT 338
#define PREC08_LEFT 339
#define PREC08_NON 340
#define PREC08_RIGHT 341
#define PREC07_LEFT 342
#define PREC07_NON 343
#define PREC07_RIGHT 344
#define PREC06_LEFT 345
#define PREC06_NON 346
#define PREC06_RIGHT 347
#define PREC05_LEFT 348
#define PREC05_NON 349
#define PREC05_RIGHT 350
#define PREC04_LEFT 351
#define PREC04_NON 352
#define PREC04_RIGHT 353
#define PREC03_LEFT 354
#define PREC03_NON 355
#define PREC03_RIGHT 356
#define PREC02_LEFT 357
#define PREC02_NON 358
#define PREC02_RIGHT 359
#define PREC01_LEFT 360
#define PREC01_NON 361
#define PREC01_RIGHT 362
#define PREC00_LEFT 363
#define PREC00_NON 364
#define PREC00_RIGHT 365
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
