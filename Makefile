all:
	$(CC) -std=c99 -Wall -Wextra -pedantic main.c siphash.c -o siphash

clean:
	rm siphash
