CC = cc
FLAGS = -Wall -Wextra -Werror

jp:
	gcc -g $(FLAGS) -D BUFFER_SIZE=$(bs) -o jp.out get_next_line.c get_next_line_utils.c main.c
	
nj:
	gcc -g $(FLAGS) -D BUFFER_SIZE=$(bs) -o nj.out get_next_line.c get_next_line_utils.c main.c
