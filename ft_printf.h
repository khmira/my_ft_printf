#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include "libft/libft.h"
# include <stdlib.h>//pour faire appel a malloc
#define NUMBER 1
#define CHAR 2
#define STRING 3
#include<stdio.h>//a retirer
typedef	struct	s_data
{
	int	prec;//.percision
	int	width;
	int	minus;
	int	zero;
	int	point;
}				t_data;
int	ft_printf(const char *format, ...);
void	print_count(void *text, int type_de_text);
void	initialize(t_data *data);
void	execute_width_only(va_list *args, t_data *data, char *text); 
void	ft_putnbrU(unsigned int nb);
size_t	ft_strlenD(int n);

int	cmpt;
#endif
