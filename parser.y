%{
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
%}

%union { 
    int iVal;
    double dVal;
    char* sVal;
}

%token <iVal> INT
%token <sVal> MYCHAR MYSTRING
%token <dVal> DOUBLE
//KEY-TYPE
%token <sVal> INTTYPE CHARTYPE STRINGTYPE DOUBLETYPE FLOATTYPE CONSTTYPE SIGNEDTYPE UNSIGNEDTYPE LONGLONGTYPE LONGTYPE SHORTTYPE VOIDTYPE
//KEY GRAM..
%token <sVal> RETURN BREAK CONTINUE FOR WHILE DO SWITCH CASE DEFAULT IF ELSE
%token <sVal> IDENT
//OPER VALUE
//ORDER 14
%token<sVal> ASSIGN
//ORDER 12
%token<sVal> LOGICALOR
//ORDER 11
%token<sVal> LOGICALAND 
//ORDER 10
%token<sVal> BITWISEOR
//ORDER 09
%token<sVal> XOR
//ORDER 08

//ORDER 07
%token<sVal> EQ NOTEQ
//ORDER 06
%token<sVal> BIGOREQ SMALLOREQ BIG SMALL
//ORDER 05
%token<sVal> SHIFTLEFT SHIFTRIGHT 
//ORDER 04

//ORDER 03
%token<sVal> SLASH MOD
//ORDER 02
%token<sVal> ADD MINUS TILDA EXCLAMATION BITWISEAND  MULSTAR
//PRECE 01
%token<sVal> ADDONE MINUSONE    

//PUNC
%token<sVal> COMMA EOL LSQUAREBRACKET RSQUAREBRACKET LBRACE RBRACE LPARENTHESIS RPARENTHESIS COLON
%type <sVal> giveScalar id ident identList scalarDeclare type type1 type2 type3 type4 mayHaveConst mayHaveSign mayLongOrShort
%type <sVal> expr fakeExpr
%type <sVal> arrayDeclare lrSquareBracketList giveArray arrayContent item itemList array arrayList
%type <sVal> functionDeclare parameters parameter parameterList functionDefinition
%type <sVal> compoundStmt fakeCompoundStmt stmtOrVarDeclares stmtOrVarDeclare
%type <sVal> stmt ifOrIfElseStmt switchStmt whileStmt forStmt returnBreakContinueStmt switchCluses switchClue stmts
%type <sVal> mayHaveExpr
%type <sVal> top
%start startHere

%%
//main
startHere: top {printf("%s",$1);};
top: scalarDeclare {$$=$1;} | arrayDeclare {$$=$1;} | functionDeclare {$$=$1;} | functionDefinition {$$=$1;} | expr {$$=$1;} | stmt {$$=$1;};
//scalar declare
scalarDeclare: type ident identList EOL {
    char* s = reserveStr(); 
    strcat(s,_SCALAR_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3);
    strcat(s,$4);
    strcat(s,_SCALAR_RIGHT);
    $$=s;} 
identList: COMMA ident identList {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} | {$$="";};
ident: MULSTAR id {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} |id {$$=$1;};
id: IDENT giveScalar {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;};
giveScalar: ASSIGN expr {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s; }|{$$="";};
type: type1 {$$=$1;} | type2 {$$=$1;} | type3 {$$=$1;} | type4 {$$=$1;};
type1: mayHaveConst mayHaveSign mayLongOrShort INTTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); strcat(s,$4); $$=s;}
type2: mayHaveConst mayHaveSign LONGLONGTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} | 
       mayHaveConst mayHaveSign LONGTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} | 
       mayHaveConst mayHaveSign SHORTTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} |
       mayHaveConst mayHaveSign CHARTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;};
type3: mayHaveConst SIGNEDTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} | 
       mayHaveConst UNSIGNEDTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} |
       mayHaveConst FLOATTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;}| 
       mayHaveConst DOUBLETYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} |
       mayHaveConst VOIDTYPE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;};
type4: CONSTTYPE {char* s = reserveStr(); strcat(s,$1);  $$=s;};
mayHaveConst: CONSTTYPE {$$=$1;} | {$$="";};
mayHaveSign: SIGNEDTYPE {$$=$1;} | UNSIGNEDTYPE {$$=$1;} | {$$="";};
mayLongOrShort: LONGLONGTYPE {$$=$1;} | LONGTYPE {$$=$1;} | SHORTTYPE {$$=$1;} | {$$="";};
//array declare
arrayDeclare: type array arrayList EOL {
    char* s = reserveStr(); 
    strcat(s,_ARRAY_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,_ARRAY_RIGHT);
    $$=s;
};
array: IDENT LSQUAREBRACKET expr RSQUAREBRACKET lrSquareBracketList giveArray {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5); 
    strcat(s,$6);
    $$=s;};
arrayList: COMMA array arrayList {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} | {$$="";};
lrSquareBracketList: LSQUAREBRACKET expr RSQUAREBRACKET lrSquareBracketList {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    $$=s;}| {$$="";};
giveArray: ASSIGN arrayContent {char* s = reserveStr(); strcat(s,$1); strcat(s,$2);$$=s;} | {$$="";};
arrayContent: LBRACE item itemList RBRACE {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2);
    strcat(s,$3); 
    strcat(s,$4);
    $$=s;} | {$$="";};
itemList: COMMA item itemList {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;}| {$$="";};
item: expr {$$=$1;} | arrayContent {$$=$1;};
//expr
expr: fakeExpr {
    char* s = reserveStr(); 
    strcat(s,_EXPR_LEFT); 
    strcat(s,$1); 
    strcat(s,_EXPR_RIGHT); 
    $$=s;
    };
fakeExpr: INT {char* s = intToString($1); $$=s;} | MYCHAR {$$=$1;} | MYSTRING {$$=$1;} | DOUBLE {char* s = doubleToString($1); $$=s;} | IDENT {$$=$1;};
functionDeclare: type IDENT LPARENTHESIS parameters RPARENTHESIS EOL {
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5); 
    strcat(s,$6);
    strcat(s,_FUNC_DECL_RIGHT);
    $$=s;} | type MULSTAR IDENT LPARENTHESIS parameters RPARENTHESIS EOL {
    char* s = reserveStr(); 
    strcat(s,_FUNC_DECL_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5); 
    strcat(s,$6);
    strcat(s,$7);
    strcat(s,_FUNC_DECL_RIGHT);
    $$=s;};
parameters: parameter parameterList {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2);
    $$=s;} | {$$="";};
parameterList: COMMA parameter parameterList {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;}| {$$="";};
parameter: type IDENT {char* s = reserveStr(); strcat(s,$1); strcat(s,$2);$$=s;} | 
           type MULSTAR IDENT {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3);$$=s;};
functionDefinition: type IDENT LPARENTHESIS parameters RPARENTHESIS compoundStmt {
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3);
    strcat(s,$4); 
    strcat(s,$5); 
    strcat(s,$6);
    strcat(s,_FUNCT_DEF_RIGHT);
    $$=s;} | type MULSTAR IDENT LPARENTHESIS parameters RPARENTHESIS compoundStmt {
    char* s = reserveStr();
    strcat(s,_FUNCT_DEF_LEFT);
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3);
    strcat(s,$4); 
    strcat(s,$5); 
    strcat(s,$6);
    strcat(s,$7);
    strcat(s,_FUNCT_DEF_RIGHT);
    $$=s;};

compoundStmt: LBRACE stmtOrVarDeclares RBRACE {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;};
stmtOrVarDeclares: stmtOrVarDeclare stmtOrVarDeclares {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} | {$$="";};
stmtOrVarDeclare: stmt {$$=$1;} | scalarDeclare {$$=$1;} | arrayDeclare {$$=$1;};
stmt: expr EOL              {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,$2); strcat(s,_STMT_RIGHT);$$=s;} |
      ifOrIfElseStmt          {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;} | 
      switchStmt              {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;} | 
      whileStmt               {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;} | 
      forStmt                 {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;} | 
      returnBreakContinueStmt {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;} | 
      compoundStmt            {char* s = reserveStr(); strcat(s,_STMT_LEFT);strcat(s,$1); strcat(s,_STMT_RIGHT);$$=s;};
returnBreakContinueStmt: RETURN expr EOL {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); strcat(s,$3); $$=s;} |
                         RETURN EOL {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} | 
                         BREAK EOL {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;} |
                         CONTINUE EOL {char* s = reserveStr(); strcat(s,$1); strcat(s,$2); $$=s;};
forStmt: FOR LPARENTHESIS mayHaveExpr EOL mayHaveExpr EOL mayHaveExpr RPARENTHESIS stmt {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5); 
    strcat(s,$6); 
    strcat(s,$7); 
    strcat(s,$8);
    strcat(s,$9);
    $$=s;};
mayHaveExpr: expr {$$=$1;} | {$$="";};
whileStmt: WHILE LPARENTHESIS expr RPARENTHESIS stmt {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5);
    $$=s;} | DO stmt WHILE LPARENTHESIS expr RPARENTHESIS EOL {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5);
    strcat(s,$6);
    strcat(s,$7);
    $$=s;
    };
switchStmt: SWITCH LPARENTHESIS expr RPARENTHESIS LBRACE switchCluses RBRACE {
    char* s = reserveStr(); 
    strcat(s,$1); 
    strcat(s,$2); 
    strcat(s,$3); 
    strcat(s,$4);
    strcat(s,$5);
    strcat(s,$6);
    strcat(s,$7);
    $$=s;};
switchCluses: switchClue switchCluses {
    char* s = reserveStr(); 
    strcat(s,$1);
    strcat(s,$2);
    $$=s;} | {$$="";};
switchClue: CASE expr COLON stmts{char* s = reserveStr(); strcat(s,$1);strcat(s,$2);strcat(s,$3);strcat(s,$4);$$=s;} | 
            DEFAULT COLON stmts  {char* s = reserveStr(); strcat(s,$1);strcat(s,$2);strcat(s,$3);$$=s;};
stmts: stmt stmts {char* s = reserveStr(); strcat(s,$1);strcat(s,$2);$$=s;}| {$$="";};
ifOrIfElseStmt: IF LPARENTHESIS expr RPARENTHESIS compoundStmt   {char* s = reserveStr(); strcat(s,$1);strcat(s,$2);strcat(s,$3);strcat(s,$4);strcat(s,$5);$$=s;} |
IF LPARENTHESIS expr RPARENTHESIS compoundStmt ELSE compoundStmt {char* s = reserveStr(); strcat(s,$1);strcat(s,$2);strcat(s,$3);strcat(s,$4);strcat(s,$5);strcat(s,$6);strcat(s,$7);$$=s;};
%%
int yylex();
int main(void) {
    yyparse();
    return 0;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
    return 0;
}