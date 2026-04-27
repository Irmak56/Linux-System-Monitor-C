CC = gcc
CFLAGS = -Iinclude
SRC = src/main.c src/utils.c
OBJ = sys_monitor

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

clean:
	rm -f $(OBJ)
