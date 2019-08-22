/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/21 21:40:28 by mbutt            ###   ########.fr       */
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
	int num = 5;
	char c;

	c = 'a';

	   printf("   printf:|%-5c|sdf\n", c);
	ft_printf("ft_printf:|%-5c|sdf\n", c);
}

