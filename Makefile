#Declare variables
SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
			ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
CC		=	gcc
CFLAGS	=	-c -Wall -Wextra -Werror
OBJ		= 	$(SRCS:.c=.o)

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
