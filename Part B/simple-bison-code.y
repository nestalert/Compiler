/* 
Declerations. 
Remember, extern is used when a variable comes from another file (flex.l, in this instance).
It tells the compiler to declare the variable, but not to define it.
So, anything that comes from flex.l needs to be marked extern.
*/

%{
	#include <stdio.h>
	#include <stdlib.h>

	extern int yylex(void);
	void yyerror(char *);

	extern FILE *yyin, *yyout;

	extern int cw;
	extern int iw;
	int ce = 0;
	int ie = 0;
%}

/* Οι λεκτικές μονάδες του flex.l. Αν το flex δεν επιστρέφει κάτι μπορούμε να το αγνοήσουμε εδώ.*/
%token INT ID FLOAT STR KEYWORD OPERATOR ASSIGN CATCHALL 


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

/* H synarthsh yylex ylopoiei enan autonomo lektiko analyth. Edw anagnwrizontai
   oi lektikes monades ths glwssas Uni-C */
int yylex() {
	char buf[100];
	char num = 0;
	int zero = 0;
        char c;

	// Diabase enan xarakthra apo thn eisodo
        c = getchar();

        // Ean o xarakthras einai keno h tab, agnohse ton kai diabase ton epomeno
        while (c == ' ' || c == '\t') { yylval = 0; c = getchar(); }

	// An brethei enas xarakthras A-Z, a-z h _ tote prokeitai gia metablhth
	if ((c >= 'A' && c <= 'Z') ||
	    (c >= 'a' && c <= 'z') ||
	    (c == '_'))
	{
		sprintf(buf, "%c", c);
		c = getchar();
		// O epomenos xarakthras meta ton prwto mporei na einai kai pshfio 0-9
		while((c >= 'A' && c <= 'Z') ||
		      (c >= 'a' && c <= 'z') ||
		      (c >= '0' && c <= '9') ||
		      (c == '_'))
		{
			sprintf(buf, "%s%c", buf, c);
			c = getchar();
		}
		ungetc(c, stdin);
		yylval = 0;
		printf("\tScanner returned: VARIABLE (%s)\n", buf);
		return VARIABLE;
	}

        // Gia kathe xarakthra pou einai arithmos ginetai h topothethsh tou sthn yylval
        while (c >= '0' && c <= '9')
        {
		if (zero > 0) { zero = 0; yyerror("integer starting with zero"); exit(1); }
		if (c == '0') zero++;
		if (num == 0) yylval = 0;
                yylval = (yylval * 10) + (c - '0');
		num = 1;
		c = getchar();
        }
        if (num)
	{
		ungetc(c, stdin);
		printf("\tScanner returned: INTCONST (%d)\n", yylval);
		return INTCONST;
	}

	// Ean o xarakthras einai to symbolo + prokeitai gia prosthesh
        if (c == '+')
	{
		printf("\tScanner returned: PLUS (%c)\n", c);
		return PLUS;
	}

	// Ean prokeitai gia ton eidiko xarakthra neas grammhs
        if (c == '\n')
	{
		yylval = 0;
		printf("\tScanner returned: NEWLINE (\\n)\n");
		return NEWLINE;
	}

	// Ean prokeitai gia ton eidiko xarakthra telous arxeiou
	if (c == EOF)
	{
		printf("\tScanner returned: EOF (EOF)\n");
		exit(0);
	}

	/* FILL ME */

	// Gia otidhpote allo kalese thn yyerror me mhnyma lathous
	yyerror("invalid character");
}


/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}


/* Ψάχνουμε 4 πράγματα: Σωστές Λέξεις(cw), Σωστές Εκφράσεις(ce), Λάθος Λέξεις(iw), Λάθος Εκφράσεις(ie).
Οι λέξεις έρχονται από το flex.l με ένα τρομερό κώδικα που δεν έχω γράψει ακόμα.
Οι εκφράσεις υπολογίζονται τοπικά. */
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
