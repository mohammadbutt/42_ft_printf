/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/01 21:12:14 by mbutt            ###   ########.fr       */
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


	   printf("   printf:0|%#-0x|\n", 33);
	ft_printf("ft_printf:0|%#-0x|\n\n", 33);

	   printf("   printf:1|%#-1x|\n", 33);
	ft_printf("ft_printf:1|%#-1x|\n\n", 33);

	   printf("   printf:2|%#-2x|\n", 33);
	ft_printf("ft_printf:2|%#-2x|\n\n", 33);

	   printf("   printf:3|%#-3x|\n", 33);
	ft_printf("ft_printf:3|%#-3x|\n\n", 33);


	   printf("   printf:4|%#-4x|\n", 33);
	ft_printf("ft_printf:4|%#-4x|\n\n", 33);

	   printf("   printf:5|%#-5x|\n", 33);
	ft_printf("ft_printf:5|%#-5x|\n\n", 33);


	   printf("   printf:6|%#-6x|\n", 33);
	ft_printf("ft_printf:6|%#-6x|\n\n", 33);

	   printf("   printf:1|%#.x|\n", 33);
	ft_printf("ft_printf:1|%#.x|\n\n", 33);

	   printf("   printf:2|%#.0x|\n", 33);
	ft_printf("ft_printf:2|%#.0x|\n\n", 33);

	   printf("   printf:3|%#.1x|\n", 33);
	ft_printf("ft_printf:3|%#.1x|\n\n", 33);

	   printf("   printf:4|%#.2x|\n", 33);
	ft_printf("ft_printf:4|%#.2x|\n\n", 33);

	   printf("   printf:5|%#.3x|\n", 33);
	ft_printf("ft_printf:5|%#.3x|\n\n", 33);

	   printf("   printf:6|%#.4x|\n", 33);
	ft_printf("ft_printf:6|%#.4x|\n\n", 33);


	   printf("   printf:1|%.x|\n", 33);
	ft_printf("ft_printf:1|%.x|\n\n", 33);

	   printf("   printf:2|%.0x|\n", 33);
	ft_printf("ft_printf:2|%.0x|\n\n", 33);

	   printf("   printf:3|%.1x|\n", 33);
	ft_printf("ft_printf:3|%.1x|\n\n", 33);

	   printf("   printf:4|%.2x|\n", 33);
	ft_printf("ft_printf:4|%.2x|\n\n", 33);

	   printf("   printf:5|%.3x|\n", 33);
	ft_printf("ft_printf:5|%.3x|\n\n", 33);

	   printf("   printf:6|%.4x|\n", 33);
	ft_printf("ft_printf:6|%.4x|\n\n", 33);


}
