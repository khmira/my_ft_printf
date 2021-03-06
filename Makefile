NAME=libftprintf.a
SRCS=	  print_count.c ft_printf.c  initialize_prec_width_minus_zero_point.c ft_strlenD.c execute_width_only.c 
OBJS= $(SRCS:.c=.o)
CC = gcc
all: $(NAME)

$(NAME):
	@echo $(SRCS) #on ajoute @ pour ne pas ecrire 'echo' lors de la compilation
	$(CC) -c -g $(SRCS)  
	ar -rc $(NAME) $(OBJS) libft/libft.a
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
