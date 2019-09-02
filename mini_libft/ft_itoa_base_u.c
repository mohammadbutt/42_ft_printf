/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:57:35 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/31 18:26:20 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>

/*
** ft_itoa_base_u is like ft_itoa_base, except base_u will turn all bases into
** unsigned including base of 10.
*/

int ft_u_numlen(uint_fast64_t value, int base)
{
	int i;
	uint_fast64_t u_value;

	i = 0;
	u_value = (uint_fast64_t) value;
	if (value == 0)
		return (0);
//	if (value < 0 && base == 10)
//		i++;
//	while (base == 10 && value)
//	{
//		value = value/base;
//		i++;
//	}
//	while (base != 10 && u_value)
//	{
//		u_value = u_value/base;
//		i++;
//	}
	if(u_value)
		while(base && u_value)
		{
			u_value = u_value / base;
			i++;
		}
	return (i);
}

char *ft_itoa_base_u(uint_fast64_t value, int base, char str[])
{
	int len;
	uint_fast64_t u_value;
//	char placeholder[] = "0123456789abcdef";
	char placeholder[17];
	ft_strcpy(placeholder, "0123456789abcdef");
	if (value == 0)
		return (ft_strcpy(str, "0"));
	len = ft_u_numlen(value, base);
	u_value = (uint_fast64_t) value;
//	(value < 0 && base == 10) && (str[0] = '-');
	str[len] = '\0';
	len--;
//	while (base == 10 && value)
//	{
//		str[len] = placeholder[ft_abs(value%base)];
//		value = value / base;
//		len--;
//	}
//	while (base != 10 && u_value)
//	{
//		str[len] = placeholder[u_value % base];
//		u_value = u_value / base;
//		len--;
//	}
	while(base && u_value)
	{
		str[len] = placeholder[u_value % base];
		u_value = u_value / base;
		len--;
	}
	return (str);
}
