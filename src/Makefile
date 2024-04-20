CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -g 
DEPS = libft.h
FUNCS = ft_isalnum.c \
	ft_isdigit.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_atoi.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_split.c \
	ft_itoa.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strdup.c \
	ft_lstnew.c\
	main.c
NAME = libft.a


#%.o%.c: $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(FUNCS)
	@echo "\033[34m╔══════════════════════════════════════════════════════════════╗"
	@echo "\033[34m║                     \033[32mMAKEFILE IS RUNNING!                     \033[34m║"
	@echo "\033[34m╚══════════════════════════════════════════════════════════════╝"

	@$(CC) -o $(NAME) $(FUNCS) $(CFLAGS)
	@echo "COMPILATION \033[32mSUCCESS"

all: $(NAME)

clean:
	@rm -f *.o
	@echo "\033[30m*.o \033[31mDELETED"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[30mlibft.a \033[31mDELETED"

re: fclean all

