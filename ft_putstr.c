/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:22:35 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/07 20:58:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void simple_printf(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	while(*fmt != '\0')
	{
		if(*fmt == 'd')
		{
			int i = va_arg(args, int);
			printf("%d\n", i);
		}
		else if(*fmt == 'c')
		{
			int c = va_arg(args, int);
			printf("%c\n", c);
		}
		else if(*fmt == 'f')
		{
			double d = va_arg(args, double);
			printf("%f\n", d);
		}
		++fmt;
	}
	va_end(args);
}


/*
void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}
*/
