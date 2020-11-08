#include "ft_printf.h"

size_t	ft_strlenD(int n)//pour calculer la taille du prec et du widht, si c'est 1 ou 2 ou 3 chiffres dont ils sont composes:
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
