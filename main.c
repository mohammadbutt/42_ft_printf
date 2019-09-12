/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 23:11:23 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//#include <cfloat.h>

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
/*
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
*/

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

/*
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
*/

/*
	printf("--------------------Unit test for o-----------------------\n");
	printf("----------------------------------------------------------\n");

	   printf("   printf:1|%# +o|\n", 345345);
	ft_printf("ft_printf:1|%# +o|\n", 345345);

	   printf("   printf:2|%#-8.3o|\n", 345345);
	ft_printf("ft_printf:2|%#-8.3o|\n\n", 345345);

	   printf("   printf:3|%#-8.5o|\n", 34);
	ft_printf("ft_printf:3|%#-8.5o|\n\n", 34);

	   printf("   printf:4|%#-8.o|\n", 34);
	ft_printf("ft_printf:4|%#-8.o|\n\n", 34);

	   printf("   printf:5|%#8.o|\n", 34);
	ft_printf("ft_printf:5|%#8.o|\n\n", 34);

	   printf("   printf:6|%8.3o|\n", 34);
	ft_printf("ft_printf:6|%8.3o|\n\n", 34);

	   printf("   printf:7|%#8.3o|\n", 34);
	ft_printf("ft_printf:7|%#8.3o|\n\n", 34);

	   printf("   printf:8|%3o|\n", 4);
	ft_printf("ft_printf:8|%3o|\n\n", 4);

	   printf("   printf:9|%3o|\n", 0);
	ft_printf("ft_printf:9|%3o|\n\n", 0);

	   printf("   printf:10|%#3o|\n", 4);
	ft_printf("ft_printf:10|%#3o|\n\n", 4);

	   printf("   printf:11|%#5o|\n", 0);
	ft_printf("ft_printf:11|%#5o|\n\n", 0);

	   printf("   printf:12|%#5.8o|\n", 0);
	ft_printf("ft_printf:12|%#5.8o|\n\n", 0);

	   printf("   printf:13|%#5.0o|\n", 0);
	ft_printf("ft_printf:13|%#5.0o|\n\n", 0);

	   printf("   printf:14|%#-3o|\n", 0);
	ft_printf("ft_printf:14|%#-3o|\n\n", 0);

	   printf("   printf:15|%#3o|\n", 0);
	ft_printf("ft_printf:15|%#3o|\n\n", 0);
	
	   printf("   printf:16|this %#o number,|\n", 0);
	ft_printf("ft_printf:16|this %#o number,|\n\n", 0);

	   printf("   printf:17|%#o|\n", 0);
	ft_printf("ft_printf:17|%#o|\n\n", 0);

	   printf("   printf:18|%0#o|\n", 0);
	ft_printf("ft_printf:18|%0#o|\n\n", 0);

	   printf("   printf:19.1|%#.0o|\n", 0);
	ft_printf("ft_printf:19.1|%#.0o|\n\n", 0);

	   printf("   printf:19.2|%#.1o|\n", 0);
	ft_printf("ft_printf:19.2|%#.1o|\n\n", 0);

	   printf("   printf:19.21|%#.1o|\n", 1);
	ft_printf("ft_printf:19.21|%#.1o|\n\n", 1);

	   printf("   printf:19.3|%#.2o|\n", 0);
	ft_printf("ft_printf:19.3|%#.2o|\n\n", 0);

	   printf("   printf:19.4|%#0.3o|\n", 0);
	ft_printf("ft_printf:19.4|%#0.3o|\n\n", 0);

	   printf("   printf:19.5|%#1.3o|\n", 0);
	ft_printf("ft_printf:19.5|%#1.3o|\n\n", 0);

	   printf("   printf:19.6|%#2.3o|\n", 0);
	ft_printf("ft_printf:19.6|%#2.3o|\n\n", 0);

	   printf("   printf:19.7|%#3.3o|\n", 0);
	ft_printf("ft_printf:19.7|%#3.3o|\n\n", 0);

	   printf("   printf:19.8|%#4.3o|\n", 0);
	ft_printf("ft_printf:19.8|%#4.3o|\n\n", 0);

	   printf("   printf:19.9|%#5.3o|\n", 0);
	ft_printf("ft_printf:19.9|%#5.3o|\n\n", 0);


	   printf("   printf:19.10|%#.3o|\n", 0);
	ft_printf("ft_printf:19.10|%#.3o|\n\n", 0);

	   printf("   printf:20|%#.0o|\n", 0);
	ft_printf("ft_printf:20|%#.0o|\n\n", 0);

	   printf("   printf:21|%#.o|\n", 0);
	ft_printf("ft_printf:21|%#.o|\n\n", 0);

	   printf("   printf:22|%#0o|\n", 0);
	ft_printf("ft_printf:22|%#0o|\n\n", 0);

	   printf("   printf:23|%#01o|\n", 1);
	ft_printf("ft_printf:23|%#01o|\n\n", 1);

	   printf("   printf:24|%#1o|\n", 1);
	ft_printf("ft_printf:24|%#1o|\n\n", 1);

	   printf("   printf:25|%1o|\n", 0);
	ft_printf("ft_printf:25|%1o|\n\n", 0);

	   printf("   printf:26|%#01o|\n", 0);
	ft_printf("ft_printf:26|%#01o|\n\n", 0);

	   printf("   printf:27|%#1o|\n", 1);
	ft_printf("ft_printf:27|%#1o|\n\n", 1);

	   printf("   printf:28|%#1o|\n", 1);
	ft_printf("ft_printf:28|%#1o|\n\n", 1);

	   printf("   printf:29|%#2o|\n", 0);
	ft_printf("ft_printf:29|%#2o|\n\n", 0);

	   printf("   printf:30|%#3o|\n", 0);
	ft_printf("ft_printf:30|%#3o|\n\n", 0);

	   printf("   printf:31|%#04o|\n", 0);
	ft_printf("ft_printf:31|%#04o|\n\n", 0);

	   printf("   printf:32|%00o|\n", 0);
	ft_printf("ft_printf:32|%00o|\n\n", 0);

	   printf("   printf:33|%01o|\n", 0);
	ft_printf("ft_printf:33|%01o|\n\n", 0);

	   printf("   printf:34|%02o|\n", 0);
	ft_printf("ft_printf:34|%02o|\n\n", 0);

	   printf("   printf:35|%03o|\n", 0);
	ft_printf("ft_printf:35|%03o|\n\n", 0);

	   printf("   printf:36|%03o|\n", 0);
	ft_printf("ft_printf:36|%03o|\n\n", 0);

	   printf("   printf:37|%03o|\n", 1);
	ft_printf("ft_printf:37|%03o|\n\n", 1);

	   printf("   printf:38|%08.o|\n", 1);
	ft_printf("ft_printf:38|%08.o|\n\n", 1);

	   printf("   printf:39|%08.0o|\n", 1);
	ft_printf("ft_printf:39|%08.0o|\n\n", 1);

	   printf("   printf:40|%08.1o|\n", 1);
	ft_printf("ft_printf:40|%08.1o|\n\n", 1);

	   printf("   printf:41|%08.2o|\n", 1);
	ft_printf("ft_printf:41|%08.2o|\n\n", 1);

	   printf("   printf:42|%08.3o|\n", 1);
	ft_printf("ft_printf:42|%08.3o|\n\n", 1);

	   printf("   printf:43|%08.4o|\n", 1);
	ft_printf("ft_printf:43|%08.4o|\n\n", 1);

	   printf("   printf:44|%08.o|\n", 0);
	ft_printf("ft_printf:44|%08.o|\n\n", 0);

	   printf("   printf:45|%08.0o|\n", 0);
	ft_printf("ft_printf:45|%08.0o|\n\n", 0);

	   printf("   printf:46|%08.1o|\n", 0);
	ft_printf("ft_printf:46|%08.1o|\n\n", 0);

	   printf("   printf:47|%08.2o|\n", 0);
	ft_printf("ft_printf:47|%08.2o|\n\n", 0);

	   printf("   printf:47|%08.3o|\n", 0);
	ft_printf("ft_printf:47|%08.3o|\n\n", 0);

	   printf("   printf:48|%08.4o|\n", 0);
	ft_printf("ft_printf:48|%08.4o|\n\n", 0);

	   printf("   printf:50.0|%#.0o|\n", 0);
	ft_printf("ft_printf:50.0|%#.0o|\n\n", 0);

	   printf("   printf:50.1|%#.0o|\n", 1);
	ft_printf("ft_printf:50.1|%#.0o|\n\n", 1);

	   printf("   printf:50.11|%#.0o|\n", 11);
	ft_printf("ft_printf:50.11|%#.0o|\n\n", 11);

	   printf("   printf:51.0|%#.o|\n", 0);
	ft_printf("ft_printf:51.0|%#.o|\n\n", 0);

	   printf("   printf:51.1|%#.o|\n", 1);
	ft_printf("ft_printf:51.1|%#.o|\n\n", 1);

	   printf("   printf:51.11|%#.o|\n", 11);
	ft_printf("ft_printf:51.11|%#.o|\n\n", 11);

	   printf("   printf:51.0|%#0o|\n", 0);
	ft_printf("ft_printf:51.0|%#0o|\n\n", 0);

	   printf("   printf:51.1|%#0o|\n", 1);
	ft_printf("ft_printf:51.1|%#0o|\n\n", 1);

	   printf("   printf:51.11|%#0o|\n", 11);
	ft_printf("ft_printf:51.11|%#0o|\n\n", 11);

	   printf("   printf:52.0|%#01o|\n", 0);
	ft_printf("ft_printf:52.0|%#01o|\n\n", 0);

	   printf("   printf:52.1|%#01o|\n", 1);
	ft_printf("ft_printf:52.1|%#01o|\n\n", 1);

	   printf("   printf:52.11|%#01o|\n", 11);
	ft_printf("ft_printf:52.11|%#01o|\n\n", 11);


	   printf("   printf:53|%#1o|\n", 1);
	ft_printf("ft_printf:53|%#1o|\n\n", 1);


	   printf("   printf:54|%1o|\n", 0);
	ft_printf("ft_printf:54|%1o|\n\n", 0);

	   printf("   printf:55|%#01o|\n", 0);
	ft_printf("ft_printf:55|%#01o|\n\n", 0);

	   printf("   printf:56|%#1o|\n", 1);
	ft_printf("ft_printf:56|%#1o|\n\n", 1);

	   printf("   printf:57|%#1o|\n", 1);
	ft_printf("ft_printf:57|%#1o|\n\n", 1);

	   printf("   printf:58|%#2o|\n", 0);
	ft_printf("ft_printf:58|%#2o|\n\n", 0);

	   printf("   printf:59|%#3o|\n", 0);
	ft_printf("ft_printf:59|%#3o|\n\n", 0);

	   printf("   printf:60|%#04o|\n", 0);
	ft_printf("ft_printf:60|%#04o|\n\n", 0);


//	ft_printf("ft_printf:4:|%llu|\n", num4_max);
//	   printf("   printf:4:|%llu|\n\n", num4_max);
	   printf("   printf:3|%#-8.5o|\n", 34);
	ft_printf("ft_printf:3|%#-8.5o|\n\n", 34);

	   printf("   printf:7|%#8.3o|\n", 34);
	ft_printf("ft_printf:7|%#8.3o|\n\n", 34);

	   printf("   printf:11|%#5o|\n", 0);
	ft_printf("ft_printf:11|%#5o|\n\n", 0);

	   printf("   printf:12|%#5.8o|\n", 0);
	ft_printf("ft_printf:12|%#5.8o|\n\n", 0);

	   printf("   printf:14|%#-3o|\n", 0);
	ft_printf("ft_printf:14|%#-3o|\n\n", 0);

	   printf("   printf:15|%#3o|\n", 0);
	ft_printf("ft_printf:15|%#3o|\n\n", 0);
	
	   printf("   printf:16|this %#o number,|\n", 0);
	ft_printf("ft_printf:16|this %#o number,|\n\n", 0);

	   printf("   printf:17|%#o|\n", 0);
	ft_printf("ft_printf:17|%#o|\n\n", 0);

	   printf("   printf:18|%0#o|\n", 0);
	ft_printf("ft_printf:18|%0#o|\n\n", 0);

	   printf("   printf:19.3|%#.2o|\n", 0);
	ft_printf("ft_printf:19.3|%#.2o|\n\n", 0);

	   printf("   printf:19.4|%#0.3o|\n", 0);
	ft_printf("ft_printf:19.4|%#0.3o|\n\n", 0);

	   printf("   printf:19.5|%#1.3o|\n", 0);
	ft_printf("ft_printf:19.5|%#1.3o|\n\n", 0);

	   printf("   printf:19.6|%#2.3o|\n", 0);
	ft_printf("ft_printf:19.6|%#2.3o|\n\n", 0);

	   printf("   printf:19.7|%#3.3o|\n", 0);
	ft_printf("ft_printf:19.7|%#3.3o|\n\n", 0);

	   printf("   printf:19.8|%#4.3o|\n", 0);
	ft_printf("ft_printf:19.8|%#4.3o|\n\n", 0);

	   printf("   printf:19.9|%#5.3o|\n", 0);
	ft_printf("ft_printf:19.9|%#5.3o|\n\n", 0);


	   printf("   printf:19.10|%#.3o|\n", 0);
	ft_printf("ft_printf:19.10|%#.3o|\n\n", 0);


	   printf("   printf:1.0|%#-0.5o|\n", 34);
	ft_printf("ft_printf:1.0|%#-0.5o|\n\n", 34);

	   printf("   printf:1.1|%#-1.5o|\n", 34);
	ft_printf("ft_printf:1.1|%#-1.5o|\n\n", 34);

	   printf("   printf:1.2|%#-2.5o|\n", 34);
	ft_printf("ft_printf:1.2|%#-2.5o|\n\n", 34);

	   printf("   printf:1.3|%#-3.5o|\n", 34);
	ft_printf("ft_printf:1.3|%#-3.5o|\n\n", 34);
	
	   printf("   printf:1.4|%#-4.5o|\n", 34);
	ft_printf("ft_printf:1.4|%#-4.5o|\n\n", 34);

	   printf("   printf:1.5|%#-5.5o|\n", 34);
	ft_printf("ft_printf:1.5|%#-5.5o|\n\n", 34);

	   printf("   printf:1.6|%#-6.5o|\n", 34);
	ft_printf("ft_printf:1.6|%#-6.5o|\n\n", 34);

	   printf("   printf:1.7|%#-7.5o|\n", 34);
	ft_printf("ft_printf:1.7|%#-7.5o|\n\n", 34);

	   printf("   printf:1.8|%#-8.5o|\n", 34);
	ft_printf("ft_printf:1.8|%#-8.5o|\n\n", 34);

	   printf("   printf:2.0|%#0.3o|\n", 34);
	ft_printf("ft_printf:2.0|%#0.3o|\n\n", 34);

	   printf("   printf:2.1|%#1.3o|\n", 34);
	ft_printf("ft_printf:2.1|%#1.3o|\n\n", 34);

	   printf("   printf:2.2|%#2.3o|\n", 34);
	ft_printf("ft_printf:2.2|%#2.3o|\n\n", 34);

	   printf("   printf:2.3|%#3.3o|\n", 34);
	ft_printf("ft_printf:2.3|%#3.3o|\n\n", 34);

	   printf("   printf:2.4|%#4.3o|\n", 34);
	ft_printf("ft_printf:2.4|%#4.3o|\n\n", 34);

	   printf("   printf:2.5|%#5.3o|\n", 34);
	ft_printf("ft_printf:2.5|%#5.3o|\n\n", 34);

	   printf("   printf:2.6|%#6.3o|\n", 34);
	ft_printf("ft_printf:2.6|%#6.3o|\n\n", 34);

	   printf("   printf:2.7|%#7.3o|\n", 34);
	ft_printf("ft_printf:2.7|%#7.3o|\n\n", 34);

	   printf("   printf:2.8|%#8.3o|\n", 34);
	ft_printf("ft_printf:2.8|%#8.3o|\n\n", 34);

	   printf("   printf:2.8|%#8o|\n", 34);
	ft_printf("ft_printf:2.8|%#8o|\n\n", 34);

//	   printf("   printf:p1|%#8o|\n", 34);
//	ft_printf("ft_printf:2.8|%#8o|\n\n", 34);
*/
/*
	   printf("   printf:0|%5p|\n", 0);
	ft_printf("ft_printf:0|%5p|\n\n", 0);
	
 	   printf("   printf:1|%05p|\n", 0);
	ft_printf("ft_printf:1|%05p|\n\n", 0);

	   printf("   printf:2|%#5p|\n", 0);
	ft_printf("ft_printf:2|%#5p|\n\n", 0);

	   printf("   printf:3|%+5p|\n", 0);
	ft_printf("ft_printf:3|%+5p|\n\n", 0);

	   printf("   printf:4|% 5p|\n", 0);
	ft_printf("ft_printf:4|% 5p|\n\n", 0);

	   printf("   printf:5|%-5p|\n", 0);
	ft_printf("ft_printf:5|%-5p|\n\n", 0);

	   printf("   printf:6|%-#5p|\n", 0);
	ft_printf("ft_printf:6|%-#5p|\n\n", 0);

	   printf("   printf:7|%0#5p|\n", 0);
	ft_printf("ft_printf:7|%0#5p|\n\n", 0);


	int *num_0 = 4568;
	int *num_1 = -4568;

	   printf("   printf:8|%5p|\n", num_0);
	ft_printf("ft_printf:8|%5p|\n\n", num_0);

	   printf("   printf:9|%#5p|\n", num_1);
	ft_printf("ft_printf:9|%#5p|\n\n", num_1);

	   printf("   printf:10|%8.5p|\n", 34);
	ft_printf("ft_printf:10|%8.5p|\n\n", 34);

	   printf("   printf:11|%#8.5p|\n", 34);
	ft_printf("ft_printf:11|%#8.5p|\n\n", 34);
*/
/*	
	   printf("   printf:0|%5x|\n", 0);
	ft_printf("ft_printf:0|%5x|\n\n", 0);
	
 	   printf("   printf:1|%05x|\n", 0);
	ft_printf("ft_printf:1|%05x|\n\n", 0);

	   printf("   printf:2|%#5x|\n", 0);
	ft_printf("ft_printf:2|%#5x|\n\n", 0);

	   printf("   printf:3|%+5x|\n", 0);
	ft_printf("ft_printf:3|%+5x|\n\n", 0);

	   printf("   printf:4|% 5x|\n", 0);
	ft_printf("ft_printf:4|% 5x|\n\n", 0);

	   printf("   printf:5|%-5x|\n", 0);
	ft_printf("ft_printf:5|%-5x|\n\n", 0);

	   printf("   printf:6|%-#5x|\n", 0);
	ft_printf("ft_printf:6|%-#5x|\n\n", 0);

	   printf("   printf:7|%0#5x|\n", 0);
	ft_printf("ft_printf:7|%0#5x|\n\n", 0);

	   printf("   printf:0|%5x|\n", 789);
	ft_printf("ft_printf:0|%5x|\n\n", 789);
	
 	   printf("   printf:1|%05x|\n", 789);
	ft_printf("ft_printf:1|%05x|\n\n", 789);

	   printf("   printf:2|%#5x|\n", 789);
	ft_printf("ft_printf:2|%#5x|\n\n", 789);

	   printf("   printf:3|%+5x|\n", 789);
	ft_printf("ft_printf:3|%+5x|\n\n", 789);

	   printf("   printf:4|% 5x|\n", 789);
	ft_printf("ft_printf:4|% 5x|\n\n", 789);

	   printf("   printf:5|%-5x|\n", 789);
	ft_printf("ft_printf:5|%-5x|\n\n", 789);

	   printf("   printf:6|%-#5x|\n", 789);
	ft_printf("ft_printf:6|%-#5x|\n\n", 789);

	   printf("   printf:7|%0#5x|\n", 789);
	ft_printf("ft_printf:7|%0#5x|\n\n", 789);

	   printf("   printf:0|%x|\n", 0);
	ft_printf("ft_printf:0|%x|\n\n", 0);

	   printf("   printf:1|%x|\n", 1);
	ft_printf("ft_printf:1|%x|\n\n", 1);

	   printf("   printf:2|%x|\n", 11);
	ft_printf("ft_printf:2|%x|\n\n", 11);

	   printf("   printf:3|%x|\n", 111);
	ft_printf("ft_printf:3|%x|\n\n", 111);

	   printf("   printf:4|% x|\n", 0);
	ft_printf("ft_printf:4|% x|\n\n", 0);

	   printf("   printf:5|% x|\n", 1);
	ft_printf("ft_printf:5|% x|\n\n", 1);

	   printf("   printf:6|% x|\n", 11);
	ft_printf("ft_printf:6|% x|\n\n", 11);

	   printf("   printf:7|% x|\n", 111);
	ft_printf("ft_printf:7|% x|\n\n", 111);

	   printf("   printf:8|%+x|\n", 0);
	ft_printf("ft_printf:8|%+x|\n\n", 0);

	   printf("   printf:9|%+x|\n", 1);
	ft_printf("ft_printf:9|%+x|\n\n", 1);

	   printf("   printf:10|%+x|\n", 11);
	ft_printf("ft_printf:10|%+x|\n\n", 11);

	   printf("   printf:11|%+x|\n", 111);
	ft_printf("ft_printf:11|%+x|\n\n", 111);

	   printf("   printf:12|%0x|\n", 0);
	ft_printf("ft_printf:12|%0x|\n\n", 0);

	   printf("   printf:13|%0x|\n", 1);
	ft_printf("ft_printf:13|%0x|\n\n", 1);

	   printf("   printf:14|%0x|\n", 11);
	ft_printf("ft_printf:14|%0x|\n\n", 11);

	   printf("   printf:15|%0x|\n", 111);
	ft_printf("ft_printf:15|%0x|\n\n", 111);

	   printf("   printf:16|%#x|\n", 0);
	ft_printf("ft_printf:16|%#x|\n\n", 0);

	   printf("   printf:17|%#x|\n", 1);
	ft_printf("ft_printf:17|%#x|\n\n", 1);

	   printf("   printf:18|%#x|\n", 11);
	ft_printf("ft_printf:18|%#x|\n\n", 11);

	   printf("   printf:19|%#x|\n", 111);
	ft_printf("ft_printf:19|%#x|\n\n", 111);


	   printf("   printf:20|%8.0x|\n", 34);
	ft_printf("ft_printf:20|%8.0x|\n\n", 34);

	   printf("   printf:20|%#8.0x|\n", 34);
	ft_printf("ft_printf:20|%#8.0x|\n\n", 34);

	   printf("   printf:21|%8.1x|\n", 34);
	ft_printf("ft_printf:21|%8.1x|\n\n", 34);

	   printf("   printf:21|%#8.1x|\n", 34);
	ft_printf("ft_printf:21|%#8.1x|\n\n", 34);

	   printf("   printf:22|%8.2x|\n", 34);
	ft_printf("ft_printf:22|%8.2x|\n\n", 34);

	   printf("   printf:22|%#8.2x|\n", 34);
	ft_printf("ft_printf:22|%#8.2x|\n\n", 34);

	   printf("   printf:23|%8.3x|\n", 34);
	ft_printf("ft_printf:23|%8.3x|\n\n", 34);

	   printf("   printf:24|%#8.3x|\n", 34);
	ft_printf("ft_printf:24|%#8.3x|\n\n", 34);

	   printf("   printf:25|%8.4x|\n", 34);
	ft_printf("ft_printf:25|%8.4x|\n\n", 34);

	   printf("   printf:26|%#8.4x|\n", 34);
	ft_printf("ft_printf:26|%#8.4x|\n\n", 34);

	   printf("   printf:27|%8.5x|\n", 34);
	ft_printf("ft_printf:27|%8.5x|\n\n", 34);

	   printf("   printf:27|%#8.5x|\n", 34);
	ft_printf("ft_printf:27|%#8.5x|\n\n", 34);

	   printf("   printf:22|%8x|\n", 34);
	ft_printf("ft_printf:22|%8x|\n\n", 34);

	   printf("   printf:23|%#8x|\n", 34);
	ft_printf("ft_printf:23|%#8x|\n\n", 34);
*/
/*	
	   printf("   printf:0|%x|\n", 0);
	ft_printf("ft_printf:0|%x|\n\n", 0);

	   printf("   printf:1|%.x|\n", 0);
	ft_printf("ft_printf:1|%.x|\n\n", 0);

	   printf("   printf:2|%.0x|\n", 0);
	ft_printf("ft_printf:2|%.0x|\n\n", 0);

	   printf("   printf:3|%.1x|\n", 0);
	ft_printf("ft_printf:3|%.1x|\n\n", 0);

	   printf("   printf:4|%x|\n", 1);
	ft_printf("ft_printf:4|%x|\n\n", 1);

	   printf("   printf:5|%.x|\n", 1);
	ft_printf("ft_printf:5|%.x|\n\n", 1);

	   printf("   printf:6|%.0x|\n", 1);
	ft_printf("ft_printf:6|%.0x|\n\n", 1);

	   printf("   printf:7|%.1x|\n", 0);
	ft_printf("ft_printf:7|%.1x|\n\n", 0);

	   printf("   printf:0|%#x|\n", 0);
	ft_printf("ft_printf:0|%#x|\n\n", 0);

	   printf("   printf:1|%#.x|\n", 0);
	ft_printf("ft_printf:1|%.x|\n\n", 0);

	   printf("   printf:2|%#.0x|\n", 0);
	ft_printf("ft_printf:2|%#.0x|\n\n", 0);

	   printf("   printf:3|%#.1x|\n", 0);
	ft_printf("ft_printf:3|%#.1x|\n\n", 0);

	   printf("   printf:4|%#x|\n", 1);
	ft_printf("ft_printf:4|%#x|\n\n", 1);

	   printf("   printf:5|%#.x|\n", 1);
	ft_printf("ft_printf:5|%#.x|\n\n", 1);

	   printf("   printf:6|%#.0x|\n", 1);
	ft_printf("ft_printf:6|%#.0x|\n\n", 1);

	   printf("   printf:7|%#.1x|\n", 0);
	ft_printf("ft_printf:7|%#.1x|\n\n", 0);
*/
/*
	   printf("   printf:0|%#0x|\n", 33);
	ft_printf("ft_printf:0|%#0x|\n\n", 33);

	   printf("   printf:1|%#1x|\n", 33);
	ft_printf("ft_printf:1|%#1x|\n\n", 33);

	   printf("   printf:2|%#2x|\n", 33);
	ft_printf("ft_printf:2|%#2x|\n\n", 33);

	   printf("   printf:3|%#3x|\n", 33);
	ft_printf("ft_printf:3|%#3x|\n\n", 33);


	   printf("   printf:4|%#4x|\n", 33);
	ft_printf("ft_printf:4|%#4x|\n\n", 33);

	   printf("   printf:5|%#5x|\n", 33);
	ft_printf("ft_printf:5|%#5x|\n\n", 33);


	   printf("   printf:6|%#6x|\n", 33);
	ft_printf("ft_printf:6|%#6x|\n\n", 33);


	   printf("   printf:7|%#-0x|\n", 33);
	ft_printf("ft_printf:7|%#-0x|\n\n", 33);

	   printf("   printf:8|%#-1x|\n", 33);
	ft_printf("ft_printf:8|%#-1x|\n\n", 33);

	   printf("   printf:9|%#-2x|\n", 33);
	ft_printf("ft_printf:9|%#-2x|\n\n", 33);

	   printf("   printf:10|%#-3x|\n", 33);
	ft_printf("ft_printf:10|%#-3x|\n\n", 33);


	   printf("   printf:11|%#-4x|\n", 33);
	ft_printf("ft_printf:11|%#-4x|\n\n", 33);

	   printf("   printf:12|%#-5x|\n", 33);
	ft_printf("ft_printf:12|%#-5x|\n\n", 33);


	   printf("   printf:13|%#-6x|\n", 33);
	ft_printf("ft_printf:13|%#-6x|\n\n", 33);

	   printf("   printf:14|%#.x|\n", 33);
	ft_printf("ft_printf:14|%#.x|\n\n", 33);

	   printf("   printf:15|%#.0x|\n", 33);
	ft_printf("ft_printf:15|%#.0x|\n\n", 33);

	   printf("   printf:16|%#.1x|\n", 33);
	ft_printf("ft_printf:16|%#.1x|\n\n", 33);

	   printf("   printf:17|%#.2x|\n", 33);
	ft_printf("ft_printf:17|%#.2x|\n\n", 33);

	   printf("   printf:18|%#.3x|\n", 33);
	ft_printf("ft_printf:18|%#.3x|\n\n", 33);

	   printf("   printf:19|%#.4x|\n", 33);
	ft_printf("ft_printf:19|%#.4x|\n\n", 33);


	   printf("   printf:20|%.x|\n", 33);
	ft_printf("ft_printf:20|%.x|\n\n", 33);

	   printf("   printf:21|%.0x|\n", 33);
	ft_printf("ft_printf:21|%.0x|\n\n", 33);

	   printf("   printf:22|%.1x|\n", 33);
	ft_printf("ft_printf:22|%.1x|\n\n", 33);

	   printf("   printf:23|%.2x|\n", 33);
	ft_printf("ft_printf:23|%.2x|\n\n", 33);

	   printf("   printf:24|%.3x|\n", 33);
	ft_printf("ft_printf:24|%.3x|\n\n", 33);

	   printf("   printf:25|%.4x|\n", 33);
	ft_printf("ft_printf:25|%.4x|\n\n", 33);

	   printf("   printf:26|%05x|\n", 43);
	ft_printf("ft_printf:26|%05x|\n\n", 43);

	   printf("   printf:27|%5x|\n", 43);
	ft_printf("ft_printf:27|%5x|\n\n", 43);

	   printf("   printf:28|%08.5x|\n", 34);
	ft_printf("ft_printf:28|%08.5x|\n\n", 34);

	   printf("   printf:29|%08.3x|\n", 8375);
	ft_printf("ft_printf:29|%08.3x|\n\n", 8375);

	   printf("   printf:30|%#08.5x|\n", 34);
	ft_printf("ft_printf:30|%#08.5x|\n\n", 34);

	   printf("   printf:31|%#0.0x|\n", 0);
	ft_printf("ft_printf:31|%#0.0x|\n\n", 0);

	   printf("   printf:32|%#-0.x|\n", 0);
	ft_printf("ft_printf:32|%#-0.x|\n\n", 0);

	   printf("   printf:33|%-0.0x|\n", 0);
	ft_printf("ft_printf:33|%-0.0x|\n\n", 0);

	   printf("   printf:34|%#-1.x|\n", 0);
	ft_printf("ft_printf:34|%#-1.x|\n\n", 0);

	   printf("   printf:35|%-1.0x|\n", 0);
	ft_printf("ft_printf:35|%-1.0x|\n\n", 0);

	   printf("   printf:36|%#-2.x|\n", 0);
	ft_printf("ft_printf:36|%#-2.x|\n\n", 0);

	   printf("   printf:37|%-2.0x|\n", 0);
	ft_printf("ft_printf:37|%-2.0x|\n\n", 0);

	   printf("   printf:38|%#-3.x|\n", 0);
	ft_printf("ft_printf:38|%#-3.x|\n\n", 0);

	   printf("   printf:39|%-3.0x|\n", 0);
	ft_printf("ft_printf:39|%-3.0x|\n\n", 0);

	   printf("   printf:40|%#-4.x|\n", 0);
	ft_printf("ft_printf:40|%#-4.x|\n\n", 0);

	   printf("   printf:41|%-4.0x|\n", 0);
	ft_printf("ft_printf:41|%-4.0x|\n\n", 0);

	   printf("   printf:42|%#-5.x|\n", 0);
	ft_printf("ft_printf:42|%#-5.x|\n\n", 0);


	   printf("   printf:43|%-5.0x|\n", 0);
	ft_printf("ft_printf:43|%-5.0x|\n\n", 0);

	   printf("   printf:44|%#0.x|\n", 0);
	ft_printf("ft_printf:44|%#0.x|\n\n", 0);

	   printf("   printf:45|%0.x|\n", 0);
	ft_printf("ft_printf:45|%0.x|\n\n", 0);

	   printf("   printf:46|%#1.x|\n", 0);
	ft_printf("ft_printf:46|%#1.x|\n\n", 0);

	   printf("   printf:47|%1.x|\n", 0);
	ft_printf("ft_printf:47|%1.x|\n\n", 0);

	   printf("   printf:48|%#2.x|\n", 0);
	ft_printf("ft_printf:48|%#2.x|\n\n", 0);

	   printf("   printf:49|%2.x|\n", 0);
	ft_printf("ft_printf:49|%2.x|\n\n", 0);

	   printf("   printf:50|%#3.x|\n", 0);
	ft_printf("ft_printf:50|%#3.x|\n\n", 0);

	   printf("   printf:51|%3.x|\n", 0);
	ft_printf("ft_printf:51|%3.x|\n\n", 0);

	   printf("   printf:52|%#4.x|\n", 0);
	ft_printf("ft_printf:52|%#4.x|\n\n", 0);

	   printf("   printf:53|%4.x|\n", 0);
	ft_printf("ft_printf:53|%4.x|\n\n", 0);

	   printf("   printf:54|%#5.x|\n", 0);
	ft_printf("ft_printf:54|%#5.x|\n\n", 0);

	   printf("   printf:55|%5.x|\n", 0);
	ft_printf("ft_printf:55|%5.x|\n\n", 0);
*/
/*
	printf("Simple test for x no Width, no Precision\n");
	printf("No hash\n");
	   printf("   printf:0|%x|\n", 0);
	ft_printf("ft_printf:0|%x|\n\n", 0);

	   printf("   printf:1|%x|\n", -1);
	ft_printf("ft_printf:1|%x|\n\n", -1);

	   printf("   printf:2|%x|\n", 1);
	ft_printf("ft_printf:2|%x|\n\n", 1);

	   printf("   printf:3|%x|\n", 2);
	ft_printf("ft_printf:3|%x|\n\n", 2);

	   printf("   printf:4|%x|\n", 2147483647);
	ft_printf("ft_printf:4|%x|\n\n", 2147483647);

	   printf("   printf:4|%x|\n", -2147483648);
	ft_printf("ft_printf:4|%x|\n\n", -2147483648);

	   printf("   printf:5|%lx|\n", -2147483648);
	ft_printf("ft_printf:5|%lx|\n\n", -2147483648);

	printf("With hash\n");
	   printf("   printf:0|%#x|\n", 0);
	ft_printf("ft_printf:0|%#x|\n\n", 0);

	   printf("   printf:1|%#x|\n", -1);
	ft_printf("ft_printf:1|%#x|\n\n", -1);

	   printf("   printf:2|%#x|\n", 1);
	ft_printf("ft_printf:2|%#x|\n\n", 1);

	   printf("   printf:3|%#x|\n", 2);
	ft_printf("ft_printf:3|%#x|\n\n", 2);

	   printf("   printf:4|%#x|\n", 2147483647);
	ft_printf("ft_printf:4|%#x|\n\n", 2147483647);

	   printf("   printf:4|%#x|\n", -2147483648);
	ft_printf("ft_printf:4|%#x|\n\n", -2147483648);

	   printf("   printf:5|%#lx|\n", -2147483648);
	ft_printf("ft_printf:5|%#lx|\n\n", -2147483648);

	printf("Test for no width, precision .\n");
	printf("No hash\n");
	   printf("   printf:0|%.x|\n", 0);
	ft_printf("ft_printf:0|%.x|\n\n", 0);

	   printf("   printf:1|%.x|\n", -1);
	ft_printf("ft_printf:1|%.x|\n\n", -1);

	   printf("   printf:2|%.x|\n", 1);
	ft_printf("ft_printf:2|%.x|\n\n", 1);

	   printf("   printf:3|%.x|\n", 2);
	ft_printf("ft_printf:3|%.x|\n\n", 2);

	   printf("   printf:4|%.x|\n", 2147483647);
	ft_printf("ft_printf:4|%.x|\n\n", 2147483647);

	   printf("   printf:4|%.x|\n", -2147483648);
	ft_printf("ft_printf:4|%.x|\n\n", -2147483648);

	   printf("   printf:5|%.lx|\n", -2147483648);
	ft_printf("ft_printf:5|%.lx|\n\n", -2147483648);

	printf("Test for no width, precision .0\n");
	   printf("   printf:0|%.0x|\n", 0);
	ft_printf("ft_printf:0|%.0x|\n\n", 0);

	   printf("   printf:1|%.0x|\n", -1);
	ft_printf("ft_printf:1|%.0x|\n\n", -1);

	   printf("   printf:2|%.0x|\n", 1);
	ft_printf("ft_printf:2|%.0x|\n\n", 1);

	   printf("   printf:3|%.0x|\n", 2);
	ft_printf("ft_printf:3|%.0x|\n\n", 2);

	   printf("   printf:4|%.0x|\n", 2147483647);
	ft_printf("ft_printf:4|%.0x|\n\n", 2147483647);

	   printf("   printf:4|%.0x|\n", -2147483648);
	ft_printf("ft_printf:4|%.0x|\n\n", -2147483648);

	   printf("   printf:5|%.0lx|\n", -2147483648);
	ft_printf("ft_printf:5|%.0lx|\n\n", -2147483648);

	printf("Test for no width, precision .1\n");

	   printf("   printf:0|%.1x|\n", 0);
	ft_printf("ft_printf:0|%.1x|\n\n", 0);

	   printf("   printf:1|%.1x|\n", -1);
	ft_printf("ft_printf:1|%.1x|\n\n", -1);

	   printf("   printf:2|%.1x|\n", 1);
	ft_printf("ft_printf:2|%.1x|\n\n", 1);

	   printf("   printf:3|%.1x|\n", 2);
	ft_printf("ft_printf:3|%.1x|\n\n", 2);

	   printf("   printf:4|%.1x|\n", 2147483647);
	ft_printf("ft_printf:4|%.1x|\n\n", 2147483647);

	   printf("   printf:4|%.1x|\n", -2147483648);
	ft_printf("ft_printf:4|%.1x|\n\n", -2147483648);

	   printf("   printf:5|%.1lx|\n", -2147483648);
	ft_printf("ft_printf:5|%.1lx|\n\n", -2147483648);

	printf("Test for no width, precision .\n");
	printf("Hash\n");
	   printf("   printf:0|%#.x|\n", 0);
	ft_printf("ft_printf:0|%#.x|\n\n", 0);

	   printf("   printf:1|%#.x|\n", -1);
	ft_printf("ft_printf:1|%#.x|\n\n", -1);

	   printf("   printf:2|%#.x|\n", 1);
	ft_printf("ft_printf:2|%#.x|\n\n", 1);

	   printf("   printf:3|%#.x|\n", 2);
	ft_printf("ft_printf:3|%#.x|\n\n", 2);

	   printf("   printf:4|%#.x|\n", 2147483647);
	ft_printf("ft_printf:4|%#.x|\n\n", 2147483647);

	   printf("   printf:4|%#.x|\n", -2147483648);
	ft_printf("ft_printf:4|%#.x|\n\n", -2147483648);

	   printf("   printf:5|%#.lx|\n", -2147483648);
	ft_printf("ft_printf:5|%#.lx|\n\n", -2147483648);

	printf("Test for no width, precision .0\n");
	   printf("   printf:0|%#.0x|\n", 0);
	ft_printf("ft_printf:0|%#.0x|\n\n", 0);

	   printf("   printf:1|%#.0x|\n", -1);
	ft_printf("ft_printf:1|%#.0x|\n\n", -1);

	   printf("   printf:2|%#.0x|\n", 1);
	ft_printf("ft_printf:2|%#.0x|\n\n", 1);

	   printf("   printf:3|%#.0x|\n", 2);
	ft_printf("ft_printf:3|%#.0x|\n\n", 2);

	   printf("   printf:4|%#.0x|\n", 2147483647);
	ft_printf("ft_printf:4|%#.0x|\n\n", 2147483647);

	   printf("   printf:4|%#.0x|\n", -2147483648);
	ft_printf("ft_printf:4|%#.0x|\n\n", -2147483648);

	   printf("   printf:5|%#.0lx|\n", -2147483648);
	ft_printf("ft_printf:5|%#.0lx|\n\n", -2147483648);

	printf("Test for no width, precision .1\n");

	   printf("   printf:0|%#.1x|\n", 0);
	ft_printf("ft_printf:0|%#.1x|\n\n", 0);

	   printf("   printf:1|%#.1x|\n", -1);
	ft_printf("ft_printf:1|%#.1x|\n\n", -1);

	   printf("   printf:2|%#.1x|\n", 1);
	ft_printf("ft_printf:2|%#.1x|\n\n", 1);

	   printf("   printf:3|%#.1x|\n", 2);
	ft_printf("ft_printf:3|%#.1x|\n\n", 2);

	   printf("   printf:4|%#.1x|\n", 2147483647);
	ft_printf("ft_printf:4|%#.1x|\n\n", 2147483647);

	   printf("   printf:4|%#.1x|\n", -2147483648);
	ft_printf("ft_printf:4|%#.1x|\n\n", -2147483648);

	   printf("   printf:5|%#.1lx|\n", -2147483648);
	ft_printf("ft_printf:5|%#.1lx|\n\n", -2147483648);


	printf("Test for no width, precision .\n");
	printf("ZERO\n");
	   printf("   printf:0|%0.x|\n", 0);
	ft_printf("ft_printf:0|%0.x|\n\n", 0);

	   printf("   printf:1|%0.x|\n", -1);
	ft_printf("ft_printf:1|%0.x|\n\n", -1);

	   printf("   printf:2|%0.x|\n", 1);
	ft_printf("ft_printf:2|%0.x|\n\n", 1);

	   printf("   printf:3|%0.x|\n", 2);
	ft_printf("ft_printf:3|%0.x|\n\n", 2);

	   printf("   printf:4|%0.x|\n", 2147483647);
	ft_printf("ft_printf:4|%0.x|\n\n", 2147483647);

	   printf("   printf:4|%0.x|\n", -2147483648);
	ft_printf("ft_printf:4|%0.x|\n\n", -2147483648);

	   printf("   printf:5|%0.lx|\n", -2147483648);
	ft_printf("ft_printf:5|%0.lx|\n\n", -2147483648);

	printf("Test for no widt0, precision .0\n");
	   printf("   printf:0|%0.0x|\n", 0);
	ft_printf("ft_printf:0|%0.0x|\n\n", 0);

	   printf("   printf:1|%0.0x|\n", -1);
	ft_printf("ft_printf:1|%0.0x|\n\n", -1);

	   printf("   printf:2|%0.0x|\n", 1);
	ft_printf("ft_printf:2|%0.0x|\n\n", 1);

	   printf("   printf:3|%0.0x|\n", 2);
	ft_printf("ft_printf:3|%0.0x|\n\n", 2);

	   printf("   printf:4|%0.0x|\n", 2147483647);
	ft_printf("ft_printf:4|%0.0x|\n\n", 2147483647);

	   printf("   printf:4|%0.0x|\n", -2147483648);
	ft_printf("ft_printf:4|%0.0x|\n\n", -2147483648);

	   printf("   printf:5|%0.0lx|\n", -2147483648);
	ft_printf("ft_printf:5|%0.0lx|\n\n", -2147483648);

	printf("Test for no widt0, precision .1\n");

	   printf("   printf:0|%0.1x|\n", 0);
	ft_printf("ft_printf:0|%0.1x|\n\n", 0);

	   printf("   printf:1|%0.1x|\n", -1);
	ft_printf("ft_printf:1|%0.1x|\n\n", -1);

	   printf("   printf:2|%0.1x|\n", 1);
	ft_printf("ft_printf:2|%0.1x|\n\n", 1);

	   printf("   printf:3|%0.1x|\n", 2);
	ft_printf("ft_printf:3|%0.1x|\n\n", 2);

	   printf("   printf:4|%0.1x|\n", 2147483647);
	ft_printf("ft_printf:4|%0.1x|\n\n", 2147483647);

	   printf("   printf:4|%0.1x|\n", -2147483648);
	ft_printf("ft_printf:4|%0.1x|\n\n", -2147483648);

	   printf("   printf:5|%0.1lx|\n", -2147483648);
	ft_printf("ft_printf:5|%0.1lx|\n\n", -2147483648);
	
	printf("----------------------Start unit test x flag---------------------\n");
	printf("-----------------------------------------------------------------\n\n");
	int num;
	num = 0;

	printf("\n|%d|\n",    printf("   printf:14:(%%.5x, %d)    |%.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%.5x, %d)    |%.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%#.5x, %d)    |%#.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%#.5x, %d)    |%#.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%0.5x, %d)    |%0.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%0.5x, %d)    |%0.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:17:(%%0#.5x, %d)    |%0#.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:17:(%%0#.5x, %d)    |%0#.5x|", num, num));
	printf("\n");


	printf(" Yes Width, no precision - Minus Width\n");
//	num = 16;
	printf("\n|%d|\n",    printf("   printf:0:(%%-0x, %d)    |%-0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:0:(%%-0x, %d)    |%-0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:1:(%%-1x, %d)    |%-1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%-1x, %d)    |%-1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%-2x, %d)    |%-2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%-2x, %d)    |%-2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%-3x, %d)    |%-3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%-3x, %d)    |%-3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%-4x, %d)    |%-4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%-4x, %d)    |%-4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:5:(%%-5x, %d)    |%-5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:5:(%%-5x, %d)    |%-5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:6:(%%-6x, %d)    |%-6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:6:(%%-6x, %d)    |%-6x|", num, num));
	printf("\n");


	printf("\n|%d|\n",    printf("   printf:7:(%%#-0x, %d)    |%#-0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:7:(%%#-0x, %d)    |%#-0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:8:(%%#-1x, %d)    |%#-1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:8:(%%#-1x, %d)    |%#-1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:9:(%%#-2x, %d)    |%#-2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:9:(%%#-2x, %d)    |%#-2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%#-3x, %d)    |%#-3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%#-3x, %d)    |%#-3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%#-4x, %d)    |%#-4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%#-4x, %d)    |%#-4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%#-5x, %d)    |%#-5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%#-5x, %d)    |%#-5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%#-6x, %d)    |%#-6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%#-6x, %d)    |%#-6x|", num, num));
	printf("\n");

	printf("Minus flag == false\n\n");
	printf("Just Width\n");

	printf("\n|%d|\n",    printf("   printf:0:(%%0x, %d)    |%0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:0:(%%0x, %d)    |%0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:1:(%%1x, %d)    |%1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%1x, %d)    |%1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%2x, %d)    |%2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%2x, %d)    |%2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%3x, %d)    |%3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%3x, %d)    |%3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%4x, %d)    |%4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%4x, %d)    |%4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:5:(%%5x, %d)    |%5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:5:(%%5x, %d)    |%5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:6:(%%6x, %d)    |%6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:6:(%%6x, %d)    |%6x|", num, num));
	printf("\n");
	printf("Width and Hash\n\n");

	printf("\n|%d|\n",    printf("   printf:7:(%%#0x, %d)    |%#0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:7:(%%#0x, %d)    |%#0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:8:(%%#1x, %d)    |%#1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:8:(%%#1x, %d)    |%#1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:9:(%%#2x, %d)    |%#2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:9:(%%#2x, %d)    |%#2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%#3x, %d)    |%#3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%#3x, %d)    |%#3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%#4x, %d)    |%#4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%#4x, %d)    |%#4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%#5x, %d)    |%#5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%#5x, %d)    |%#5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%#6x, %d)    |%#6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%#6x, %d)    |%#6x|", num, num));
	printf("\n");
	printf("Width and Zero\n\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%00x, %d)    |%00x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%00x, %d)    |%00x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%01x, %d)    |%01x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%01x, %d)    |%01x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%02x, %d)    |%02x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%02x, %d)    |%02x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:17:(%%03x, %d)    |%03x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:17:(%%03x, %d)    |%03x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:18:(%%04x, %d)    |%04x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:18:(%%04x, %d)    |%04x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:19:(%%05x, %d)    |%05x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:19:(%%05x, %d)    |%05x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:20:(%%06x, %d)    |%06x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:20:(%%06x, %d)    |%06x|", num, num));
	printf("\n");
	printf("Width, zero and hash\n\n");

	printf("\n|%d|\n",    printf("   printf:21:(%%0#0x, %d)    |%0#0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:21:(%%0#0x, %d)    |%0#0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:22:(%%0#1x, %d)    |%0#1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:22:(%%0#1x, %d)    |%0#1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:23:(%%0#2x, %d)    |%0#2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:23:(%%0#2x, %d)    |%0#2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:24:(%%0#3x, %d)    |%0#3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:24:(%%0#3x, %d)    |%0#3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:25:(%%0#4x, %d)    |%0#4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:25:(%%0#4x, %d)    |%0#4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:26:(%%0#5x, %d)    |%0#5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:26:(%%0#5x, %d)    |%0#5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:27:(%%0#6x, %d)    |%0#6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:27:(%%0#6x, %d)    |%0#6x|", num, num));
	printf("\n");

	printf("\nyes_width_yes_precision------------------------------------------\n");
	printf("1: No hash - No zero _ To Test value of 0--------------------------\n");

//	num = 0;

	printf("\n|%d|\n",    printf("   printf:1:(%%0.x, %d)    |%0.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%0.x, %d)    |%0.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%0.0x, %d)   |%0.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%0.0x, %d)   |%0.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%1.x, %d)    |%1.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%1.x, %d)    |%1.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%1.0x, %d)   |%1.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%1.0x, %d)   |%1.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:1:(%%2.x, %d)    |%2.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%2.x, %d)    |%2.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%2.0x, %d)   |%2.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%2.0x, %d)   |%2.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%3.x, %d)    |%3.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%3.x, %d)    |%3.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%3.0x, %d)   |%3.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%3.0x, %d)   |%3.0x|", num, num));
	printf("\n");

	printf("\nyes_width_yes_precision\n");
	printf("flag minus = true\n");
	printf("1: No hash - No zero _ To Test values other than 0.\n");


	printf("\n|%d|\n",    printf("   printf:1:(%%-0.x, %d)     |%-0.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%-0.x, %d)     |%-0.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%-0.0x, %d)    |%-0.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%-0.0x, %d)    |%-0.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%-1.x, %d)     |%-1.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%-1.x, %d)     |%-1.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%-1.0x, %d)    |%-1.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%-1.0x, %d)    |%-1.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:5:(%%-2.x, %d)     |%-2.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:5:(%%-2.x, %d)     |%-2.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:6:(%%-2.0x, %d)    |%-2.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:6:(%%-2.0x, %d)    |%-2.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:7:(%%-3.x, %d)     |%-3.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:7:(%%-3.x, %d)     |%-3.x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:8:(%%-3.0x, %d)    |%-3.x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:8:(%%-3.0x, %d)    |%-3.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:9:(%%-0.1x, %d)    |%-0.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:9:(%%-0.1x, %d)    |%-0.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%-1.2x, %d)   |%-1.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%-1.2x, %d)   |%-1.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%-2.3x, %d)   |%-2.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%-2.3x, %d)   |%-2.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%-3.4x, %d)   |%-3.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%-3.4x, %d)   |%-3.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%-4.5x, %d)   |%-4.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%-4.5x, %d)   |%-4.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%-5.6x, %d)   |%-5.6x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%-5.6x, %d)   |%-5.6x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%-6.7x, %d)   |%-6.7x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%-6.7x, %d)   |%-6.7x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%-7.8x, %d)   |%-7.8x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%-7.8x, %d)   |%-7.8x|", num, num));
	printf("\n");

	printf("Minus flag true\n\nWith Hash\n\n");

	printf("\nyes_width_yes_precision\n");
	printf("flag minus = true\n");
	printf("2: With hash - No zero _ To Test values other than 0.\n");

//	num = 0;

	printf("\n|%d|\n",    printf("   printf:1:(%%#-1.0x, %d)    |%#-1.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:1:(%%#-1.0x, %d)    |%#-1.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:2:(%%#-1.1x, %d)    |%#-1.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:2:(%%#-1.1x, %d)    |%#-1.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:3:(%%#-1.2x, %d)    |%#-1.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:3:(%%#-1.2x, %d)    |%#-1.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:4:(%%#-1.3x, %d)    |%#-1.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:4:(%%#-1.3x, %d)    |%#-1.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:5:(%%#-1.4x, %d)    |%#-1.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:5:(%%#-1.4x, %d)    |%#-1.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:6:(%%#-1.5x, %d)    |%#-1.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:6:(%%#-1.5x, %d)    |%#-1.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:7:(%%#-2.0x, %d)    |%#-2.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:7:(%%#-2.0x, %d)    |%#-2.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:8:(%%#-2.1x, %d)    |%#-2.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:8:(%%#-2.1x, %d)    |%#-2.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:9:(%%#-2.2x, %d)    |%#-2.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:9:(%%#-2.2x, %d)    |%#-2.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%#-2.3x, %d)   |%#-2.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%#-2.3x, %d)   |%#-2.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%#-2.4x, %d)   |%#-2.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%#-2.4x, %d)   |%#-2.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%#-2.5x, %d)   |%#-2.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%#-2.5x, %d)   |%#-2.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%#-3.0x, %d)   |%#-3.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%#-3.0x, %d)   |%#-3.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%#-3.1x, %d)   |%#-3.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%#-3.1x, %d)   |%#-3.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%#-3.2x, %d)   |%#-3.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%#-3.2x, %d)   |%#-3.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%#-3.3x, %d)   |%#-3.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%#-3.3x, %d)   |%#-3.3x|", num, num));
	printf("\n");
	

	printf(" Testing for Flag minus = false\n");
	printf(" Testing hash = true\n");

//	num = 0;

	printf("\n|%d|\n",    printf("   printf:01:(%%#1.0x, %d)    |%#1.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:01:(%%#1.0x, %d)    |%#1.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:02:(%%#1.1x, %d)    |%#1.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:02:(%%#1.1x, %d)    |%#1.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:03:(%%#1.2x, %d)    |%#1.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:03:(%%#1.2x, %d)    |%#1.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:04:(%%#1.3x, %d)    |%#1.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:04:(%%#1.3x, %d)    |%#1.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:05:(%%#1.4x, %d)    |%#1.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:05:(%%#1.4x, %d)    |%#1.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:06:(%%#1.5x, %d)    |%#1.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:06:(%%#1.5x, %d)    |%#1.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:07:(%%#2.0x, %d)    |%#2.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:07:(%%#2.0x, %d)    |%#2.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:08:(%%#2.1x, %d)    |%#2.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:08:(%%#2.1x, %d)    |%#2.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:09:(%%#2.2x, %d)    |%#2.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:09:(%%#2.2x, %d)    |%#2.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%#2.3x, %d)    |%#2.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%#2.3x, %d)    |%#2.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%#2.4x, %d)    |%#2.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%#2.4x, %d)    |%#2.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%#2.5x, %d)    |%#2.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%#2.5x, %d)    |%#2.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%#3.0x, %d)    |%#3.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%#3.0x, %d)    |%#3.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%#3.1x, %d)    |%#3.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%#3.1x, %d)    |%#3.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%#3.2x, %d)    |%#3.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%#3.2x, %d)    |%#3.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%#3.3x, %d)    |%#3.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%#3.3x, %d)    |%#3.3x|", num, num));
	printf("\n");

	printf("Testing without hash-------------------------------------------------\n");
	printf("minus flag = false---------------------------------------------------\n");
	printf("Width and precision------------------------------------------------\n\n");

	printf("\n|%d|\n",    printf("   printf:01:(%%1.0x, %d)    |%1.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:01:(%%1.0x, %d)    |%1.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:02:(%%1.1x, %d)    |%1.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:02:(%%1.1x, %d)    |%1.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:03:(%%1.2x, %d)    |%1.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:03:(%%1.2x, %d)    |%1.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:04:(%%1.3x, %d)    |%1.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:04:(%%1.3x, %d)    |%1.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:05:(%%1.4x, %d)    |%1.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:05:(%%1.4x, %d)    |%1.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:06:(%%1.5x, %d)    |%1.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:06:(%%1.5x, %d)    |%1.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:07:(%%2.0x, %d)    |%2.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:07:(%%2.0x, %d)    |%2.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:08:(%%2.1x, %d)    |%2.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:08:(%%2.1x, %d)    |%2.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:09:(%%2.2x, %d)    |%2.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:09:(%%2.2x, %d)    |%2.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%2.3x, %d)    |%2.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%2.3x, %d)    |%2.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%2.4x, %d)    |%2.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%2.4x, %d)    |%2.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%2.5x, %d)    |%2.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%2.5x, %d)    |%2.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%3.0x, %d)    |%3.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%3.0x, %d)    |%3.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%3.1x, %d)    |%3.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%3.1x, %d)    |%3.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%3.2x, %d)    |%3.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%3.2x, %d)    |%3.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%3.3x, %d)    |%3.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%3.3x, %d)    |%3.3x|", num, num));
	printf("\n");

	printf("Testing without hash. But with zero flag on--------------------------\n");
	printf("minus flag = false---------------------------------------------------\n");
	printf("Width and precision------------------------------------------------\n\n");

	printf("\n|%d|\n",    printf("   printf:01:(%%01.0x, %d)    |%01.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:01:(%%01.0x, %d)    |%01.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:02:(%%01.1x, %d)    |%01.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:02:(%%01.1x, %d)    |%01.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:03:(%%01.2x, %d)    |%01.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:03:(%%01.2x, %d)    |%01.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:04:(%%01.3x, %d)    |%01.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:04:(%%01.3x, %d)    |%01.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:05:(%%01.4x, %d)    |%01.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:05:(%%01.4x, %d)    |%01.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:06:(%%01.5x, %d)    |%01.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:06:(%%01.5x, %d)    |%01.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:07:(%%02.0x, %d)    |%02.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:07:(%%02.0x, %d)    |%02.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:08:(%%02.1x, %d)    |%02.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:08:(%%02.1x, %d)    |%02.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:09:(%%02.2x, %d)    |%02.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:09:(%%02.2x, %d)    |%02.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%02.3x, %d)    |%02.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%02.3x, %d)    |%02.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%02.4x, %d)    |%02.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%02.4x, %d)    |%02.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%02.5x, %d)    |%02.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%02.5x, %d)    |%02.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%03.0x, %d)    |%03.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%03.0x, %d)    |%03.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%03.1x, %d)    |%03.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%03.1x, %d)    |%03.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%03.2x, %d)    |%03.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%03.2x, %d)    |%03.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%03.3x, %d)    |%03.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%03.3x, %d)    |%03.3x|", num, num));
	printf("\n");

	printf("testing with hash flag on and zero flag on----------------------------\n");
	printf("minus flag = false---------------------------------------------------\n");
	printf("Width and precision------------------------------------------------\n\n");

	printf("\n|%d|\n",    printf("   printf:01:(%%#01.0x, %d)    |%#01.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:01:(%%#01.0x, %d)    |%#01.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:02:(%%#01.1x, %d)    |%#01.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:02:(%%#01.1x, %d)    |%#01.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:03:(%%#01.2x, %d)    |%#01.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:03:(%%#01.2x, %d)    |%#01.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:04:(%%#01.3x, %d)    |%#01.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:04:(%%#01.3x, %d)    |%#01.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:05:(%%#01.4x, %d)    |%#01.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:05:(%%#01.4x, %d)    |%#01.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:06:(%%#01.5x, %d)    |%#01.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:06:(%%#01.5x, %d)    |%#01.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:07:(%%#02.0x, %d)    |%#02.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:07:(%%#02.0x, %d)    |%#02.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:08:(%%#02.1x, %d)    |%#02.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:08:(%%#02.1x, %d)    |%#02.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:09:(%%#02.2x, %d)    |%#02.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:09:(%%#02.2x, %d)    |%#02.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%#02.3x, %d)    |%#02.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%#02.3x, %d)    |%#02.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%#02.4x, %d)    |%#02.4x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%#02.4x, %d)    |%#02.4x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%#02.5x, %d)    |%#02.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%#02.5x, %d)    |%#02.5x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%#03.0x, %d)    |%#03.0x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%#03.0x, %d)    |%#03.0x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:14:(%%#03.1x, %d)    |%#03.1x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%#03.1x, %d)    |%#03.1x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:15:(%%#03.2x, %d)    |%#03.2x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%#03.2x, %d)    |%#03.2x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%#03.3x, %d)    |%#03.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%#03.3x, %d)    |%#03.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:17:(%%#08.3x, %d)    |%#08.3x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:17:(%%#08.3x, %d)    |%#08.3x|", num, num));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:18:(%%#08.5x, %d)    |%#08.5x|", num, num));
    printf("\n|%d|\n", ft_printf("ft_printf:18:(%%#08.5x, %d)    |%#08.5x|", num, num));
	printf("\n");

*/

/*
	printf("|%d|\n", printf("   printf:7:(%%-7x, %d)    |%-7x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:7:(%%-7x, %d)    |%-7x|", num, num));
	printf("\n");

	printf("|%d|\n", printf("   printf:2:(%%-07x, %d)   |%-07x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:2:(%%-07x, %d)   |%-07x|", num, num));
	printf("\n");

	printf("|%d|\n", printf("   printf:3:(%%#-7x, %d)   |%#-7x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:3:(%%#-7x, %d)   |%#-7x|", num, num));
	printf("\n");

	printf("|%d|\n", printf("   printf:4:(%%#-07x, %d)  |%#-07x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:4:(%%#-07x, %d)  |%#-07x|", num, num));
	printf("\n");

	printf("|%d|\n", printf("   printf:5:(%%#-7x, %d)    |%#-7x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:5:(%%#-7x, %d)    |%#-7x|", num, num));
	printf("\n");

	printf("|%d|\n", printf("   printf:6:(%%#-07x, %d)   |%#-07x|", num, num));
	printf("|%d|\n", ft_printf("ft_printf:6:(%%#-07x, %d)   |%#-07x|", num, num));
*/



/*

	printf("-------------------------------------HEXADECIMAL----------------------------------\n");
	uint16_t u = 0;
	// for lower x
	printf("ft_printf: %d vs %d :printf #1\n", ft_printf("|%x|\t", u), printf("|%x|\t", u));
	printf("ft_printf: %d vs %d :printf #2\n", ft_printf("|%1x|\t", u), printf("|%1x|\t", u));
	printf("ft_printf: %d vs %d :printf #3\n", ft_printf("|%2x|\t", u), printf("|%2x|\t", u));
	printf("ft_printf: %d vs %d :printf #4\n", ft_printf("|%3x|\t", u), printf("|%3x|\t", u));
	printf("ft_printf: %d vs %d :printf #5\n", ft_printf("|%4x|\t", u), printf("|%4x|\t", u));
	printf("ft_printf: %d vs %d :printf #6\n", ft_printf("|%5x|\t", u), printf("|%5x|\t", u));
	printf("ft_printf: %d vs %d :printf #7\n", ft_printf("|%6x|\t", u), printf("|%6x|\t", u));
	printf("ft_printf: %d vs %d :printf #8\n", ft_printf("|%7x|\t", u), printf("|%7x|\t", u));
	//minus flag
	printf("ft_printf: %d vs %d :printf #9\n", ft_printf("|%-x|\t", u), printf("|%-x|\t", u));
	printf("ft_printf: %d vs %d :printf #10\n", ft_printf("|%-1x|\t", u), printf("|%-1x|\t", u));
	printf("ft_printf: %d vs %d :printf #11\n", ft_printf("|%-2x|\t", u), printf("|%-2x|\t", u));
	printf("ft_printf: %d vs %d :printf #12\n", ft_printf("|%-3x|\t", u), printf("|%-3x|\t", u));
	printf("ft_printf: %d vs %d :printf #13\n", ft_printf("|%-4x|\t", u), printf("|%-4x|\t", u));
	printf("ft_printf: %d vs %d :printf #14\n", ft_printf("|%-5x|\t", u), printf("|%-5x|\t", u));
	printf("ft_printf: %d vs %d :printf #15\n", ft_printf("|%-6x|\t", u), printf("|%-6x|\t", u));
	printf("ft_printf: %d vs %d :printf #16\n", ft_printf("|%-7x|\t", u), printf("|%-7x|\t", u));
	// zero flag
	printf("ft_printf: %d vs %d :printf #17\n", ft_printf("|%0x|\t", u), printf("|%0x|\t", u));
	printf("ft_printf: %d vs %d :printf #18\n", ft_printf("|%01x|\t", u), printf("|%01x|\t", u));
	printf("ft_printf: %d vs %d :printf #19\n", ft_printf("|%02x|\t", u), printf("|%02x|\t", u));
	printf("ft_printf: %d vs %d :printf #20\n", ft_printf("|%03x|\t", u), printf("|%03x|\t", u));
	printf("ft_printf: %d vs %d :printf #21\n", ft_printf("|%04x|\t", u), printf("|%04x|\t", u));
	printf("ft_printf: %d vs %d :printf #22\n", ft_printf("|%05x|\t", u), printf("|%05x|\t", u));
	printf("ft_printf: %d vs %d :printf #23\n", ft_printf("|%06x|\t", u), printf("|%06x|\t", u));
	printf("ft_printf: %d vs %d :printf #24\n", ft_printf("|%07x|\t", u), printf("|%07x|\t", u));
	// basic precision
	printf("ft_printf: %d vs %d :printf #25\n", ft_printf("|%.x|\t", u), printf("|%.x|\t", u));
	printf("ft_printf: %d vs %d :printf #26\n", ft_printf("|%.1x|\t", u), printf("|%.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #27\n", ft_printf("|%.2x|\t", u), printf("|%.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #28\n", ft_printf("|%.3x|\t", u), printf("|%.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #29\n", ft_printf("|%.4x|\t", u), printf("|%.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #30\n", ft_printf("|%.5x|\t", u), printf("|%.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #31\n", ft_printf("|%.6x|\t", u), printf("|%.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #32\n", ft_printf("|%.7x|\t", u), printf("|%.7x|\t", u));
	// width vs precision
	printf("ft_printf: %d vs %d :printf #33\n", ft_printf("|%1.x|\t", u), printf("|%1.x|\t", u));
	printf("ft_printf: %d vs %d :printf #34\n", ft_printf("|%1.1x|\t", u), printf("|%1.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #35\n", ft_printf("|%3.2x|\t", u), printf("|%3.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #36\n", ft_printf("|%5.3x|\t", u), printf("|%5.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #37\n", ft_printf("|%9.4x|\t", u), printf("|%9.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #38\n", ft_printf("|%2.5x|\t", u), printf("|%2.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #39\n", ft_printf("|%13.6x|\t", u), printf("|%13.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #40\n", ft_printf("|%3.7x|\t", u), printf("|%3.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #41\n", ft_printf("|%13.13x|\t", u), printf("|%13.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #42\n", ft_printf("|%4.4x|\t", u), printf("|%4.4x|\t", u));
	// minus flag width vs precision	
	printf("ft_printf: %d vs %d :printf #43\n", ft_printf("|%-1.x|\t", u), printf("|%-1.x|\t", u));
	printf("ft_printf: %d vs %d :printf #44\n", ft_printf("|%-1.1x|\t", u), printf("|%-1.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #45\n", ft_printf("|%-3.2x|\t", u), printf("|%-3.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #46\n", ft_printf("|%-5.3x|\t", u), printf("|%-5.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #47\n", ft_printf("|%-9.4x|\t", u), printf("|%-9.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #48\n", ft_printf("|%-2.5x|\t", u), printf("|%-2.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #49\n", ft_printf("|%-13.6x|\t", u), printf("|%-13.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #50\n", ft_printf("|%-3.7x|\t", u), printf("|%-3.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #51\n", ft_printf("|%-13.13x|\t", u), printf("|%-13.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #52\n", ft_printf("|%-4.4x|\t", u), printf("|%-4.4x|\t", u));
	// zero flag width vs precision
	printf("ft_printf: %d vs %d :printf #53\n", ft_printf("|%01.x|\t", u), printf("|%01.x|\t", u));
	printf("ft_printf: %d vs %d :printf #54\n", ft_printf("|%01.1x|\t", u), printf("|%01.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #55\n", ft_printf("|%03.2x|\t", u), printf("|%03.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #56\n", ft_printf("|%05.3x|\t", u), printf("|%05.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #57\n", ft_printf("|%09.4x|\t", u), printf("|%09.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #58\n", ft_printf("|%02.5x|\t", u), printf("|%02.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #59\n", ft_printf("|%013.6x|\t", u), printf("|%013.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #60\n", ft_printf("|%03.7x|\t", u), printf("|%03.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #61\n", ft_printf("|%013.13x|\t", u), printf("|%013.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #62\n", ft_printf("|%04.4x|\t", u), printf("|%04.4x|\t", u));
	// basic hash
	printf("ft_printf: %d vs %d :printf #63\n", ft_printf("|%#x|\t", u), printf("|%#x|\t", u));
	printf("ft_printf: %d vs %d :printf #64\n", ft_printf("|%#1x|\t", u), printf("|%#1x|\t", u));
	printf("ft_printf: %d vs %d :printf #65\n", ft_printf("|%#2x|\t", u), printf("|%#2x|\t", u));
	printf("ft_printf: %d vs %d :printf #66\n", ft_printf("|%#3x|\t", u), printf("|%#3x|\t", u));
	printf("ft_printf: %d vs %d :printf #67\n", ft_printf("|%#4x|\t", u), printf("|%#4x|\t", u));
	printf("ft_printf: %d vs %d :printf #68\n", ft_printf("|%#5x|\t", u), printf("|%#5x|\t", u));
	printf("ft_printf: %d vs %d :printf #69\n", ft_printf("|%#6x|\t", u), printf("|%#6x|\t", u));
	printf("ft_printf: %d vs %d :printf #70\n", ft_printf("|%#7x|\t", u), printf("|%#7x|\t", u));
	// hash and minus
	printf("ft_printf: %d vs %d :printf #71\n", ft_printf("|%#-x|\t", u), printf("|%#-x|\t", u));
	printf("ft_printf: %d vs %d :printf #72\n", ft_printf("|%#-1x|\t", u), printf("|%#-1x|\t", u));
	printf("ft_printf: %d vs %d :printf #73\n", ft_printf("|%#-2x|\t", u), printf("|%#-2x|\t", u));
	printf("ft_printf: %d vs %d :printf #74\n", ft_printf("|%#-3x|\t", u), printf("|%#-3x|\t", u));
	printf("ft_printf: %d vs %d :printf #75\n", ft_printf("|%#-4x|\t", u), printf("|%#-4x|\t", u));
	printf("ft_printf: %d vs %d :printf #76\n", ft_printf("|%#-5x|\t", u), printf("|%#-5x|\t", u));
	printf("ft_printf: %d vs %d :printf #77\n", ft_printf("|%#-6x|\t", u), printf("|%#-6x|\t", u));
	printf("ft_printf: %d vs %d :printf #78\n", ft_printf("|%#-7x|\t", u), printf("|%#-7x|\t", u));
	// zero and hash
	printf("ft_printf: %d vs %d :printf #79\n", ft_printf("|%#0x|\t", u), printf("|%#0x|\t", u));
	printf("ft_printf: %d vs %d :printf #80\n", ft_printf("|%#01x|\t", u), printf("|%#01x|\t", u));
	printf("ft_printf: %d vs %d :printf #81\n", ft_printf("|%#02x|\t", u), printf("|%#02x|\t", u));
	printf("ft_printf: %d vs %d :printf #82\n", ft_printf("|%#03x|\t", u), printf("|%#03x|\t", u));
	printf("ft_printf: %d vs %d :printf #83\n", ft_printf("|%#04x|\t", u), printf("|%#04x|\t", u));
	printf("ft_printf: %d vs %d :printf #84\n", ft_printf("|%#05x|\t", u), printf("|%#05x|\t", u));
	printf("ft_printf: %d vs %d :printf #85\n", ft_printf("|%#06x|\t", u), printf("|%#06x|\t", u));
	printf("ft_printf: %d vs %d :printf #86\n", ft_printf("|%#07x|\t", u), printf("|%#07x|\t", u));
	// hash and basic precision
	printf("ft_printf: %d vs %d :printf #87\n", ft_printf("|%#.x|\t", u), printf("|%#.x|\t", u));
	printf("ft_printf: %d vs %d :printf #88\n", ft_printf("|%#.1x|\t", u), printf("|%#.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #89\n", ft_printf("|%#.2x|\t", u), printf("|%#.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #90\n", ft_printf("|%#.3x|\t", u), printf("|%#.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #91\n", ft_printf("|%#.4x|\t", u), printf("|%#.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #92\n", ft_printf("|%#.5x|\t", u), printf("|%#.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #93\n", ft_printf("|%#.6x|\t", u), printf("|%#.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #94\n", ft_printf("|%#.7x|\t", u), printf("|%#.7x|\t", u));
	// hash width vs precision
	printf("ft_printf: %d vs %d :printf #95\n", ft_printf("|%#1.x|\t", u), printf("|%#1.x|\t", u));
	printf("ft_printf: %d vs %d :printf #96\n", ft_printf("|%#1.1x|\t", u), printf("|%#1.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #97\n", ft_printf("|%#3.2x|\t", u), printf("|%#3.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #98\n", ft_printf("|%#5.3x|\t", u), printf("|%#5.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #99\n", ft_printf("|%#9.4x|\t", u), printf("|%#9.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #100\n", ft_printf("|%#2.5x|\t", u), printf("|%#2.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #101\n", ft_printf("|%#13.6x|\t", u), printf("|%#13.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #102\n", ft_printf("|%#3.7x|\t", u), printf("|%#3.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #103\n", ft_printf("|%#13.13x|\t", u), printf("|%#13.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #104\n", ft_printf("|%#4.4x|\t", u), printf("|%#4.4x|\t", u));
	// hash minus width vs precision
	printf("ft_printf: %d vs %d :printf #105\n", ft_printf("|%#-1.x|\t", u), printf("|%#-1.x|\t", u));
	printf("ft_printf: %d vs %d :printf #106\n", ft_printf("|%#-1.1x|\t", u), printf("|%#-1.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #107\n", ft_printf("|%#-3.2x|\t", u), printf("|%#-3.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #108\n", ft_printf("|%#-5.3x|\t", u), printf("|%#-5.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #109\n", ft_printf("|%#-9.4x|\t", u), printf("|%#-9.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #110\n", ft_printf("|%#-2.5x|\t", u), printf("|%#-2.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #111\n", ft_printf("|%#-13.6x|\t", u), printf("|%#-13.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #112\n", ft_printf("|%#-3.7x|\t", u), printf("|%#-3.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #113\n", ft_printf("|%#-13.13x|\t", u), printf("|%#-13.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #114\n", ft_printf("|%#-4.4x|\t", u), printf("|%#-4.4x|\t", u));
	// hash zero width vs precision
	printf("ft_printf: %d vs %d :printf #115\n", ft_printf("|%#01.x|\t", u), printf("|%#01.x|\t", u));//check me
	printf("ft_printf: %d vs %d :printf #116\n", ft_printf("|%#01.1x|\t", u), printf("|%#01.1x|\t", u));
	printf("ft_printf: %d vs %d :printf #117\n", ft_printf("|%#03.2x|\t", u), printf("|%#03.2x|\t", u));
	printf("ft_printf: %d vs %d :printf #118\n", ft_printf("|%#05.3x|\t", u), printf("|%#05.3x|\t", u));
	printf("ft_printf: %d vs %d :printf #119\n", ft_printf("|%#09.4x|\t", u), printf("|%#09.4x|\t", u));
	printf("ft_printf: %d vs %d :printf #120\n", ft_printf("|%#02.5x|\t", u), printf("|%#02.5x|\t", u));
	printf("ft_printf: %d vs %d :printf #121\n", ft_printf("|%#013.6x|\t", u), printf("|%#013.6x|\t", u));
	printf("ft_printf: %d vs %d :printf #122\n", ft_printf("|%#03.7x|\t", u), printf("|%#03.7x|\t", u));
	printf("ft_printf: %d vs %d :printf #123\n", ft_printf("|%#013.13x|\t", u), printf("|%#013.13x|\t", u));
	printf("ft_printf: %d vs %d :printf #124\n", ft_printf("|%#04.4x|\t", u), printf("|%#04.4x|\t", u));
*/

/*
	printf("----------------------------------------------------------------------\n");
	printf("---------------------------Unit Test for floats-----------------------\n");
	printf("----------------------------------------------------------------------\n");
	
	double num1;
	int precision;

	num1 = 0;

	printf("\n|%d|\n",    printf("   printf:00:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:00:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:01:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:01:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:02:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:02:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:03:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:03:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:04:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:04:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:05:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:05:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:06:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:06:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n\n");

	num1 = 6;

	printf("\n|%d|\n",    printf("   printf:07:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:07:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:08:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:08:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:09:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:09:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:10:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:10:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:11:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:11:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:12:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:12:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:13:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:13:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n\n");


	num1 = -0;

	printf("\n|%d|\n",    printf("   printf:14:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:14:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");
	
	printf("\n|%d|\n",    printf("   printf:15:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:15:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:16:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:16:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:17:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:17:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:18:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:18:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:19:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:19:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:20:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:20:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n\n");

	num1 = 0.023456;

	printf("\n|%d|\n",    printf("   printf:21:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:21:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:22:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:22:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:23:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:23:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:24:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:24:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:25:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:25:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:26:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:26:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:27:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:27:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n\n");

	num1 = -0.023456;

	printf("\n|%d|\n",    printf("   printf:28:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:28:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:29:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:29:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:30:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:30:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:31:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:31:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:32:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:32:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:33:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:33:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:34:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:34:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n\n");


	num1 = 3.111111;

	printf("\n|%d|\n",    printf("   printf:35:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:35:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:36:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:36:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:37:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:37:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:38:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:38:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:39:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:39:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:40:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:40:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:41:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:41:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:42:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:42:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.222222;

	printf("\n|%d|\n",    printf("   printf:43:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:43:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:44:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:44:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:45:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:45:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:46:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:46:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:47:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:47:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:48:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:48:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:49:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:49:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:50:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:50:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.333333;

	printf("\n|%d|\n",    printf("   printf:51:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:51:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:52:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:52:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:53:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:53:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:54:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:54:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:55:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:55:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:56:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:56:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:57:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:57:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:58:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:58:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.444444;

	printf("\n|%d|\n",    printf("   printf:59:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:59:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:60:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:60:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:61:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:61:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:62:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:62:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:63:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:63:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:64:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:64:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:65:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:65:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:66:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:66:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.555555;

	printf("\n|%d|\n",    printf("   printf:67:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:67:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:68:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:68:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:69:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:69:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:70:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:70:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:71:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:71:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:72:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:72:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:73:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:73:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:74:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:74:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.666666;

	printf("\n|%d|\n",    printf("   printf:75:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:75:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:76:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:76:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:77:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:77:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:78:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:78:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:79:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:79:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:80:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:80:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:81:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:81:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:82:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:82:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.7777777;

	printf("\n|%d|\n",    printf("   printf:83:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:83:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:84:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:84:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:85:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:85:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:86:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:86:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:87:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:87:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:88:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:88:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:89:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:89:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:90:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:90:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 3.8888888;

	printf("\n|%d|\n",    printf("   printf:91:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:91:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:92:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:92:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:93:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:93:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:94:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:94:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:95:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:95:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:96:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:96:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:97:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:97:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:98:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:98:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = 0.089426;

	printf("\n|%d|\n",    printf("   printf:099:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:099:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:100:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:100:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:101:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:101:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:102:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:102:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:103:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:103:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:104:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:104:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:105:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:105:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:106:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:106:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = -3.85;

	printf("\n|%d|\n",    printf("   printf:107:(%%.f, %.f)    |%.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:107:(%%.f, %.f)    |%.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:108:(%%.0f, %.0f)    |%.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:108:(%%.0f, %.0f)    |%.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:109:(%%.1f, %.1f)    |%.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:109:(%%.1f, %.1f)    |%.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:110:(%%.2f, %.2f)    |%.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:110:(%%.2f, %.2f)    |%.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:111:(%%.3f, %.3f)    |%.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:111:(%%.3f, %.3f)    |%.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:112:(%%.4f, %.4f)    |%.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:112:(%%.4f, %.4f)    |%.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:113:(%%.5f, %.5f)    |%.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:113:(%%.5f, %.5f)    |%.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:114:(%%f, %f)    |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:114:(%%f, %f)    |%f|", num1, num1));
	printf("\n\n");

	num1 = -3.85;

	printf("\n|%d|\n",    printf("   printf:115:(%%#.f, %.f)     |%#.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:115:(%%#.f, %.f)     |%#.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:116:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:116:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:117:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:117:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:118:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:118:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:119:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:119:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:120:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:120:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:121:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:121:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:122:(%%f, %f)        |%#f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:122:(%%f, %f)        |%#f|", num1, num1));
	printf("\n\n");

	num1 = -4;

	printf("------------------------------------------------------------------------\n");
	printf("--------------------Testing  floats with Hash---------------------------\n");
	printf("\n|%d|\n",    printf("   printf:123:(%%#.f, %.f)     |%#.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:123:(%%#.f, %.f)     |%#.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:124:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:124:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:125:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:125:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:126:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:126:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:127:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:127:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:128:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:128:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:129:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:129:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:130:(%%#f, %f)        |%#f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:130:(%%#f, %f)        |%#f|", num1, num1));
	printf("\n\n");

	num1 = 0;

	printf("\n|%d|\n",    printf("   printf:131:(%%#.f, %.f)     |%#.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:131:(%%#.f, %.f)     |%#.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:132:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:132:(%%#.0f, %.0f)   |%#.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:132:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:132:(%%#.1f, %.1f)   |%#.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:133:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:133:(%%#.2f, %.2f)   |%#.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:134:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:134:(%%#.3f, %.3f)   |%#.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:135:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:135:(%%#.4f, %.4f)   |%#.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:136:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:136:(%%#.5f, %.5f)   |%#.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:137:(%%#f, %f)       |%#f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:137:(%%#f, %f)       |%#f|", num1, num1));
	printf("\n\n");

	num1 = 7.3;

	printf("\n|%d|\n",    printf("   printf:138:(%%+05.f, %.f)     |%+05.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:138:(%%+05.f, %.f)     |%+05.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:139:(%%+05.0f, %.0f)   |%+05.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:139:(%%+05.0f, %.0f)   |%+05.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:140:(%%+05.1f, %.1f)   |%+05.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:140:(%%+05.1f, %.1f)   |%+05.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:141:(%%+05.2f, %.2f)   |%+05.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:141:(%%+05.2f, %.2f)   |%+05.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:142:(%%+05.3f, %.3f)   |%+05.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:142:(%%+05.3f, %.3f)   |%+05.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:143:(%%+05.4f, %.4f)   |%+05.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:143:(%%+05.4f, %.4f)   |%+05.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:144:(%%+05.5f, %.5f)   |%+05.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:144:(%%+05.5f, %.5f)   |%+05.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:145:(%%f, %f)        |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:145:(%%f, %f)        |%f|", num1, num1));
	printf("\n\n");

	num1 = -7.3;

	printf("\n|%d|\n",    printf("   printf:146:(%%+05.f, %.f)     |%+05.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:146:(%%+05.f, %.f)     |%+05.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:147:(%%+05.0f, %.0f)   |%+05.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:147:(%%+05.0f, %.0f)   |%+05.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:148:(%%+05.1f, %.1f)   |%+05.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:148:(%%+05.1f, %.1f)   |%+05.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:149:(%%+05.2f, %.2f)   |%+05.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:149:(%%+05.2f, %.2f)   |%+05.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:150:(%%+05.3f, %.3f)   |%+05.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:150:(%%+05.3f, %.3f)   |%+05.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:151:(%%+05.4f, %.4f)   |%+05.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:151:(%%+05.4f, %.4f)   |%+05.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:152:(%%+05.5f, %.5f)   |%+05.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:152:(%%+05.5f, %.5f)   |%+05.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:153:(%%f, %f)        |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:153:(%%f, %f)        |%f|", num1, num1));
	printf("\n\n");

	num1 = -7.3;

	printf("\n|%d|\n",    printf("   printf:146:(%%05.f, %.f)     |%05.f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:146:(%%05.f, %.f)     |%05.f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:147:(%%05.0f, %.0f)   |%05.0f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:147:(%%05.0f, %.0f)   |%05.0f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:148:(%%05.1f, %.1f)   |%05.1f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:148:(%%05.1f, %.1f)   |%05.1f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:149:(%%05.2f, %.2f)   |%05.2f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:149:(%%05.2f, %.2f)   |%05.2f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:150:(%%05.3f, %.3f)   |%05.3f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:150:(%%05.3f, %.3f)   |%05.3f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:151:(%%05.4f, %.4f)   |%05.4f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:151:(%%05.4f, %.4f)   |%05.4f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:152:(%%05.5f, %.5f)   |%05.5f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:152:(%%05.5f, %.5f)   |%05.5f|", num1, num1));
	printf("\n");

	printf("\n|%d|\n",    printf("   printf:153:(%%f, %f)        |%f|", num1, num1));
    printf("\n|%d|\n", ft_printf("ft_printf:153:(%%f, %f)        |%f|", num1, num1));
	printf("\n\n");

	printf("-------------------------Additional Tests-----------------------------------\n");
	printf("----------------------------------------------------------------------------\n");

	long double num2;
	num2 = 0.87650894255l;

	printf("\n|%d|\n",    printf("   printf:154:(%%.10Lf, %Lf)        |%.10Lf|", num2, num2));
    printf("\n|%d|\n", ft_printf("ft_printf:154:(%%.10Lf, %Lf)        |%.10Lf|", num2, num2));
	printf("\n\n");
	
	num2 = 1.025978542436587568678;

	printf("\n|%d|\n",    printf("   printf:155:(%%.20Lf, %Lf)        |%.20Lf|", num2, num2));
    printf("\n|%d|\n", ft_printf("ft_printf:155:(%%.20Lf, %Lf)        |%.20Lf|", num2, num2));
	printf("\n\n");

	num2 = 1.025978548534310422034;

	printf("\n|%d|\n",    printf("   printf:156:(%%.20Lf, %Lf)        |%.20Lf|", num2, num2));
    printf("\n|%d|\n", ft_printf("ft_printf:156:(%%.20Lf, %Lf)        |%.20Lf|", num2, num2));
	printf("\n\n");

	printf("\n|%d|\n",    printf("   printf:157:(%%.20Lf, %ld)        |%.20ld|", 0xfffffd00L, 0xfffffd00L));
    printf("\n|%d|\n", ft_printf("ft_printf:157:(%%.20Lf, %ld)        |%.20ld|", 0xfffffd00L, 0xfffffd00L));
	printf("\n\n");
*/

	printf("---------------------------Testing Binary-----------------------\n");


	ft_printf(RED"ft_printf:0:uint64_max|%b|\n", 18446744073709551);
	ft_printf(NC GREEN"ft_printf:3:int32_min |%b|\n", INT32_MIN);
	ft_printf(NC YELLOW"ft_printf:4:int32_max |%b|\n", INT32_MAX);
	ft_printf(NC BLUE"ft_printf:5|%# +b|\n", 345345);
	ft_printf(PURPLE"ft_printf:6|%#-8.3b|\n", 345345);
	ft_printf(NC CYAN"ft_printf:7|%#-8.5b|\n"NC, 34);
	ft_printf(NC WHITE"ft_printf:8|%#-8.b|\n\n", 34);
	ft_printf(NC BRED"ft_printf:9|%#8.b|\n\n", 34);
	ft_printf(NC BGREEN"ft_printf:10|%8.3b|\n\n", 34);
	ft_printf(NC BYELLOW"ft_printf:11|%#8.3b|\n\n", 34);
	ft_printf(NC BBLUE"ft_printf:12|%3b|\n\n", 4);
	ft_printf(NC BPURPLE"ft_printf:13|%3b|\n\n", 0);
	ft_printf(NC BCYAN"ft_printf:14|%#3b|\n\n", 4);
	ft_printf(NC BWHITE"ft_printf:15|%#5b|\n\n", 0);
	ft_printf(NC BWHITE ON_BLACK"\nft_printf:16|%#5.8b|", 0);
	ft_printf(NC BWHITE ON_RED"\nft_printf:17|%#5.0b|", 0);
	ft_printf(NC BWHITE ON_GREEN"\nft_printf:18|%#-3b|", 0);
	ft_printf(NC BWHITE ON_YELLOW"\nft_printf:19|%#3b|", 0);
	ft_printf(NC BWHITE ON_BLUE"\nft_printf:20|this %#b number,|", 0);
	ft_printf(NC BWHITE ON_PURPLE"\nft_printf:21|%#b|", 0);
	ft_printf(NC BWHITE ON_CYAN"\nft_printf:22|%0#b|", 0);
	ft_printf(NC BWHITE ON_WHITE"\nft_printf:23|%#.0b|"NC, 0);
	ft_printf("\nft_printf:24|%#.1b|\n\n", 0);
	ft_printf("ft_printf:25|%#.1b|\n\n", 1);
	ft_printf("ft_printf:26|%#.2b|\n\n", 0);
	ft_printf("ft_printf:22.4|%#0.3b|\n\n", 0);
	ft_printf("ft_printf:22.5|%#1.3b|\n\n", 0);
	ft_printf("ft_printf:22.6|%#2.3b|\n\n", 0);
	ft_printf("ft_printf:22.7|%#3.3b|\n\n", 0);
	ft_printf("ft_printf:22.8|%#4.3b|\n\n", 0);
	ft_printf("ft_printf:22.9|%#5.3b|\n\n", 0);
	ft_printf("ft_printf:22.10|%#.3b|\n\n", 0);
	ft_printf("ft_printf:23|%#.0b|\n\n", 0);
	ft_printf("ft_printf:24|%#.b|\n\n", 0);
	ft_printf("ft_printf:25|%#0b|\n\n", 0);
	ft_printf("ft_printf:26|%#01b|\n\n", 1);
	ft_printf("ft_printf:27|%#1b|\n\n", 1);
	ft_printf("ft_printf:28|%1b|\n\n", 0);
	ft_printf("ft_printf:29|%#01b|\n\n", 0);
	ft_printf("ft_printf:30|%#1b|\n\n", 1);
	ft_printf("ft_printf:31|%#1b|\n\n", 1);
	ft_printf("ft_printf:32|%#2b|\n\n", 0);
	ft_printf("ft_printf:33|%#3b|\n\n", 0);
	ft_printf("ft_printf:34|%#04b|\n\n", 0);
	ft_printf("ft_printf:35|%00b|\n\n", 0);
	ft_printf("ft_printf:36|%01b|\n\n", 0);
	ft_printf("ft_printf:37|%02b|\n\n", 0);
	ft_printf("ft_printf:38|%03b|\n\n", 0);
	ft_printf("ft_printf:39|%03b|\n\n", 0);
	ft_printf("ft_printf:40|%03b|\n\n", 1);
	ft_printf("ft_printf:41|%08.b|\n\n", 1);
	ft_printf("ft_printf:42|%08.0b|\n\n", 1);
	ft_printf("ft_printf:43|%08.1b|\n\n", 1);
	ft_printf("ft_printf:44|%08.2b|\n\n", 1);
	ft_printf("ft_printf:45|%08.3b|\n\n", 1);
	ft_printf("ft_printf:46|%08.4b|\n\n", 1);
	ft_printf("ft_printf:47|%08.b|\n\n", 0);
	ft_printf("ft_printf:48|%08.0b|\n\n", 0);
	ft_printf("ft_printf:49|%08.1b|\n\n", 0);
	ft_printf("ft_printf:50|%08.2b|\n\n", 0);
	ft_printf("ft_printf:51|%08.3b|\n\n", 0);
	ft_printf("ft_printf:52|%08.4b|\n\n", 0);
	ft_printf("ft_printf:52.0|%#.0b|\n\n", 0);
	ft_printf("ft_printf:52.1|%#.0b|\n\n", 1);
	ft_printf("ft_printf:52.11|%#.0b|\n\n", 11);
	ft_printf("ft_printf:53.0|%#.b|\n\n", 0);
	ft_printf("ft_printf:53.1|%#.b|\n\n", 1);
	ft_printf("ft_printf:53.11|%#.b|\n\n", 11);
	ft_printf("ft_printf:53.0|%#0b|\n\n", 0);
	ft_printf("ft_printf:53.1|%#0b|\n\n", 1);
	ft_printf("ft_printf:53.11|%#0b|\n\n", 11);
	ft_printf("ft_printf:53.0|%#01b|\n\n", 0);
	ft_printf("ft_printf:53.1|%#01b|\n\n", 1);
	ft_printf("ft_printf:53.11|%#01b|\n\n", 11);
	ft_printf("ft_printf:54|%#1b|\n\n", 1);
	ft_printf("ft_printf:55|%1b|\n\n", 0);
	ft_printf("ft_printf:56|%#01b|\n\n", 0);
	ft_printf("ft_printf:57|%#1b|\n\n", 1);
	ft_printf("ft_printf:58|%#1b|\n\n", 1);
	ft_printf("ft_printf:59|%#2b|\n\n", 0);
	ft_printf("ft_printf:60|%#3b|\n\n", 0);
	ft_printf("ft_printf:61|%#04b|\n\n", 0);

	   printf("   printf:|%.11f|\n", 1.025978541236587568);
	ft_printf("ft_printf:|%.11f|\n", 1.025978541236587568);

}

