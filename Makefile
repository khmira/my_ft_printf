NAME=libftprintf.a
SRCS=ft_putchar.c ft_putstr.c ft_strlen.c print_count.c ft_printf.c \
	 ft_atoi.c ft_isdigit.c initialize_prec_width_minus_zero.c ft_strlenD.c
OBJS= $(SRCS:.c=.o)
CC = gcc
all: $(NAME)

$(NAME):
	echo $(SRCS)
	$(CC) -c $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
	rm -rf $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
