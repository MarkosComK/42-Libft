CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
DEPS = libft.h
FUNCS = ft_bzero.c ft_memset.c main.c
NAME = libft.a


%.o%.c: $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(FUNCS)
	$(CC) -o $(NAME) $(FUNCS) $(CFLAGS)

all: $(NAME)

clean:
	rm -rf *.o
