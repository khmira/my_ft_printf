/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_pres_width_minus_zero.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:28:01 by abadidi           #+#    #+#             */
/*   Updated: 2020/11/07 19:49:17 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	initialize(t_data *data)
{
	data->prec = 0;
	data->width = 0;
	data->minus = 0;
	data->zero = 0;
	data->point = 0;
}
