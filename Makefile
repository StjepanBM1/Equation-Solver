CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
OBJS = example.o
BIN = example

all : $(BIN)

$(BIN) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(BIN)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf example example.o
