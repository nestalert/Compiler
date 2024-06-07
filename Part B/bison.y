
%{
/* Orismoi kai dhlwseis glwssas C. Otidhpote exei na kanei me orismo h
   arxikopoihsh metablhtwn & synarthsewn, arxeia header kai dhlwseis #define
   mpainei se auto to shmeio */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern int yyparse(void);

extern FILE *yyin;

void yyerror(char *);
void exp_report(int,int);
void yytrue (char *);

int ce  = 0;
int ie  = 0;

int function_start_line=0;
int function_started_flag=0;

// Για την μέτρηση γραμμών
int line=1;
%}


// Ορισμός των λεκτικών μονάδων
%token EOP
    UNKNOWN
     DOT
     SEMI
     HASH
     COLON
     COMMA
     FLOAT
     DOUBLE
     STR
     NEWLINE
     KEYWORD
     INT
     IDENTIFIER
     KEYWORD_IF
     AMPER EXCLA
     KEYWORD_RET
     KEYWORD_FOR
     KEYWORD_STR
     KEYWORD_ELSE
     KEYWORD_SIZE
     KEYWORD_CONT
     KEYWORD_CASE
     KEYWORD_INCL
     KEYWORD_FUNC
     KEYWORD_VOID
     KEYWORD_SWITCH
     KEYWORD_VAR_TYPE
     KEYWORD_SCAN
     KEYWORD_LEN
     PAR_START PAR_END
     BRACE_START BRACE_END
     LOGICAL_OR LOGICAL_AND
     BRACKET_START BRACKET_END
     GREATER LESSER GREATER_EQ LESSER_EQ
     EQQ EQ NEQ EQ_MULTI EQ_DIV EQ_PLUS EQ_MINUS
     PLUS PLUSPLUS MINUS MINUSMINUS DIV MOD MULTI POW

// Ορισμός προτεραιώτητας στα tokens
%left  POW
%left  PLUS MINUS
%left  DIV MULTI

%%

/* Orismos twn grammatikwn kanonwn. Kathe fora pou antistoixizetai enas
   grammatikos kanonas me ta dedomena eisodou, ekteleitai o kwdikas C pou
   brisketai anamesa sta agkistra. H anamenomenh syntaksh einai: onoma :
   kanonas { kwdikas C } */
program:
    program valid
    |
    ;


/* Εδώ ορίζεται το τι μπορεί να είναι κομμάτι μίας έκφρασης.
   Ένας χαρακτήρας ή ένας αριθμός */
expr_part:
      FLOAT
    | STR
    | DOUBLE
    | KEYWORD
    | INT
    | IDENTIFIER
    | UNKNOWN { printf("(X) \tLine:  %d \t",line); }
    ;

// Εδώ ορίζονται οι τελεστές
operator:
      EQ
    | EQQ
    | NEQ
    | DIV
    | POW
    | PLUS
    | MINUS
    | MULTI
    | EQ_DIV
    | EQ_PLUS
    | EQ_MULTI
    | EQ_MINUS
    ;

in_de_crement_operator:
    | MINUSMINUS
    | PLUSPLUS
    ;

// Εδώ ορίζονται ποιές είναι οι εκφράσεις υπο επεξεργασία
expr_proc:
      expr_part operator expr_part EQ expr_part
    | expr_part operator expr_part
    | expr_part in_de_crement_operator
    | in_de_crement_operator expr_part
    ;

/* Εδώ ορίζεται το "σώμα" του κώδικα, δηλαδή ένας αριθμός συντακτικά
   σωστών εκφράσεων. */
body:
    body valid
    | valid
    |
    ;

elements:
    expr_part COMMA elements
    | expr_part
    ;

// Εδώ ορίζεται τι μπορεί να βρίσκεται μέσα σε αγγύλες
in_brack:
    BRACKET_START elements BRACKET_END

// Εδώ ορίζεται τι μπορεί να βρίσκεται μέσα σε άγκυστρο
in_brace:
    BRACE_START body BRACE_END

struct:
      KEYWORD_STR IDENTIFIER in_brace
    | KEYWORD_STR IDENTIFIER NEWLINE in_brace
    ;

loops:
    for_grammar

// Εδώ ορίζεται τι μπορεί να είναι ορίσματα μιας συνάρτησης
arguments:
      arguments expr_part COMMA expr_part
    | expr_part COMMA expr_part
    | KEYWORD_VOID
    |
    ;

// Εδώ ορίζεται τι θεωρείται ορισμός μιας συνάρτησης
func_par:
      KEYWORD_FUNC IDENTIFIER PAR_START arguments PAR_END {ce++; yytrue("arguments"); }
    | KEYWORD_FUNC IDENTIFIER PAR_START expr_part PAR_END {ce++; yytrue("argument"); }
    ;

// Εδώ ορίζεται τι θεωρείται ορισμός μιας μεταβλητής
declaration:
      KEYWORD_VAR_TYPE IDENTIFIER
    | KEYWORD_VAR_TYPE IDENTIFIER EQ expr_proc
    | KEYWORD_VAR_TYPE IDENTIFIER in_brack EQ expr_proc
    | KEYWORD_VAR_TYPE IDENTIFIER in_brack EQ BRACE_START elements BRACE_END
    | KEYWORD_VAR_TYPE IDENTIFIER in_brack
    | KEYWORD_VAR_TYPE IDENTIFIER EQ sizeof
    ;

// Εδώ ορίζεται τι θεωρείται ανάθεση σε μεταβλητή
assignment:
    IDENTIFIER EQ expr_proc

// Ο κανόνας για τις επιστροφές
return:
    KEYWORD_RET expr_proc
    |
    |
    ;

// Ο κανόνας για τα includes
include:
    HASH KEYWORD_INCL LESSER IDENTIFIER DOT IDENTIFIER GREATER
    | HASH KEYWORD_INCL STR
    ;
scan:
    KEYWORD_SCAN PAR_START expr_part PAR_END SEMI
    |
    ;
len:
    KEYWORD_LEN PAR_START PAR_END SEMI
    | KEYWORD_LEN PAR_START expr_part PAR_END SEMI 
    ;
cases:
    KEYWORD_CASE COLON valid NEWLINE cases
    | KEYWORD_CASE COLON valid NEWLINE

case_grammar:
    KEYWORD_SWITCH PAR_START expr_proc PAR_END BRACE_START cases BRACE_END
    | KEYWORD_SWITCH PAR_START expr_part PAR_END BRACE_START cases BRACE_END
    ;

else_grammar:
    KEYWORD_ELSE in_brace

if_grammar:
      KEYWORD_IF PAR_START expr_proc PAR_END in_brace
    | KEYWORD_IF PAR_START expr_proc PAR_END expr_proc NEWLINE
    ;

for_grammar:
      KEYWORD_FOR PAR_START for_args PAR_END in_brace
    | KEYWORD_FOR PAR_START for_args PAR_END expr_proc NEWLINE
    ;

for_args:
      expr_proc SEMI expr_proc SEMI expr_proc
    | SEMI expr_proc SEMI expr_proc
    | expr_proc SEMI SEMI expr_proc
    | expr_proc SEMI SEMI
    | SEMI expr_proc SEMI
    | SEMI SEMI expr_proc
    | SEMI SEMI
    ;

// Ο κανόνας αυτός χρησιμοποιήται μαζί με το sizeof (πχ. sizeof(smth) * 10)
// Με το "* 10" να είναι το "half_expr"
half_expr:
      operator IDENTIFIER
    | operator INT
    | operator DOUBLE
    | operator FLOAT
    ;

// Ο κανόνας για το sizeof
sizeof:
      KEYWORD_SIZE PAR_START KEYWORD_VAR_TYPE PAR_END
    | KEYWORD_SIZE PAR_START KEYWORD_VAR_TYPE PAR_END half_expr
    ;

// Εδώ είναι όλοι οι κανόνες των if/else/case
conditionals:
      if_grammar
    | else_grammar
    | case_grammar
    ;

// Εδώ ορίζεται τι θεωρείται συντακτικά σώστο
valid:
     return      SEMI { ce++; yytrue("return");}
   | sizeof      SEMI { ce++; yytrue("sizeof");}
   | include     SEMI { ce++; yytrue("include");}
   | expr_proc   SEMI { ce++; yytrue("expression");}
   | assignment  SEMI { ce++; yytrue("assignment");}
   | declaration SEMI { ce++; yytrue("declaration");}
   | loops            { ce++; yytrue("loop clause");}
   | in_brace         { ce++;
                        if( function_started_flag)
                        {
                            function_started_flag=0;
                            if (line == function_start_line)
                            {
                               printf("Line:  %d \tFunction is correct.\n",function_start_line);
                            } else if (line >= function_start_line) {
                               printf("Lines: %d-%d\tFunction is correct.\n",function_start_line, line);
                            }
                        } else {
                            function_started_flag=1;
                            function_start_line=line;
                        }
                      }
   | struct SEMI      { ce++; yytrue("struct");}
   | func_par         { ce++; yytrue("function declaration");}
   | conditionals     { ce++; yytrue("conditional clause");  }
   | scan             { ce++; yytrue("scan");  }
   | len              { ce++; yytrue("len");  }
   | NEWLINE          { line++; }
   | EOP              { exp_report(ce,ie); }
   | error            { ie++;}
   ;

%%



// Αυτή η συνάρτηση τυπώνει το πλήθος των σωστών και λάθος λέξεων και εκφράσεων
// Ενεργοποιήται μόλις ο bison δεχθεί token EOP
// (End of Parse, δίνεται στο τέλος του αρχείου)
void exp_report (int ce,int ie) {
    printf("\n===================\n"
        "\nThe program counted (%d) expressions,\nOf which (%d) were correct,\nAnd (%d) were incorrect.\n",ce+ie,ce,ie);
}

void yytrue (char * type) 
{
    printf("Line:%d \tCorrect %s\n"    ,line, type);
}

void yyerror(char *s) 
{
    fprintf(stderr, "(X)\tOn Line:%d \tError: %s\n",line, s);
}

//Αναγκαίες εντολές για να γίνεται το debugging στον Bison
#ifdef YYDEBUG
  int yydebug = 1;
#endif

/* H synarthsh main pou apotelei kai to shmeio ekkinhshs tou programmatos.
   Sthn sygkekrimenh periptwsh apla kalei thn synarthsh yyparse tou Bison
   gia na ksekinhsei h syntaktikh analysh. */
int main(int argc, char* argv[]) 
{
    FILE *fp;
    if(argc<2)
    {
        printf("No arguments found, defaulting to input.txt...\n");
        fp = fopen("input.txt","r");
    }
    if(argc==2)
         fp = fopen(argv[1],"r");
    yyin = fp;
    // Set Flex to read from it instead of defaulting to STDIN:
    printf("\nBeginning analysis:\n");
    yyparse();
}