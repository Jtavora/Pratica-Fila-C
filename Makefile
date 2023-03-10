programa: arq.o
	gcc fila.o functions.o -o programa.exe

arq.o: Fila.h Functions.c Fila.c
	gcc -c Functions.c -o functions.o
	gcc -c Fila.c -o fila.o

run: programa
	./programa.exe

clean:
	rm fila.o functions.o programa.exe

all: programa run clean