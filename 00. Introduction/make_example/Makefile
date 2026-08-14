# Example of a Makefile
# Author: Ariel Ortiz

CC=g++ -g

main: main.o fact.o
	$(CC) main.o fact.o -o main # Linking

main.o: main.cpp fact.h
	$(CC) main.cpp -c

fact.o: fact.cpp fact.h
	$(CC) fact.cpp -c
