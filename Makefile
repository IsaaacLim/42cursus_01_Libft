#Declare variables
SRCS	=	ft_bzero.c ft_memset.c ft_mem
CC	=	gcc
CFLAGS=-c -Wall -Wextra -Werror
OBJ= ft_atoi.o ft_bzero.o

# target: prerequisite
# 		command

#Execution order from top to bottom

all: hello

hello: $(OBJ)
	$(CC) $(OBJ) -o hello

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) ft_atoi.c

ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) ft_bzero.c

clean:
	rm -rf *.o hello
