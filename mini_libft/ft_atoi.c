/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:54:58 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/09 16:10:53 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int nb;
	int i;
	int sign;

	nb = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (10 * nb) + (str[i++] - '0');
	return (nb * sign);
}
/*
int main (void)
{
	char *num1 = " \t\t+0";
	char *num2 = " \t\t+0";
	char *num3 = "  \n\n+2147483647";
	char *num4 = "  \n\n+2147483647";
	char *num5 = "  \n\n-2147483648";
	char *num6 = "  \n\n-2147483648";
	printf("%d\n", atoi(num1));
	printf("%d\n\n", ft_atoi(num2));
	printf("%d\n", atoi(num3));
	printf("%d\n\n", ft_atoi(num4));
	printf("%d\n", atoi(num5));
	printf("%d\n\n", ft_atoi(num6));
	return(0);
}
*/
