/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:52:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/09 15:47:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"


uint_fast64_t ft_pow10(uint_fast64_t num)
{
	uint_fast64_t i;

	i = 1;
	if(num)
		while(num--)
			i = i * 10;
	return(i);
}

/*
double *ft_pow10(double number[])
{
	int i;

	i = 0;

	number[i] = 1;
	i++;
	while(i <= 19)
	{
		number[i] = number[i-1] * 10;
		i++;
	}

	return(number);
}
*/
/*
int main(void)
{
	int precision;
	double number[20];

	precision = 0;

	while(precision < 20)
	{
		printf("%d:|%f|\n", precision, ft_pow10(number)[precision]);
		precision++;
	}
}
*/

/*
int main(void)
{
	int i;
	double number[20];

	i = 0;

	while(i < 20)
	{
		printf("%d:|%f|\n", i, ft_pow10(number)[i]);
		i++;
	}
}
*/
