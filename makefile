
CC = gcc
LDFLAGS = -lglfw -lGL
SRC  = $(wildcard src/**/*.c) $(wildcard src/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)
OBJ  = $(SRC:.c=.o)
BIN = bin

dirs:
	mkdir -p $(BIN)

build: $(OBJ)
	$(CC) $(SRC) -o $(BIN)/game


clean:
	rm -rf $(BIN)
