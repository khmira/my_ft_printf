/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:48:08 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/08 18:29:29 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	char *text;
	t_data	*data;// = malloc(sizeof(t_data));

	text = (char *) format;
	va_start(args, format);
	data = malloc(sizeof(t_data));//on utilise malloc pour alouer a la struct data de l'espace pour stocker prec, w, m,z

	initialize(data);

	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text == '.')//%*.*d
			{
				text++;
				/*----------------------------ici commence prec------------------------------------*/
				/*-----------------cas pres == number--------------------*/
				//lire le text pour avoir prec
				if (ft_isdigit(*text) == 1) {
					data->prec = ft_atoi(text);//ici on ramasse TOUT prec
					text += ft_strlenD(data->prec);//on avance de n case si prec est de taille n
				}//fin de prec == number
				/*-----------------cas pres == *---------------------------*/
				else if (*text == '*') {
					data->prec = va_arg(args, int); //on recupere prec de *
					text += ft_strlenD(data->prec);//on avance de n case si prec est de taille n
				}//recuperer prec dans tous les cas
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
