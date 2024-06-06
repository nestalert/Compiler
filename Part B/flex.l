%option noyywrap

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 /*Εισαγωγή του header file που περιέχει τα tokens*/
#include "token.h"
 /*Δήλωση μεταβλητής για τον αριθμό της γραμμής*/
int line = 1;
int cw = 0;
int iw = 0;

%}
 /*Δήλωση των regular expressions για τα διάφορα tokens*/
SEMI                 ;
PAR_END              \)
PAR_START            \(
BRACE_END            \}
BRACE_START          \{
BRACKET_END          \]
BRACKET_START        \[
DELIMITER       [ \t]+
MATH            (\+{1}|-{1}|\*|\/)
OPERATOR        (\+{2}|-{2}|%|=|\+=|-=|\*=|\/=|!|&&|\|\||==|!=|<|>|<=|>=|&)
KWRD            (case|func|else|sizeof|struct|case|void|do)
KWRD_TYPE       (int|float|double|long|short|const)
KWRD_STATE      (break|continue|return)
KWRD_LOOP       (if|for|switch|while)
INT             0[xX][0-9a-fA-F]+|[1-9][0-9]*|0[0-7]+|0\b
ID              [A-Za-z_][A-Za-z0-9_]{0,32}
FLOAT           [0-9]+((\.[0-9]+)([eE][+-]?[0-9]*)?|([eE][+-]?[0-9]*)+) 
STR             ["]([^"\\\n]|\\.|\\\n)*["]
COM_S           \/\/.*$
COM_M           ^(\/\*).*(\*\/)$
CATCHALL        [^ {DELIMITER}\n]+

%%
 /*Κανόνες για την αναγνώριση των tokens*/
{SEMI}          {cw++; return SEMI; }
{DELIMITER}     {}
{OPERATOR}      {cw++; return OPERATOR; }
{MATH}          {cw++; return MATH; }
{KWRD}          {cw++; return KWRD; }
{KWRD_TYPE}     {cw++; return KWRD_TYPE; }
{KWRD_STATE}    {cw++; return KWRD_STATE; }
{KWRD_LOOP}     {cw++; return KWRD_LOOP; }
{PAR_START}     {cw++; return PAR_START; } 
{PAR_END}       {cw++; return PAR_END; }
{BRACE_START}   {cw++; return BRACE_START; }
{BRACE_END}     {cw++; return BRACE_END; }
{BRACKET_START} {cw++; return BRACKET_START; }
{BRACKET_END}   {cw++; return BRACKET_END; }
{INT}           {cw++; return INT; }
{ID}            {cw++; return ID; }
{FLOAT}         {cw++; return FLOAT; }
{STR}           {cw++; return STR; }
{COM_S}         {}
{COM_M}         {}
\n              {line++;}
{CATCHALL}      {iw++; return TK_CATCHALL; }
<<EOF>>         { printf("Number of lines:%d\nCorrect words:%d\nIncorrect words:%d\n",line,cw,iw); }

%%
