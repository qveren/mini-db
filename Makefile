# Компилятор и флаги
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

TARGET = database

SRCS = main.c database.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c database.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean