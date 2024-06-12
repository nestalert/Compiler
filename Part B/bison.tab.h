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
     EOP = 258,
     UNKNOWN = 259,
     DOT = 260,
     SEMI = 261,
     HASH = 262,
     COLON = 263,
     COMMA = 264,
     FLOAT = 265,
     DOUBLE = 266,
     STR = 267,
     NEWLINE = 268,
     KEYWORD = 269,
     INT = 270,
     IDENTIFIER = 271,
     KEYWORD_IF = 272,
     AMPER = 273,
     EXCLA = 274,
     KEYWORD_RET = 275,
     KEYWORD_FOR = 276,
     KEYWORD_STR = 277,
     KEYWORD_ELSE = 278,
     KEYWORD_SIZE = 279,
     KEYWORD_CONT = 280,
     KEYWORD_CASE = 281,
     KEYWORD_INCL = 282,
     KEYWORD_FUNC = 283,
     KEYWORD_VOID = 284,
     KEYWORD_SWITCH = 285,
     KEYWORD_VAR_TYPE = 286,
     KEYWORD_SCAN = 287,
     KEYWORD_LEN = 288,
     KEYWORD_CMP = 289,
     KEYWORD_PRINT = 290,
     PAR_START = 291,
     PAR_END = 292,
     BRACE_START = 293,
     BRACE_END = 294,
     LOGICAL_OR = 295,
     LOGICAL_AND = 296,
     BRACKET_START = 297,
     BRACKET_END = 298,
     GREATER = 299,
     LESSER = 300,
     GREATER_EQ = 301,
     LESSER_EQ = 302,
     EQQ = 303,
     EQ = 304,
     NEQ = 305,
     EQ_MULTI = 306,
     EQ_DIV = 307,
     EQ_PLUS = 308,
     EQ_MINUS = 309,
     PLUS = 310,
     PLUSPLUS = 311,
     MINUS = 312,
     MINUSMINUS = 313,
     DIV = 314,
     MOD = 315,
     MULTI = 316,
     POW = 317
   };
#endif
/* Tokens.  */
#define EOP 258
#define UNKNOWN 259
#define DOT 260
#define SEMI 261
#define HASH 262
#define COLON 263
#define COMMA 264
#define FLOAT 265
#define DOUBLE 266
#define STR 267
#define NEWLINE 268
#define KEYWORD 269
#define INT 270
#define IDENTIFIER 271
#define KEYWORD_IF 272
#define AMPER 273
#define EXCLA 274
#define KEYWORD_RET 275
#define KEYWORD_FOR 276
#define KEYWORD_STR 277
#define KEYWORD_ELSE 278
#define KEYWORD_SIZE 279
#define KEYWORD_CONT 280
#define KEYWORD_CASE 281
#define KEYWORD_INCL 282
#define KEYWORD_FUNC 283
#define KEYWORD_VOID 284
#define KEYWORD_SWITCH 285
#define KEYWORD_VAR_TYPE 286
#define KEYWORD_SCAN 287
#define KEYWORD_LEN 288
#define KEYWORD_CMP 289
#define KEYWORD_PRINT 290
#define PAR_START 291
#define PAR_END 292
#define BRACE_START 293
#define BRACE_END 294
#define LOGICAL_OR 295
#define LOGICAL_AND 296
#define BRACKET_START 297
#define BRACKET_END 298
#define GREATER 299
#define LESSER 300
#define GREATER_EQ 301
#define LESSER_EQ 302
#define EQQ 303
#define EQ 304
#define NEQ 305
#define EQ_MULTI 306
#define EQ_DIV 307
#define EQ_PLUS 308
#define EQ_MINUS 309
#define PLUS 310
#define PLUSPLUS 311
#define MINUS 312
#define MINUSMINUS 313
#define DIV 314
#define MOD 315
#define MULTI 316
#define POW 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

