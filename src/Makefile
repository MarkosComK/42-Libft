CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
SOURCES = ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memccpy.c ft_memmove.c ft_atoi.c ft_toupper.c  ft_tolower.c ft_strlcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_split.c
NAME = libft.a
OBJECTS = $(SOURCES:.c=.o)


%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all bonus clean fclean re test
