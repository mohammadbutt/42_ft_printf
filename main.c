/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/20 16:41:08 by mbutt            ###   ########.fr       */
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

int main(void)
{
	int num;
	int width;

	num = 5;
	width = 308;

	ft_printf("%#0-+*d sdfsdfdf\n", width,num);
	printf("%'d", num);
}
