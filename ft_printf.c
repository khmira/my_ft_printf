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



int read_data(char *text, t_data *data){
	

	int i = 0;

	/*----------------------------ici commence width------------------------------------*/
				/*----------------- cas minus ------------------------------*/
			if (text[i] == '-') {
				data->minus = 1;
				i++;
			}
	/*----------------- cas zero ------------------------------*/
			else if (text[i] == '0') {
				data->zero = 1;
				i++;
			}
			 if (ft_isdigit(text[i]) == 1) {//cas width == number
					data->width = ft_atoi(&text[i]);//ici on ramasse TOUT width
					i += ft_strlenD(data->width);//on avance de n case si width est de taille n
				}//fin de width == number
				//-----------------cas width == *---------------------------
			else if (text[i] == '*') {
				data->width = va_arg(args, int); //on recupere width de *
				i += ft_strlenD(data->width);//on avance de n case si width est de taille n
			}//recuperer width dans tous les cas 
			//execution du width sans prec
			//on met cette ligne lorsqu'on saura le type apres % (temporaire)
			//execute_width_only(&args, data, text);
	//cas on arive a .
			if (text[i] == '.')//%width.precd
			{
				data->point = 1;//le point existe
				i++;
				/*----------------------------ici commence prec------------------------------------*/
				/*-----------------cas pres == number--------------------*/
				//lire le text pour avoir prec
				if (ft_isdigit(text[i]) == 1) {
					data->prec = ft_atoi(&text[i]);//ici on ramasse TOUT prec
					i  += ft_strlenD(data->prec);//on avance de n case si prec est de taille n
				}//fin de prec == number
				/*-----------------cas pres == *---------------------------*/
				else if (text[i] == '*') {
					data->prec = va_arg(args, int); //on recupere prec de *
					i += ft_strlenD(data->prec);//on avance de n case si prec est de taille n
				}//recuperer prec dans tous les cas
			}

			return i;

}

char *generate(char c, int len)
{
	char *str = malloc(len+1);

	int i = 0;

	while (i < len)
	{
		str[i] = c;
	 	i++;
	}
	str[i] =0;
	return str;

}
void	print_d(t_data *data, va_list args)
{
	int	my_number;//qu'on va récupérer de va_args


	my_number = va_arg(args, int);
	char trans_number = ft_itoa(my_number);//on transfrome mon nmbre en char pour faciliter la tache
	//première chose à appliquer est "precision" car elle controle la taille, ex : 000000036
	// .5d 5 00005 persiobn - len(nuber)
	int len_number = ft_strlenD(my_number);
	int toprint = data->prec - len_number;// le nombre de '0' à printer
	char *lot_de_0 = generate('0', toprint);//
	char *num_et_prec = ft_strjoin(lot_de_0, trans_number);
	char *widht;//pour afficher 0 ou ' '
	int minwidth = ft_strlen(num_et_prec);
	
	if (data->zero == 1)
	{
		width = generate('0', minwidth);
	}
	else {
	
		width = generate(' ', minwidth);
	}


	if (data->minus == 0)
	{
		ft_putstr(width);
		ft_putstr(num_et_prec);
	}
	else 
	{
	
		ft_putstr(num_et_prec);
		ft_putstr(width);
	
	}

	
}
void router(t_data *data, char *text, va_list args)
{
	int	i;

	i = 0;
	if (text[i] == 'd' || text[i] == 'i'){
		print_d(data, args);
	}
	else if (text[i] == 'c' || text[i] == '%'){
		print_c(data, args);
	}
	else if (text[i] == 's'){
		print_s(data, args);
	}
	else if (text[i] == 'x' || text[i] == 'X'){
		print_x(data, args);
	}
	else if (text[i] == 'u'){
		print_u(data, args);
	}
	else if (text[i] == 'p'){
		print_p(data, args);
	}
}



int	ft_printf(const char *format, ...)
{
	va_list args;
	char *text;//pour rendre format non const
	t_data	*data;// = malloc(sizeof(t_data));

	text = (char *) format;
	va_start(args, format);

	data = malloc(sizeof(t_data));//on utilise malloc pour alouer a la struct data de l'espace pour stocker prec, w, m,z
	int i = 0;
	initialize(data);

	while (text[i] != '\0')
	{
		// %0.3d
		if (text[i] == "%"){
			i++;
			i += read_data(&text[i], data);	
			
		}else {
			ft_putchar(text[i]);
			i++;
			cmpt++;
		}
	}

	va_end(args);

	return (cmpt);
}
