/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     BEGINPARAMS = 259,
     ENDPARAMS = 260,
     BEGINLOCALS = 261,
     ENDLOCALS = 262,
     BEGINBODY = 263,
     ENDBODY = 264,
     INTEGER = 265,
     ARRAY = 266,
     OF = 267,
     IF = 268,
     THEN = 269,
     ENDIF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     FOR = 274,
     BEGINLOOP = 275,
     ENDLOOP = 276,
     CONTINUE = 277,
     READ = 278,
     WRITE = 279,
     TRUE = 280,
     FALSE = 281,
     ASSIGN = 282,
     SEMICOLON = 283,
     COLON = 284,
     COMMA = 285,
     LPAREN = 286,
     RPAREN = 287,
     L_SQUARE_BRACKET = 288,
     R_SQUARE_BRACKET = 289,
     RETURN = 290,
     MULT = 291,
     DIV = 292,
     MOD = 293,
     ADD = 294,
     SUB = 295,
     LT = 296,
     LTE = 297,
     GT = 298,
     GTE = 299,
     EQ = 300,
     NEQ = 301,
     NOT = 302,
     AND = 303,
     OR = 304,
     NUMBER = 305,
     IDENT = 306
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGINPARAMS 259
#define ENDPARAMS 260
#define BEGINLOCALS 261
#define ENDLOCALS 262
#define BEGINBODY 263
#define ENDBODY 264
#define INTEGER 265
#define ARRAY 266
#define OF 267
#define IF 268
#define THEN 269
#define ENDIF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define FOR 274
#define BEGINLOOP 275
#define ENDLOOP 276
#define CONTINUE 277
#define READ 278
#define WRITE 279
#define TRUE 280
#define FALSE 281
#define ASSIGN 282
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define LPAREN 286
#define RPAREN 287
#define L_SQUARE_BRACKET 288
#define R_SQUARE_BRACKET 289
#define RETURN 290
#define MULT 291
#define DIV 292
#define MOD 293
#define ADD 294
#define SUB 295
#define LT 296
#define LTE 297
#define GT 298
#define GTE 299
#define EQ 300
#define NEQ 301
#define NOT 302
#define AND 303
#define OR 304
#define NUMBER 305
#define IDENT 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "mini_l.y"
{
	char * identVal;
	int numVal;
}
/* Line 1529 of yacc.c.  */
#line 156 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

