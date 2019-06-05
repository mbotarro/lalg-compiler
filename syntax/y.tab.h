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
     T_EOF = 258,
     ID = 259,
     NUM_INT = 260,
     NUM_REAL = 261,
     ABRE_PAR = 262,
     FECHA_PAR = 263,
     PT = 264,
     VIR = 265,
     DOIS_PTS = 266,
     PT_VIR = 267,
     ATRIB = 268,
     IGUAL = 269,
     DIF = 270,
     MAIOR_IGUAL = 271,
     MENOR_IGUAL = 272,
     MAIOR = 273,
     MENOR = 274,
     MAIS = 275,
     MENOS = 276,
     MULT = 277,
     DIV = 278,
     PROGRAM = 279,
     CONST = 280,
     VAR = 281,
     REAL = 282,
     INT = 283,
     PROCEDURE = 284,
     T_BEGIN = 285,
     END = 286,
     READ = 287,
     WRITE = 288,
     WHILE = 289,
     DO = 290,
     FOR = 291,
     TO = 292,
     IF = 293,
     THEN = 294,
     ELSE = 295
   };
#endif
/* Tokens.  */
#define T_EOF 258
#define ID 259
#define NUM_INT 260
#define NUM_REAL 261
#define ABRE_PAR 262
#define FECHA_PAR 263
#define PT 264
#define VIR 265
#define DOIS_PTS 266
#define PT_VIR 267
#define ATRIB 268
#define IGUAL 269
#define DIF 270
#define MAIOR_IGUAL 271
#define MENOR_IGUAL 272
#define MAIOR 273
#define MENOR 274
#define MAIS 275
#define MENOS 276
#define MULT 277
#define DIV 278
#define PROGRAM 279
#define CONST 280
#define VAR 281
#define REAL 282
#define INT 283
#define PROCEDURE 284
#define T_BEGIN 285
#define END 286
#define READ 287
#define WRITE 288
#define WHILE 289
#define DO 290
#define FOR 291
#define TO 292
#define IF 293
#define THEN 294
#define ELSE 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

