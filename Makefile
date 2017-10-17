CC=gcc

CFLAGS=-std=c11  -lm

all: grade

tm: tm.c test.c
	$(CC) -o tm tm.c test.c -lm

grade: tm
	./tm

clean:
	rm -rf *.o tm
