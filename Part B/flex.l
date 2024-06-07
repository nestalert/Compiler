

/* H anagnwsh periorizetai se ena mono arxeio kai termatizei sto prwto EOF */
%option noyywrap

/* Kwdikas C gia orismo twn apaitoumenwn header files kai twn metablhtwn.
   Otidhpote anamesa sta %{ kai %} metaferetai autousio sto arxeio C pou
   tha dhmiourghsei to Flex. */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bison.tab.h"

// Αρχικοποιούμε τις μεταβλητές για το άθροισμα των σωστών και λάθος λέξεων
int cw = 0;
int iw = 0;
// Για να καταφέρνουμε να δίνουμε στον χρήστη σωστό output.
char panic_cause_char[100];

%}
/* Onomata kai antistoixoi orismoi (ypo morfh kanonikhs ekfrashs).
   Meta apo auto, mporei na ginei xrhsh twn onomatwn (aristera) anti twn,
   synhthws idiaiterws makroskelwn kai dysnohtwn, kanonikwn ekfrasewn */

PAR_END              \)
PAR_START            \(
BRACE_END            \}
BRACE_START          \{
BRACKET_END          \]
BRACKET_START        \[
SEMI                 ;
HASH                 #
TILDE                ~
NEQ                  !=
MOD                  \%
POW                  \^
DOT                  \.
COMMA                \,
COLON                \:
AMPER                \&
LOGICAL_OR           \|\|
TYPE_EQ              ==?
TYPE_DIV             \/=?
TYPE_MULTI           \*=?
TYPE_EXCLA           \!=?
TYPE_AMPER           \&\&
TYPE_LESSER          \<=?
TYPE_GREATER         \>=?
TYPE_PLUS            \+[\+=]?
TYPE_MINUS           \-[\-=]?
STR               ["]([^"\\\n]|\\.|\\\n)*["]
INT             0[xX][0-9a-fA-F]+|[1-9][0-9]*|0[0-7]+|0\b
COMMENT              \/\*(.|\n)*?\*\/|\/\/.*
IDENTIFIER           [A-Za-z_][A-Za-z0-9_]{0,32}
FLOAT                [[0-9]+((\.[0-9]+)([eE][+-]?[0-9]*)?|([eE][+-]?[0-9]*)+)
WHITESPACE           [ \t]

%x REALLYEND
%x PREPANIC
%x PANIC

/* Gia kathe pattern (aristera) pou tairiazei ekteleitai o antistoixos
   kwdikas mesa sta agkistra. H entolh return epitrepei thn epistrofh
   mias arithmhtikhs timhs mesw ths synarthshs yylex() */


%%
{MOD}           {cw++; return MOD;                     }
{POW}           {cw++; return POW;                     }
{DOT}           {cw++; return DOT;                     }
{SEMI}          {cw++; return SEMI;                    }
{HASH}          {cw++; return HASH;                    }
{COMMA}         {cw++; return COMMA;                   }
{PAR_END}       {cw++; return PAR_END;                 }
{PAR_START}     {cw++; return PAR_START;               }
{BRACE_END}     {cw++; return BRACE_END;               }
{LOGICAL_OR}    {cw++; return LOGICAL_OR;              }
{BRACE_START}   {cw++; return BRACE_START;             }
{BRACKET_END}   {cw++; return BRACKET_END;             }
{BRACKET_START} {cw++; return BRACKET_START;           }
{FLOAT}         {cw++; return FLOAT;   }
{STR}        {cw++; return STR;  }
{INT}      {cw++; return INT;}
{IDENTIFIER}    {
      if      ( !strcmp(yytext,"do"      ) ) {cw++; return KEYWORD;}
      else if ( !strcmp(yytext,"while"   ) ) {cw++; return KEYWORD;}
      else if ( !strcmp(yytext,"break"   ) ) {cw++; return KEYWORD;}
      else if ( !strcmp(yytext,"if"      ) ) {cw++; return KEYWORD_IF;}
      else if ( !strcmp(yytext,"struct"  ) ) {cw++; return KEYWORD_STR;}
      else if ( !strcmp(yytext,"for"     ) ) {cw++; return KEYWORD_FOR;}
      else if ( !strcmp(yytext,"return"  ) ) {cw++; return KEYWORD_RET;}
      else if ( !strcmp(yytext,"case"    ) ) {cw++; return KEYWORD_CASE;}
      else if ( !strcmp(yytext,"else"    ) ) {cw++; return KEYWORD_ELSE;}
      else if ( !strcmp(yytext,"func"    ) ) {cw++; return KEYWORD_FUNC;}
      else if ( !strcmp(yytext,"void"    ) ) {cw++; return KEYWORD_VOID;}
      else if ( !strcmp(yytext,"sizeof"  ) ) {cw++; return KEYWORD_SIZE;}
      else if ( !strcmp(yytext,"include" ) ) {cw++; return KEYWORD_INCL;}
      else if ( !strcmp(yytext,"continue") ) {cw++; return KEYWORD_CONT;}
      else if ( !strcmp(yytext,"switch"  ) ) {cw++; return KEYWORD_SWITCH;}
      else if ( !strcmp(yytext,"int"     ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"char"    ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"long"    ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"short"   ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"float"   ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"const"   ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"double"  ) ) {cw++; return KEYWORD_VAR_TYPE;}
      else if ( !strcmp(yytext,"scan"  ) ) {cw++; return KEYWORD_SCAN;}
      else if ( !strcmp(yytext,"len"  ) ) {cw++; return KEYWORD_LEN;}
      else if ( !strcmp(yytext,"cmp"  ) ) {cw++; return KEYWORD_CMP;}
      else if ( !strcmp(yytext,"print"  ) ) {cw++; return KEYWORD_PRINT;}
      else                                   {cw++; return IDENTIFIER;}
}
{TYPE_EXCLA}    { if (!strcmp(yytext, "!=")) {cw++; return NEQ;        } else    { return EXCLA;  }}
{TYPE_EQ}       { if (!strcmp(yytext, "==")) {cw++; return EQQ;        } else    { return EQ;     }}
{TYPE_DIV}      { if (!strcmp(yytext, "/=")) {cw++; return EQ_DIV;     } else    { return DIV;    }}
{TYPE_MULTI}    { if (!strcmp(yytext, "*=")) {cw++; return EQ_MULTI;   } else    { return MULTI;  }}
{TYPE_LESSER}   { if (!strcmp(yytext, "<=")) {cw++; return LESSER_EQ;  } else    { return LESSER; }}
{TYPE_GREATER}  { if (!strcmp(yytext, ">=")) {cw++; return GREATER_EQ; } else    { return GREATER;}}
{TYPE_AMPER}    { if (!strcmp(yytext, "&&")) {cw++; return LOGICAL_AND;} else    { return AMPER;  }}
{TYPE_MINUS}    { if (!strcmp(yytext, "--")) {cw++; return MINUSMINUS; } else if (!strcmp(yytext, "-=")) { return EQ_MINUS; } else { return MINUS;}}
{TYPE_PLUS}     { if (!strcmp(yytext, "++")) {cw++; return PLUSPLUS;   } else if (!strcmp(yytext, "+=")) { return EQ_PLUS;  } else { return PLUS; }}
{WHITESPACE}    { }
{COMMENT}       {}
\n              {return NEWLINE; }
 /*Εδώ το flex "πιάνει" οποιονδήποτε άλλο χαρακτήρα που δεν περιγράφεται απο
  τις παραπάνω κανονικές εκφράσεις.*/
<INITIAL>.  { BEGIN(PREPANIC); strcpy(panic_cause_char,yytext); iw++; return UNKNOWN;}
<PREPANIC>. { BEGIN(PANIC); printf("Unknown word: '%s%s",panic_cause_char,yytext);}
<PANIC>{WHITESPACE} { printf("'\n"); BEGIN(INITIAL);}
<PANIC>\n           { printf("'\n"); BEGIN(INITIAL);}
<PANIC>.            { ECHO; }
 /*Εδώ καλούμε ένα τμήμα κώδικα που μας βοηθά να δώσουμε ένα token στον bison
  για να δηλώσουμε το τέλος του αρχείου, αποτρέποντας όμως τον bison να
  τερματίζει άμεσα την εκτέλεση. Έτσι, καταφέρνουμε να εκτελούμε την συνάρτηση
  exp_report() στο bison-SA.y, για να ανεφέρουμε τον αριθμό των σωστών και
  λανθασμένων λέξεων και εκφράσεων.*/
<INITIAL><<EOF>>  { BEGIN(REALLYEND);
                    printf("Syntax Report:\nThe program counted (%d) words,\nOf which (%d) were correct,\nAnd (%d) were incorrect.\n",cw+iw,cw, iw);
                    return EOP; }
 /*Εδώ, μετά την πάροδο των προηγούμενων, "πραγματικά" τερματίζουμε την
  εκτέλεση του flex, έχουμε ήδη τυπώσει την αναφορά με την exp_report() με το
  bison, και αρχίζουμε να τερματίζουμε το πρόγραμμα συνολικά.*/
<REALLYEND><<EOF>> {yyterminate();}
%%
/* Το πρόγραμμα αυτό δεν έχει main(), καθώς δεν τρέχει αυτόνομα, είναι απλά ο
   λεκτικός αναλυτής, η συντακτική ανάλυση γίνεται από τον bison. */