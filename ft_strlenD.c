#include "ft_printf.h"

size_t	ft_strlenD(int n)
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
