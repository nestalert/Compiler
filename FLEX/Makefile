all:
	flex -osimple-flex-code.c flex.l
	gcc -o simple-flex-code simple-flex-code.c
	./simple-flex-code input.txt
clean:
	rm simple-flex-code simple-flex-code.c
