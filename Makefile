NAME=libftprintf.a
SRCS=	 ft_putchar.c ft_putstr.c ft_strlen.c print_count.c ft_printf.c \
	 ft_atoi.c ft_isdigit.c initialize_prec_width_minus_zero_point.c ft_strlenD.c execute_width_only.c ft_putnbr.c
OBJS= $(SRCS:.c=.o)
CC = gcc
all: $(NAME)

$(NAME):
	@echo $(SRCS) #on ajoute @ pour ne pas ecrire 'echo' lors de la compilation
	$(CC) -c -g $(SRCS) ft_printf.h
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
