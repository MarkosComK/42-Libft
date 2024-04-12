CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
DEPS = libft.h
FUNCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_atoi.c ft_toupper.c  main.c
NAME = libft.a


%.o%.c: $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(FUNCS)
	$(CC) -o $(NAME) $(FUNCS) $(CFLAGS)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

