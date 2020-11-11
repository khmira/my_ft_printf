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
	char *text;//pour rendre format non const
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
	/*----------------------------ici commence width------------------------------------*/
				/*----------------- cas minus ------------------------------*/
			if (*text == '-') {
				data->minus = 1;
				(text)++;
			}
	/*----------------- cas zero ------------------------------*/
			else if (*text == '0') {
				data->zero = 1;printf("je suis dans 0");
				(text)++;
			}
			else if (ft_isdigit(*text) == 1) {//cas width == number
					data->width = ft_atoi(text);//ici on ramasse TOUT width
					text += ft_strlenD(data->width);//on avance de n case si width est de taille n
				}//fin de width == number
				//-----------------cas width == *---------------------------
				else if (*text == '*') {
					data->width = va_arg(args, int); //on recupere width de *
					text += ft_strlenD(data->width);//on avance de n case si width est de taille n
				}//recuperer width dans tous les cas 
			//execution du width sans prec
			execute_width_only(&args, data, text);
	//cas on arive a .
			if (*text == '.')//%width.precd
			{
				data->point = 1;//le point existe
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
