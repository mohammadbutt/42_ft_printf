/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:34:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/17 21:45:14 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../srcs/ft_printf.h"

int main(void)
{
	char c = 'a';
	char *str = "This is a test";
	int num1 = 789456;
	int num2 = 78456;
	float fl1 = 7845.12456;
	float fl2 = 78459874.987456;

	   printf("   printf %%c:|%c|\n", c);
	ft_printf("ft_printf %%c:|%c|\n\n", c);

	   printf("   printf %%s:|%s|\n", str);
	ft_printf("ft_printf %%s:|%s|\n\n", str);

	   printf("   printf: %%p|%p|\n", str);
	ft_printf("ft_printf: %%p|%p|\n\n", str);

	   printf("   printf %%d:|%d|\n", num1);
	ft_printf("ft_printf %%d:|%d|\n\n", num1);

	   printf("   printf %%i:|%i|\n", num2);
	ft_printf("ft_printf %%i:|%i|\n\n", num2);

	   printf("   printf %%o:|%o|\n", num1);
	ft_printf("ft_printf %%o:|%o|\n\n", num1);

	   printf("   printf %%u:|%9u|\n", num2);
	ft_printf("ft_printf %%u:|%9u|\n\n", num2);

	   printf("   printf %%x:|%#x|\n", num1);
	ft_printf("ft_printf %%x:|%#x|\n\n", num1);

	   printf("   printf %%X:|%#X|\n", num1);
	ft_printf("ft_printf %%X:|%#X|\n\n", num1);

	   printf("   printf %%f:|%f|\n", fl1);
	ft_printf("ft_printf %%f:|%f|\n\n", fl1);
}
