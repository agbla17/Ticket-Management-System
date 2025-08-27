CC=gcc
CFLAGS=-Wall -Wextra -O2

all: ticket

ticket: ticket.c
	$(CC) $(CFLAGS) ticket.c -o ticket

clean:
	rm -f ticket *.o
