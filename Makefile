CC = gcc
CFLAGS = -Wall -Wextra -g
OBJS = main.o node.o queue.o stack.o nasabah.o

all: program

program: $(OBJS)
	$(CC) $(CFLAGS) -o program $(OBJS)

main.o: main.c queue.h nasabah.h
	$(CC) $(CFLAGS) -c main.c

node.o: node.c node.h
	$(CC) $(CFLAGS) -c node.c

queue.o: queue.c queue.h node.h
	$(CC) $(CFLAGS) -c queue.c

stack.o: stack.c stack.h node.h
	$(CC) $(CFLAGS) -c stack.c

nasabah.o: nasabah.c nasabah.h
	$(CC) $(CFLAGS) -c nasabah.c

clean:
	rm -f *.o program
