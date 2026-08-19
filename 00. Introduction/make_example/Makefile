# Example of a Makefile
# Author: Ariel Ortiz

CC=g++ -g

main: main.o fact.o
	$(CC) main.o fact.o -o main # Linking

main.o: main.cpp fact.h
	$(CC) main.cpp -c # Compile but do not link

fact.o: fact.cpp fact.h
	$(CC) fact.cpp -c # Compile but do not link

.PHONY: clean
clean:
	rm -f main main.o fact.o
