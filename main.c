/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/26 22:21:17 by mbutt            ###   ########.fr       */
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
	char *str1 = "Test";
	char *str2 = "abcd";
	char *str3 = "123";
	char *str4 = "@#$%^";
	char *str5 = "";
	char *str6 = NULL;

//	return1 =   printf("   printf:|%-5c %3c %2c|sdf\n", c, c, c);
//	return2 = ft_printf("ft_printf:|%-5c %3c %2c|sdf\n", c, c, c);

//	return1 = printf("|%-5%|\n");
//	return2 = ft_printf("|%-5%|\n");
//	ft_printf("%");
//	printf("   printf_return:|%d|\n", return1);
//	printf("ft_printf_return:|%d|\n", return2);
//	printf("   printf_return:|%c|\n", c);
//	printf("ft_printf_return:|%c|\n", c);
	   printf("   printf:|%-.2s|%s|%5.0s|%5.s|%10s|%.05s|%.05s|\n", str1, str2, str3, str4, NULL, NULL, "");
	ft_printf("ft_printf:|%-.2s|%s|%5.0s|%5.s|%10s|%.05s|%.05s|\n", str1, str2, str3, str4, NULL, NULL, "");
	ft_printf("1:ft_printf:|%-15p|\n", str1);
	   printf("1:   printf:|%-15p|\n", str1);
	ft_printf("2:ft_printf:|%-024p|\n", str5);
	   printf("2:   printf:|%-024p|\n", str5);
//	ft_printf("3:ft_printf:|%024p|\n", str6);
//	   printf("3:   printf:|%024p|\n", str6);
//	ft_printf("4:ft_printf:|%-2.20p|\n", str6);
//	   printf("4:   printf:|%-2.20p|\n", str6);
	ft_printf("4:ft_printf:|%-.0p|\n", str6);
	   printf("4:   printf:|%-.0p|\n", str6);

	ft_printf("4:ft_printf:|%.0p|\n", 0);
	   printf("4:   printf:|%.0p|\n", 0);



}

