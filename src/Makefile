CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: cipher

cipher: cipher.o
	$(CC) cipher.o -o ../build/cipher
	rm -f *.o

test: cipher.o
	$(CC) cipher.o -o cipher
	rm -f *.o

cipher.o: cipher.c
	$(CC) $(CFLAGS) -c cipher.c -o cipher.o

clean:
	rm -f *.o
	rm -rf ../build/*

rebuild:
	make clean
	make