all:
	bison -d bison.y
	flex flex.l 
	gcc -o project bison.tab.c lex.yy.c
	./project
	project.exe
clean:
	rm simple-bison-code.c simple-bison-code
