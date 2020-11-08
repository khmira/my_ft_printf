#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>//pour faire appel a malloc
#define NUMBER 1
#define CHAR 2
#define STRING 3
#include<stdio.h>//a retirer
typedef	struct	s_data
{
	int prec;//.percision
	int w;
	int m;
	int z;
}				t_data;
void	print_count(void *text, int type_de_text);
void	initialize(t_data *data);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbrU(unsigned int nb);
void	ft_putstr(char *str);
int	ft_atoi(char *str);
int	ft_isdigit(int c);
size_t	ft_strlenD(int n);
int	ft_strlen(char *str);
int	ft_printf(const char *format, ...);
int	cmpt;
#endif
