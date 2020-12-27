#include "ft_printf.h"

void	execute_width_only(va_list *args, t_data *data, char *text) 
{
	//	printf("je suis dans zero = %d width = %d",data->zero,data->width);
	if (data->zero && data->width == 0)//cas %0d
	{
		printf(" je suis dans if zero = 1 width = 0 ");
		ft_putnbr((int )va_arg(*args,int));	
	}
	if (data->zero && data->width)//cas %0+width+d
	{
		//il faut regler le pb de mesure de la taille de mon nbr
	//	printf("\nlire le args %d\n",args); 
		if (ft_strlenD(ft_atoi((char *)args)) > 1)//si la taille du nbr est > 1 alors les 0 ne seront pas printés
		{
			printf("\nla taille du nbr est > 1\n");
			
		}	
	}	
}
