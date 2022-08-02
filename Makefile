NAME = push_swap

VERSION = 0.1

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/create_a.c \
	./src/create_b.c \
	./src/stack_utils.c \
	./src/utils.c \
	./src/push_swap.c \

all:
	$(CC)  $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
