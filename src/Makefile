# COLORS
RED    = $(shell printf "\33[31m")
GREEN  = $(shell printf "\33[32m")
WHITE  = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET  = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")
PURPLE = $(shell printf "\33[35m")
TITLE = $(shell printf "\33[32;40m")

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -g
COMPILER = cc
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
    ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
    ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
    ft_strchr.c ft_strdup.c ft_striteri.c ft_count_words.c ft_strjoin.c ft_strlcat.c\
    ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
    ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c\
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
    ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\
	ft_putchar.c ft_putstr.c ft_putnbr.c\
	./printf/ft_printf.c ./printf/putcharf.c ./printf/putstrf.c\
	./printf/print_ptr.c ./printf/print_ptr_hex.c\
	./printf/ptr_len.c ./printf/print_decimal.c ./printf/print_unsigned_dec.c\
	./printf/print_dec_width2.c ./printf/numlen.c ./printf/print_dec_wz.c\
	./printf/print_dec_wp2.c ./printf/print_hexa.c\
	./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c
OBJS = ${SRCS:.c=.o}


${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@clear
	@echo
	@echo
	@echo "$(TITLE)━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
	@echo "$(PURPLE)    ██╗  ██╗██████╗       ██╗     ██╗██████╗ ██████╗  █████╗ ██████╗ ██╗   ██╗    "
	@echo "    ██║  ██║╚════██╗      ██║     ██║██╔══██╗██╔══██╗██╔══██╗██╔══██╗╚██╗ ██╔╝    "
	@echo "    ███████║ █████╔╝█████╗██║     ██║██████╔╝██████╔╝███████║██████╔╝ ╚████╔╝     "
	@echo "    ╚════██║██╔═══╝ ╚════╝██║     ██║██╔══██╗██╔══██╗██╔══██║██╔══██╗  ╚██╔╝      "
	@echo "         ██║███████╗      ███████╗██║██████╔╝██║  ██║██║  ██║██║  ██║   ██║       "
	@echo "         ╚═╝╚══════╝      ╚══════╝╚═╝╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝       "
	@echo "$(GREEN)━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━[$(RESET)Made with $(RED)♥ $(RESET)by $(PURPLE)@marsoare$(TITLE)]━━"
	@echo
	@echo
	@echo "$(GREEN) Successfully compiled Libft."
	@echo
	@echo

.c.o:
	@${COMPILER} ${CFLAGS} -c $< -o $@
	@sleep 0.02
	@clear
	@echo "$(RESET)[$(GREEN)OK$(RESET)]$(BLUE) Compiling $<$(YELLOW)"

all: $(NAME)

clean:
	rm -rf *.o
	rm -rf printf/*.o
	rm -rf get_next_line/*.o
	@clear
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

fclean: clean
	rm -f ${NAME}
	@clear
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

re: fclean all

.PHONY: all bonus clean fclean re test
