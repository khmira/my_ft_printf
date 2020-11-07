/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:48:08 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/07 20:55:40 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	char *text;
	t_data	*data;

	text = (char *) format;
	va_start(args, format);
	initialize(data);

	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text == '.')//%*.*d
			{
				text++;
				//ici commence prec
				//cas pres == number
				//cas lire le text pour avoir pres
				while (ft_isdigit(*text) == 1)
				{
					data->prec = ft_atoi(text);//ici on ramasse TOUT prec
					printf("prec = %d", data->prec);
					
					//fin de prec = 123
				}	
			}
		}
		else {
			ft_putchar(*text);//cas sans %
			cmpt++;
			text++;
		}
	}

	va_end(args);

	return (cmpt);
}
