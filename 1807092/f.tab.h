
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VAR = 259,
     START = 260,
     IS = 261,
     PLUS = 262,
     MINUS = 263,
     MUL = 264,
     DIV = 265,
     MOD = 266,
     INCREMENT = 267,
     XCHANGE = 268,
     CONVERT_TO_BINARY = 269,
     DECREMENT = 270,
     POW = 271,
     GT = 272,
     LT = 273,
     LTE = 274,
     GTE = 275,
     EQL = 276,
     NEQL = 277,
     NONE = 278,
     ELIS = 279,
     INT = 280,
     FLOAT = 281,
     CHAR = 282,
     CBS = 283,
     CBE = 284,
     FLOOP = 285,
     WHILE = 286,
     EVEN_OR_ODD = 287,
     DISPLAY = 288,
     FACTORIAL = 289,
     IF = 290,
     DEFAULT = 291,
     GO = 292,
     CASE = 293,
     MIN = 294,
     MAX = 295,
     ISPRIME = 296,
     FUNCTION = 297,
     ARRAY = 298,
     ARRINT = 299,
     ARRFLOAT = 300,
     ARRCHAR = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 39 "f.y"

	char text[1009];
	int val;



/* Line 1676 of yacc.c  */
#line 105 "f.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


