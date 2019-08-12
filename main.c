/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/12 16:23:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{

	int num;
	int c;

	num = 3;
	c = 'a';
//	simple_printf(" %  %c this is a test %c %c %c", 'a', 'b', 'c', 'd');
	
//	simple_printf("d c f f s", 3, 'a', 1.99, 2.5, "abcdef");

//	printf("%d\n", ft_atoi("345345345"));
//	ft_printf("%d %s %c %u", )
//	printf("%3$d %3$d, %1$d %1$d, %2$d %2$+d", -1, 2, 3);
//	printf("%s", "testing\n");
	ft_printf("|%*c||%4c|\n", num, c, c);

}
