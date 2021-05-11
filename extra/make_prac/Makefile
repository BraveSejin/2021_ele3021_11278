
PRINT_FLAG = DEFAULT
VALUE = 0

# Compiler and Compile options.
CC = gcc
CFLAGS = -g -Wall -D $(PRINT_FLAG) -D VALUE=$(VALUE)


# Macros specifying path for compile.
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

TARGET = test
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

# Delete binary & object files
clean:
	rm $(TARGET) $(OBJS)
