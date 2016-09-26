main: main.o
	gcc main.o -o main 
main.o: hello.c
	gcc -c hello.c -o main.o
