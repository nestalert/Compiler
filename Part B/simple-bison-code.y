/* 
Declerations. 
Remember, extern is used when a variable comes from another file (flex.l, in this instance).
It tells the compiler to declare the variable, but not to define it.
So, anything that comes from flex.l needs to be marked extern.
*/

%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	extern int yylex(void);
	extern int yyparse(void);

	extern FILE *yyin, *yyout;

	extern int cw;
	extern int iw;

	void yyerror(char *);
	
	int ce = 0;
	int ie = 0;
%}

/* Οι λεκτικές μονάδες του flex.l. Αν το flex δεν επιστρέφει κάτι μπορούμε να το αγνοήσουμε εδώ.*/
%token  SEMI OPERATOR MATH KWRD KWRD_TYPE KWRD_STATE KWRD_LOOP PAR_START PAR_END BRACE_START BRACE_END BRACKET_START BRACKET_END INT ID FLOAT STR CATCHALL


/* Προτεραιότητες. Η πάνω πάνω ειναι η ΛΙΓΟΤΕΡΟ σημαντική. */
%left PLUS

%%

/* Orismos twn grammatikwn kanonwn. Kathe fora pou antistoixizetai enas grammatikos
   kanonas me ta dedomena eisodou, ekteleitai o kwdikas C pou brisketai anamesa sta
   agkistra. H anamenomenh syntaksh einai:
				onoma : kanonas { kwdikas C } */
program:
        program expr NEWLINE { printf("%d\n", $2); }
        |
        ;
expr:
        INTCONST         { $$ = $1; }
	| VARIABLE	 { $$ = $1; }
        | expr PLUS expr { $$ = $1 + $3; }
/* FILL ME */
        ;
%%

/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}


/* Ψάχνουμε 4 πράγματα: Σωστές Λέξεις(cw), Σωστές Εκφράσεις(ce), Λάθος Λέξεις(iw), Λάθος Εκφράσεις(ie).
Οι λέξεις έρχονται από το flex.l και τυπώνωνται απο εκεί, Οι εκφράσεις υπολογίζονται τοπικά. */
int main(void)  
{
	if(argc == 2)
		yyin=fopen(argv[1],"r");
	else if(argc > 2)
	{
	yyin=fopen(argv[1],"r");
	yyout=fopen(argv[2],"w");
	}
	else
		yyin=stdin;
        yyparse();
        return 0;
}
