# Makefile for the C program

# Compiler
CC = gcc
CFLAGS = -std=c99 -Wall -pedantic

# Target executable
TARGET = T1

# Source file
SRC = T1.c

# Build target
$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(CFLAGS)

# Clean target to remove compiled files
clean:
	rm -f $(TARGET)
