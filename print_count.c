/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 02:24:07 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/06 03:08:06 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_count(void *text, int type_de_text)
{
	if (0)
	{
		/*ici le cas des %*/
		int a = 1;//debut de n'importe quoi
		int b = 1;//encore n'importe quoi
		return;//fin de n'importe quoi
	}
	/*ici cas d'1 texte sans %*/
	else if (type_de_text == STRING)
	{
		ft_putstr((char *)text);
		cmpt += ft_strlen((char *)text);
	}
}
