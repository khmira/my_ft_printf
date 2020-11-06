/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:48:08 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/06 18:56:49 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	ft_printf(const char *format, ...)
{
	va_list args;
	char *text;

	text = (char *) format;
	va_start(args, format);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text == '.')//*.*
			{
				int a = 1;//debut de n'importe quoi
				int b = 1;//encore n'importe quoi
				return(a+b);//fin de n'importe quoi
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
