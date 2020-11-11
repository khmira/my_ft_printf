#include "ft_printf.h"

void	execute_width_only(va_list *args, t_data *data, char *text) 
{
	if (data->zero == 1 && data->width == 0 && data->point == 0)//cas %0d
	{
		//il faut regler le pb de mesure de la taille de mon nbr
		if (ft_strlenD(ft_atoi(&args)) > 1)//si la taille du nbr est > 1 alors les 0 seront pas printés
		{
			printf("la taille du nbr est > 1");
		}	
	}	
}
