%{
#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos; 
void yyerror(const char * msg) {
	printf("Error: On line %d, column %d: %s \n", currLine, currPos, msg);
}
int yylex();
%}

%union{
	char * identVal;
	int numVal;
}

%error-verbose

%start program

%token FUNCTION BEGINPARAMS ENDPARAMS BEGINLOCALS ENDLOCALS BEGINBODY ENDBODY INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE READ WRITE TRUE FALSE ASSIGN SEMICOLON COLON COMMA LPAREN RPAREN L_SQUARE_BRACKET R_SQUARE_BRACKET RETURN MULT DIV MOD ADD SUB LT LTE GT GTE EQ NEQ NOT AND OR

%token <numVal> NUMBER
%token <identVal> IDENT

%right ASSIGN
%left OR
%left AND
%right NOT
%left LT LTE GT GTE EQ NEQ
%left ADD SUB
%left MULT DIV MOD

%%
program:	functions
       		{printf("program -> functions\n");}
		| error {yyerrok; yyclearin;}
       		;

functions: 	/*epsilon*/
	 	{printf("functions -> epsilon\n");}
		| function functions
		  {printf("functions -> function functions\n");}
		;

function:	FUNCTION ident SEMICOLON BEGINPARAMS declarations ENDPARAMS BEGINLOCALS declarations ENDLOCALS BEGINBODY statements ENDBODY
		{printf("function -> FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
		;

declarations:	/*epsilon*/
	    	{printf("declarations -> epsilon\n");}
		| declaration SEMICOLON declarations
		  {printf("declarations -> declaration SEMICOLON declarations\n");}
		| declaration error {yyerrok;}
		;

declaration:	identifiers COLON INTEGER
	   	{printf("declaration -> identifiers COLON INTEGER\n");}
		| identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		  {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
		;

identifiers:	ident
	  	{printf("identifiers -> ident\n");}
		| ident COMMA identifiers
		  {printf("identifiers -> ident COMMA identifiers\n");}
		;

ident:		IDENT
     		{printf("ident -> IDENT %s\n", $1);}
		;

statements:	statement SEMICOLON statements
	  	{printf("statements -> statement SEMICOLON statements\n");}
		| statement SEMICOLON
		  {printf("statements -> statement SEMICOLON\n");}
		| statement error {yyerrok;}
		;

statement:	svar
	  	{printf("statements -> svar\n");}
	  	| sif
		  {printf("statements -> sif\n");}
		| swhile
		  {printf("statements -> swhile\n");}
		| sdo
		  {printf("statements -> sdo\n");}
		| sfor
		  {printf("statements -> sfor\n");}
		| sread
		  {printf("statements -> sread\n");}
		| swrite
		  {printf("statements -> swrite\n");}
		| scontinue
		  {printf("statements -> scontinue\n");}
		| sreturn
		  {printf("statements -> sreturn\n");}
		;

svar:		var ASSIGN expression
    		{printf("svar -> var ASSIGN expression\n");}
		;

sif:		IF bool_expr THEN statements ENDIF
   		{printf("sif -> IF bool_expr THEN statements ENDIF\n");}
		| IF bool_expr THEN statements ELSE statements ENDIF
		{printf("sif -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
		;

swhile:		WHILE bool_expr BEGINLOOP statements ENDLOOP
      		{printf("swhile -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
		;

sdo:		DO BEGINLOOP statements ENDLOOP WHILE bool_expr
   		{printf("sdo ->  DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
		;

sfor:		FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP
    		{printf("sfor ->  FOR var ASSIGN NUMBER SEMI COLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP statements ENDLOOP\n");}
		;

varLoop:	/*epsilon*/
       		{printf("varLoop -> epsilon\n");}
		| COMMA var varLoop
		  {printf("varLoop ->  COMMA var varLoop\n");}
		;

sread:		READ var varLoop
     		{printf("sread -> READ var varLoop\n");}
		;
     
swrite:		WRITE var varLoop
      		{printf("swrite -> WRITE var varLoop\n");}
		;

scontinue:	CONTINUE
	 	{printf("scontinue -> CONTINUE\n");}
		;

sreturn:	RETURN expression
       		{printf("sreturn -> RETURN expression\n");}
		;

bool_expr:	relation_exprs
	 	{printf("bool_expr -> relation_exprs\n");}
		| bool_expr OR relation_exprs
		  {printf("bool_expr -> bool_expr OR relation_exprs\n");}
		;

relation_exprs:	relation_expr
	      	{printf("relation_exprs -> relation_expr\n");}
		| relation_exprs AND relation_expr
		  {printf("relation_exprs -> relation_expres AND relation_expr\n");}
		;

relation_expr:	NOT ece
	     	{printf("relation_expr -> NOT ece\n");}
		| ece
		  {printf("relation_expr -> ece\n");}
		| TRUE
		  {printf("relation_expr -> TRUE\n");}
		| FALSE
		  {printf("relation_expr -> FALSE\n");}
		| LPAREN bool_expr RPAREN
		  {printf("relation_expr -> LPAREN bool_expr RPAREN\n");}
		;

ece:		expression comp expression
   		{printf("ece -> expression comp expression\n");}
		;

comp:		EQ
    		{printf("comp -> EQ\n");}
		| NEQ
		  {printf("comp -> NEQ\n");}
		| LT
		  {printf("comp -> LT\n");}
		| GT
		  {printf("comp -> GT\n");}
		| LTE
		  {printf("comp -> LTE\n");}
		| GTE
		  {printf("comp -> GTE\n");}
		;

expression:	multi_expr addSubExpr
	  	{printf("expression -> multi_exp addSubExpr\n");}
		| error {yyerrok;}
		;

addSubExpr:	/*epsilon*/
	  	{printf("addSubExpr -> epsilon\n");}
		| ADD expression
		  {printf("addSubExpr -> ADD expression\n");}
		| SUB expression
		  {printf("addSubExpr -> SUB expression\n");}
		;

multi_expr:	term
	  	{printf("multi_expr -> term\n");}
		| term MULT multi_expr
		  {printf("multi_expr -> term MULT multi_expr\n");}
		| term DIV multi_expr
		  {printf("multi_expr -> term DIV multi_expr\n");}
		| term MOD multi_expr
		  {printf("multi_expr -> term MOD multi_expr\n");}
		;

term:		SUB var
    		{printf("term -> SUB var\n");}
		| var
		  {printf("term -> var\n");}
		| SUB NUMBER
		  {printf("term -> SUB NUMBER\n");}
		| NUMBER
		  {printf("term -> NUMBER\n");}
		| LPAREN expression RPAREN
		  {printf("term -> LPAREN expression RPAREN\n");}
		| ident LPAREN expression expressionLoop RPAREN
		  {printf("term -> ident LPAREN expression expressionLoop RPAREN\n");}
		;

expressionLoop:	/*epsilon*/
	      	{printf("expressionLoop -> epsilon\n");}
	      	| COMMA expression expressionLoop
	      	  {printf("exprssionLoop -> COMMA expression expressionLoop\n");}
		;

var:		ident
   		{printf("var -> ident\n");}
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		  {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BACKET\n");}
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		  {printf("var -> ident L_SQSUARE_BRACKET expression R_SQUARE_BRACKET\n");}
		;

%%

int main(int argc, char ** argv) {
	if (argc >= 2) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			yyin = stdin;
		}
	}
	else {
		yyin = stdin;
	}
	yyparse();
	return 1;
}