/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/22 15:28:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdbool.h>

/*
int main(void)
{
	int repeat;
	int num;
	char c;
	char *str;

	repeat = 3;
	str = "Test";
	c = 'c';
	num = 3;


	ft_printf("   |٪c||%c|\n", c);
	ft_printf("|٪-3c||%-3c|\n", c);
	ft_printf("  |٪*c||%*c|\n", (-1 * num), c);
	ft_printf("  |٪*c||%*c|\n", num, c);
	ft_printf(" |٪3c||%3c|\n\n", c);

	ft_printf("   |٪0c||%0c|\n", c); // Works
	ft_printf("  |٪00c||%00c|\n", c); // Works
	ft_printf("%");
}
*/
/*
int main(void)
{
	int num;
	int width;
	int precision;

	num = 5;
	width = 201;
	precision = 308;

//	ft_printf("%#0-+103.*d sdfsdfdf\n", precision,num);
//	printf("%'d", num);
	ft_printf("%Ld", num);
}
*/


int main(void)
{
	int return1;
	int return2;

//	int num = 5;
	char c;
	return1 = 0;
	return2 = 0;
	c = 'a';

//	return1 =   printf("   printf:|%-5c %3c %2c|sdf\n", c, c, c);
//	return2 = ft_printf("ft_printf:|%-5c %3c %2c|sdf\n", c, c, c);

	return1 = printf("%");
	return2 = ft_printf("%");
//	ft_printf("%");
//	printf("   printf_return:|%d|\n", return1);
//	printf("ft_printf_return:|%d|\n", return2);
}

