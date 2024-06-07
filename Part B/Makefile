all:
	bison -d bison.y
	flex flex.l 
	gcc -o project bison.tab.c lex.yy.c
	./project
clean:
	rm project bison.tab.c lex.yy.c bison.tab.h

