all : 
	gcc -c instructions.c
	gcc -c main.c
	gcc -o homework instructions.o main.o
	./homework
