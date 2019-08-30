/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/29 21:58:56 by mbutt            ###   ########.fr       */
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

/*
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
*/

int main(void)
{
	char *str     = "Test";
	char num1_min = -128;
	char num1_max = 127;
//	char num1_max = 0;

	short num2_min = -32768;
	short num2_max = 32767;

	long num3_min = -9223372036854775807;
	long num3_max = 9223372036854775807;

	long long num4_min = -9223372036854775807;
	long long num4_max = 9223372036854775807;


/*
	printf("w01:|%hhd|\n", num1_min);
	printf("w02:|%hhd|\n\n", num1_max);

	printf("w03:|%5hhd|\n", num1_min);
	printf("w04:|%5hhd|\n\n", num1_max);

	printf("w-05:|%-5hhd|\n", num1_min);
	printf("w-06:|%-5hhd|\n\n", num1_max);


	printf("wz07:|%05hhd|\n", num1_min);
	printf("wz08:|%05hhd|\n\n", num1_max);

	printf("p09:|%.5hhd|\n", num1_min);
	printf("p10:|%.5hhd|\n\n", num1_max);

	printf("pw11:|%7.5hhd|\n", num1_min);
	printf("pw12:|%7.5hhd|\n\n", num1_max);

	printf("pw13:|%-7.5hhd|\n", num1_min);
	printf("pw14:|%-7.5hhd|\n\n", num1_max);
*/



//	ft_printf("ft_printf:1:||%s||%c||%d%p%p|%05%|\n",str, 'c', 1234, NULL, str);
//	   printf("   printf:1:||%s||%c||%d%p%p|%05%|\n",str, 'c', 1234, NULL, str);

	ft_printf("ft_printf:1:|%hhd|\n", num1_min);
	   printf("   printf:1:|%hhd|\n", num1_min);
	ft_printf("ft_printf:1:|%hhd|\n", num1_max);   
	   printf("   printf:1:|%hhd|\n\n", num1_max);

	ft_printf("ft_printf:2:|%6hhd|\n", num1_min);
	   printf("   printf:2:|%6hhd|\n", num1_min);
	ft_printf("ft_printf:2:|%6hhd|\n", num1_max);   
	   printf("   printf:2:|%6hhd|\n\n", num1_max);

	ft_printf("ft_printf:3:|%06hhd|\n", num1_min);
	   printf("   printf:3:|%06hhd|\n", num1_min);
	ft_printf("ft_printf:3:|%06hhd|\n", num1_max);   
	   printf("   printf:3:|%06hhd|\n\n", num1_max);

	ft_printf("ft_printf:4:|%-6hhd|\n", num1_min);
	   printf("   printf:4:|%-6hhd|\n", num1_min);
	ft_printf("ft_printf:4:|%-6hhd|\n", num1_max);   
	   printf("   printf:4:|%-6hhd|\n\n", num1_max);

	ft_printf("ft_printf:5:|%.6hhd|\n", num1_min);
	   printf("   printf:5:|%.6hhd|\n", num1_min);
	ft_printf("ft_printf:5:|%.6hhd|\n", num1_max);   
	   printf("   printf:5:|%.6hhd|\n\n", num1_max);

	ft_printf("ft_printf:6:|%0.6hhd|\n", num1_min);
	   printf("   printf:6:|%0.6hhd|\n", num1_min);
	ft_printf("ft_printf:6:|%0.6hhd|\n", num1_max);   
	   printf("   printf:6:|%0.6hhd|\n\n", num1_max);

	ft_printf("ft_printf:7:|%010.6hhd|\n", num1_min);
	   printf("   printf:7:|%010.6hhd|\n", num1_min);
	ft_printf("ft_printf:7:|%010.6hhd|\n", num1_max);   
	   printf("   printf:7:|%010.6hhd|\n\n", num1_max);

	ft_printf("ft_printf:8:|% 10.6hhd|\n", num1_min);
	   printf("   printf:8:|% 10.6hhd|\n", num1_min);
	ft_printf("ft_printf:8:|% 10.6hhd|\n", num1_max);   
	   printf("   printf:8:|% 10.6hhd|\n\n", num1_max);

	ft_printf("ft_printf:9:|%+10.6hhd|\n", num1_min);
	   printf("   printf:9:|%+10.6hhd|\n", num1_min);
	ft_printf("ft_printf:9:|%+10.6hhd|\n", num1_max);   
	   printf("   printf:9:|%+10.6hhd|\n\n", num1_max);


	ft_printf("ft_printf:10:|%+.6hhd|\n", num1_min);
	   printf("   printf:10:|%+.6hhd|\n", num1_min);
	ft_printf("ft_printf:10:|%+.6hhd|\n", num1_max);   
	   printf("   printf:10:|%+.6hhd|\n\n", num1_max);


	ft_printf("ft_printf:9:|% hhd|\n", num1_min);
	   printf("   printf:9:|% hhd|\n", num1_min);
	ft_printf("ft_printf:9:|% hhd|\n", num1_max);   
	   printf("   printf:9:|% hhd|\n\n", num1_max);

	ft_printf("ft_printf:9:|% 3d|\n", 0);
	   printf("   printf:9:|% 3d|\n", 0);

	ft_printf("ft_printf:9:|% .d|\n", 0);
	   printf("   printf:9:|% .d|\n", 0);


//	ft_printf("ft_printf:6:|%+5hhd|\n", num1_min);
//	   printf("   printf:6:|%+5hhd|\n", num1_min);
//	ft_printf("ft_printf:6:|%+5hhd|\n", num1_max);   
//	   printf("   printf:6:|%+5hhd|\n\n", num1_max);




	ft_printf("ft_printf:2:|%hd|\n", num2_min);
	   printf("   printf:2:|%hd|\n", num2_min);
	ft_printf("ft_printf:2:|%hd|\n", num2_max);
	   printf("   printf:2:|%hd|\n\n", num2_max);

	ft_printf("ft_printf:3:|%ld|\n", num3_min);
	   printf("   printf:3:|%ld|\n", num3_min);
	ft_printf("ft_printf:3:|%ld|\n", num3_max);
	   printf("   printf:3:|%ld|\n\n", num3_max);

	ft_printf("ft_printf:4:|%lld|\n", num4_min);
	   printf("   printf:4:|%lld|\n", num4_min);
	ft_printf("ft_printf:4:|%lld|\n", num4_max);
	   printf("   printf:4:|%lld|\n\n", num4_max);

//	ft_printf("ft_printf643:|%-10240lld|\n", -522337203685470ll);
//	   printf("   printf643:|%-10240lld|\n", -522337203685470ll);


	ft_printf("ft_printf:4:|%lld|\n", num4_min);
	   printf("   printf:4:|%lld|\n", num4_min);
	ft_printf("ft_printf:4:|%lld|\n", num4_max);
	   printf("   printf:4:|%lld|\n\n", num4_max);

}
