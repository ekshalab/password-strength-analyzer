CC = gcc
CFLAGS = -g -Wall

password_analyzer: main.o
	$(CC) $(CFLAGS) -o password_analyzer main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

run: password_analyzer
	./password_analyzer

clean:
	rm -f password_analyzer main.o

.PHONY: run clean