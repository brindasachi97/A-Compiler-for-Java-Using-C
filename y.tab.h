/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NUM = 258,
    DECIMAL = 259,
    IDENTIFIER = 260,
    CONSTANT = 261,
    STRING_LITERAL = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NE_OP = 268,
    DEQ = 269,
    AND_OP = 270,
    OR_OP = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    TYPEDEF = 277,
    STATIC = 278,
    CHAR = 279,
    INT = 280,
    FLOAT = 281,
    CONST = 282,
    VOID = 283,
    IF = 284,
    ELSE = 285,
    FOR = 286,
    GOTO = 287,
    CONTINUE = 288,
    BREAK = 289,
    RETURN = 290,
    TRUE1 = 291,
    FALSE1 = 292,
    BOOLEAN = 293,
    IMPORT = 294,
    CLASS = 295,
    PACKAGE = 296,
    MAIN = 297,
    STRING = 298,
    ARGS = 299,
    PUBLIC = 300,
    SOP = 301,
    OC = 302,
    CC = 303,
    OF = 304,
    CF = 305,
    OS = 306,
    FS = 307,
    ADD = 308,
    SUB = 309,
    MUL = 310,
    DIV = 311,
    LT = 312,
    GT = 313,
    COMMA = 314,
    COL = 315,
    DOT = 316,
    BIT_AND = 317,
    NOT = 318,
    EXP = 319,
    BIT_OR = 320,
    QUE = 321,
    SEMC = 322,
    NE = 323
  };
#endif
/* Tokens.  */
#define NUM 258
#define DECIMAL 259
#define IDENTIFIER 260
#define CONSTANT 261
#define STRING_LITERAL 262
#define INC_OP 263
#define DEC_OP 264
#define LE 265
#define GE 266
#define EQ 267
#define NE_OP 268
#define DEQ 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define TYPEDEF 277
#define STATIC 278
#define CHAR 279
#define INT 280
#define FLOAT 281
#define CONST 282
#define VOID 283
#define IF 284
#define ELSE 285
#define FOR 286
#define GOTO 287
#define CONTINUE 288
#define BREAK 289
#define RETURN 290
#define TRUE1 291
#define FALSE1 292
#define BOOLEAN 293
#define IMPORT 294
#define CLASS 295
#define PACKAGE 296
#define MAIN 297
#define STRING 298
#define ARGS 299
#define PUBLIC 300
#define SOP 301
#define OC 302
#define CC 303
#define OF 304
#define CF 305
#define OS 306
#define FS 307
#define ADD 308
#define SUB 309
#define MUL 310
#define DIV 311
#define LT 312
#define GT 313
#define COMMA 314
#define COL 315
#define DOT 316
#define BIT_AND 317
#define NOT 318
#define EXP 319
#define BIT_OR 320
#define QUE 321
#define SEMC 322
#define NE 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "codeintar_14AprWorking.y" /* yacc.c:1909  */

        int number;
        char *string;
        bool *boo;
       
        

#line 198 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
