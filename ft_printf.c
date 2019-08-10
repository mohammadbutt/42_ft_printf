/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/09 16:29:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

void ft_putstr(char *str)
{
	int len;

	len = ft_strlen(str);
	if(str)
		write(1, str, len);
}
*/

int ft_conversion(char c)
{
	if(c == 'c' || c == 's' || c == 'p')
		return(1);
	else if(c == 'd' || c == 'i' || c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return(1);
	else if(c == 'f')
		return(1);
	return(0);
}

/*
void start_parsing(char *str)
{
	int i;
	int c;
	int repeat;

	i = 0;
	c = 0;
	repeat = 0;
	while(str[i] && ft_conversion(str[i]) == 0)
	{
		if(str[i] >= 1)
		{
			repeat = ft_atoi(str[i]);
			while(repeat)
				write(1, ' ', repeat--);
		}
	}

}
*/
/*
** To do:
** 1. Parsing - Once you hit %, store the string until it hits conversion.
** Conversions: are "csp-diouxX-f"
*/

/*
void simple_printf(const char *fmt, ...)
{
	va_list args;
	int i;
	int c;

	va_start(args, fmt);
	i = 0;
	c = 0;

	while(fmt[i] != '\0')
	{
		if(fmt[i] == '%')
			start_parsing(fmt+i);
//		if(fmt[i] == '%' && fmt[i+1] == 'c')
//		{
//			c = va_arg(args, int);
//			ft_putchar(c);
//		}
		i++;
	}
	va_end(args);
}
*/
/*	
	while(fmt[i] != '\0')
	{
		if(fmt[i] == '%' && fmt[i + 1] == 'c')
		{
			c = va_arg(args, int);
			ft_putchar(c);
		}
		if(fmt[i] != 'c' && fmt[i] != '%')
		{
			ft_putchar(fmt[i]);
		}
		i++;
	}
	va_end(args);
}
*/


void simple_printf(const char *fmt, ...)
{
	va_list args;
	int i;
	int c;
	double d;
	char *s;

	va_start(args, fmt);
	i = 0;
	c = 0;
	d = 0;
	s = NULL;
	while(*fmt != '\0')
	{
		if(*fmt == 'd')
		{
			i = va_arg(args, int);
			printf("%d\n", i);
		}
		else if(*fmt == 'c')
		{
			c = va_arg(args, int);
			printf("%c\n", c);
		}
		else if(*fmt == 'f')
		{
			d = va_arg(args, double);
			printf("%f\n", d);
		}
		else if(*fmt == 's')
		{
			s = va_arg(args, char *);
			printf("%s\n", s);
		}
		++fmt;
	}
	va_end(args);
}

