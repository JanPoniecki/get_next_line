CC = cc
FLAGS = -Wall -Wextra -Werror

all:
	gcc -g $(FLAGS) -D BUFFER_SIZE=$(bs) get_next_line.c get_next_line_utils.c main.c
