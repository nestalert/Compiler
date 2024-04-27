%option noyywrap

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "token.h"
int line = 1;

%}


DELIMITER     	[ \t]+
INT	        0[xX][0-9a-fA-F]+|[1-9][0-9]*|0[0-7]+|0\b
ID		[A-Za-z_][A-Za-z0-9_]{0,32}
FLOAT		[0-9]+((\.[0-9]+)([eE][+-]?[0-9]*)?|([eE][+-]?[0-9]*)+) 
STR		["]([^"\\\n]|\\.|\\\n)*["]
/* Αυτό εδώ γαμάει όλο το πρόγραμμα. Φταίνε τα slash; COM		^\/\/.*|\/\*(\*(?!\/)|[^*])*\*\/ */  


%%

{DELIMITER}     {}
{INT}	 	{ return INT; }
{ID}		{ return ID; }
{FLOAT}		{ return FLOAT; }
{STR}		{ return STR; }
\n              { line++; printf("\n"); }
<<EOF>>		{ printf("#END-OF-FILE#\n"); exit(0); }

%%

char *tk[] = {"DELIMITER","INT", "ID", "FLOAT", "STR"};

int main(int argc, char **argv){
        int token;
 

        if(argc == 3)
	{
                if(!(yyin = fopen(argv[1], "r"))) 
		{
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if(!(yyout = fopen(argv[2], "w"))) 
		{
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
        else if(argc == 2)
	{
                if(!(yyin = fopen(argv[1], "r"))) 
		{
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
        }

        while( (token=yylex()) >= 0)
	{
                fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tk[token-1], yytext);
        }
        return 0;
}
