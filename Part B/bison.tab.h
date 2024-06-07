/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
