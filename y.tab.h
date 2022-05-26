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
#define LV13 321
#define LV12 322
#define LV11 323
#define LV10 324
#define LV9 325
#define LV8 326
#define LV7 327
#define LV6 328
#define LV5 329
#define LV4 330
#define LV3 331
#define LV2 332
#define LV1 333
#define LV0_L 334
#define LV0_N 335
#define LV0_R 336
#define PREC15_LEFT 337
#define PREC15_NON 338
#define PREC15_RIGHT 339
#define PREC14_LEFT 340
#define PREC14_NON 341
#define PREC14_RIGHT 342
#define PREC13_LEFT 343
#define PREC13_NON 344
#define PREC13_RIGHT 345
#define PREC12_LEFT 346
#define PREC12_NON 347
#define PREC12_RIGHT 348
#define PREC11_LEFT 349
#define PREC11_NON 350
#define PREC11_RIGHT 351
#define PREC10_LEFT 352
#define PREC10_NON 353
#define PREC10_RIGHT 354
#define PREC09_LEFT 355
#define PREC09_NON 356
#define PREC09_RIGHT 357
#define PREC08_LEFT 358
#define PREC08_NON 359
#define PREC08_RIGHT 360
#define PREC07_LEFT 361
#define PREC07_NON 362
#define PREC07_RIGHT 363
#define PREC06_LEFT 364
#define PREC06_NON 365
#define PREC06_RIGHT 366
#define PREC05_LEFT 367
#define PREC05_NON 368
#define PREC05_RIGHT 369
#define PREC04_LEFT 370
#define PREC04_NON 371
#define PREC04_RIGHT 372
#define PREC03_LEFT 373
#define PREC03_NON 374
#define PREC03_RIGHT 375
#define PREC02_LEFT 376
#define PREC02_NON 377
#define PREC02_RIGHT 378
#define PREC01_LEFT 379
#define PREC01_NON 380
#define PREC01_RIGHT 381
#define PREC00_LEFT 382
#define PREC00_NON 383
#define PREC00_RIGHT 384
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
