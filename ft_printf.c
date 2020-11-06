/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:48:08 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/06 03:04:45 by abadidi          ###   ########.fr       */
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
		if (0)
		{
			int a = 1;//debut de n'importe quoi
			int b = 1;//encore n'importe quoi
			return(a+b);//fin de n'importe quoi
		}
		else {
			print_count((void *)((int)*text), STRING);
			text++;
		}

	}

	va_end(args);

	return (cmpt);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	char e = 'k';



	setbuf(stdout, NULL);
int a =	   printf("fuck you");printf("\n");
int b =	 ft_printf("fuck you");
printf("\n");
printf("%d  %d\n",a, b);
	return (0);
}
