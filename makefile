all:
		gcc -o main main.c projet.c

main.o: main.c projet.h
		gcc -c main.c

main: main.o projet.o
	gcc -o main main.o projet.o

projet.o: projet.c projet.h
	gcc -c projet.c

clean:
		rm main.o 
		rm projet.o
		rm main