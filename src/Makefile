# COLORS
RED    = $(shell printf "\33[31m")
GREEN  = $(shell printf "\33[32m")
WHITE  = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET  = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -g
COMPILER = cc
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
    ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
    ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
    ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
    ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
    ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c\
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
    ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 
OBJS = ${SRCS:.c=.o}


${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled Libft.\033[0m"

.c.o:
	@${COMPILER} ${CFLAGS} -c $< -o $@
	@echo "$(RESET)[$(GREEN)OK$(RESET)]$(BLUE) Compiling $<$(YELLOW)"

all: ascii-art $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re test
