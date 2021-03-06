/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:43:38 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/17 20:32:21 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../srcs/ft_printf.h"

int main(void)
{
//	   printf("   printf|% lu|\n", 4294967295);
//	ft_printf("ft_printf|% lu|\n", 4294967295);

//	   printf("   printf|%+lu|\n", 4294967295);
//	ft_printf("ft_printf|%+lu|\n", 4294967295);
	
	char *s1 = "This";
	char *s2 = " is";
	char *s3 = " a";
	char *s4 = " test";
	char *s5 = " and a very very long test";
	char *s6 = " to break ft_printf.";

	int n1 = 12345;
	int n2 = -12345;
	int n3 = 3;
	int n4 = 4;
	int n5 = 5;
	int n6 = 6;
	int n7 = 7;
	int n8 = 1111;
	int n9 = -2222;

	double f1 = 1;
	double f2 = 22.1;
	double f3 = 334.12;
	double f4 = 4456.345;
	double f5 = 54123.9876;
	double f6 = 661233.98765;
	double f7 = 7712345.789456;
	double f8 = -5678.987674321;
	double f9 = -0.0000521;


	   printf("   printf|%*d|\n", -5, 12);
	ft_printf("ft_printf|%*d|\n\n", -5, 12);

	   printf("   printf|% *d|\n", -5, 22);
	ft_printf("ft_printf|% *d|\n\n", -5, 22);

	   printf("   printf|%0*d|\n", -5, 32);
	ft_printf("ft_printf|%0*d|\n\n", -5, 32);

	   printf("   printf|%0-5d|\n", 42);
	ft_printf("ft_printf|%0-5d|\n\n", 42);

	   printf("   printf|%*c|\n", -5, 'a');
	ft_printf("ft_printf|%*c|\n\n", -5, 'a');

	   printf("   printf|%-5c|\n", 'a');
	ft_printf("ft_printf|%-5c|\n\n", 'a');

	   printf("   printf|%*s|\n", -8, s1);
	ft_printf("ft_printf|%*s|\n\n", -8, s1);

	   printf("   printf|% *s|\n", -8, s2);
	ft_printf("ft_printf|% *s|\n\n", -8, s2);

	   printf("   printf|%0*s|\n", -8, s3);
	ft_printf("ft_printf|%0*s|\n\n", -8, s3);

	   printf("   printf|%0-5s|\n", s4);
	ft_printf("ft_printf|%0-5s|\n\n", s4);

	   printf("   printf{%.*d}\n", -5, 42);
	ft_printf("ft_printf{%.*d}\n\n", -5, 42);


	   printf("   printf|{%*3d}|\n", 5, 0);
	ft_printf("ft_printf|{%*3d}|\n", 5, 0);

	   printf("   printf:|%s%s%s%s%s%s%d%d%s%s%s%s  %s%s|\n", s1, s2, s3, s4, s5, s6, n1, n2, s6, s5, s4, s3, s2, s1);
	ft_printf("ft_printf:|%s%s%s%s%s%s%d%d%s%s%s%s  %s%s|\n", s1, s2, s3, s4, s5, s6, n1, n2, s6, s5, s4, s3, s2, s1);

	   printf("   printf:|%d%d%d%d%d%d%d%d%d%d%d%d%d%d|\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n7, n6, n5, n4, n3);
	ft_printf("ft_printf:|%d%d%d%d%d%d%d%d%d%d%d%d%d%d|\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n7, n6, n5, n4, n3);

	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Testing floats\n");

	   printf("   printf|%*f|\n", -8, f1);
	ft_printf("ft_printf|%*f|\n\n", -8, f1);
	  
	   printf("   printf|% *f|\n", -8, f2);
	ft_printf("ft_printf|% *f|\n\n", -8, f2);

	   printf("   printf|%0*f|\n", -8, f3);
	ft_printf("ft_printf|%0*f|\n\n", -8, f3);

	   printf("   printf|%0-5f|\n", f4);
	ft_printf("ft_printf|%0-5f|\n\n", f4);

 	   printf("   printf|%*f|\n", 8, f5);
	ft_printf("ft_printf|%*f|\n\n", 8, f5);
	  
	   printf("   printf|% *f|\n", 8, f6);
	ft_printf("ft_printf|% *f|\n\n", 8, f6);

	   printf("   printf|%0*f|\n", 8, f7);
	ft_printf("ft_printf|%0*f|\n\n", 8, f7);

	   printf("   printf|%0-5f|\n", f8);
	ft_printf("ft_printf|%0-5f|\n\n", f8);

	   printf("   printf|%0-5f|\n", f9);
	ft_printf("ft_printf|%0-5f|\n\n", f9);

	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Testing octal %%o\n");

	unsigned int o1 = 1;
	unsigned int o2 = 22;
	unsigned int o3 = 333;
	unsigned int o4 = 4444;
	unsigned int o5 = 55555;
	unsigned int o6 = 666666;
	unsigned int o7 = -7777777;
	unsigned int o8 = -88888888;
	unsigned int o9 = -999999999;
	   
	   printf("   printf|%*o|\n", -8, o1);
	ft_printf("ft_printf|%*o|\n\n", -8, o1);
	  
	   printf("   printf|% *o|\n", -8, o2);
	ft_printf("ft_printf|% *o|\n\n", -8, o2);

	   printf("   printf|%0*o|\n", -8, o3);
	ft_printf("ft_printf|%0*o|\n\n", -8, o3);

	   printf("   printf|%0-5o|\n", o4);
	ft_printf("ft_printf|%0-5o|\n\n", o4);

 	   printf("   printf|%*o|\n", 8, o5);
	ft_printf("ft_printf|%*o|\n\n", 8, o5);

 	   printf("   printf|% o|\n", o5);
	ft_printf("ft_printf|% o|\n\n", o5);
	  
	   printf("   printf|% *o|\n", 8, o6);
	ft_printf("ft_printf|% *o|\n\n", 8, o6);

	   printf("   printf|%0*o|\n", 8, o7);
	ft_printf("ft_printf|%0*o|\n\n", 8, o7);

	   printf("   printf|%0-5o|\n", o8);
	ft_printf("ft_printf|%0-5o|\n\n", o8);

	   printf("   printf|%0-5o|\n", o9);
	ft_printf("ft_printf|%0-5o|\n\n", o9);


	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Testing pointer %%p\n");

	unsigned int *p1 = 1;
	unsigned int *p2 = 22;
	unsigned int *p3 = 333;
	unsigned int *p4 = 4444;
	unsigned int *p5 = 55555;
	unsigned int *p6 = 666666;
	unsigned int *p7 = -7777777;
	unsigned int *p8 = -88888888;
	unsigned int *p9 = -999999999;
	   
	   printf("   printf|%*p|\n", -18, p1);
	ft_printf("ft_printf|%*p|\n\n", -18, p1);
	  
	   printf("   printf|% *p|\n", -18, p2);
	ft_printf("ft_printf|% *p|\n\n", -18, p2);

	   printf("   printf|%0*p|\n", -18, p3);
	ft_printf("ft_printf|%0*p|\n\n", -18, p3);

	   printf("   printf|%0-5p|\n", p4);
	ft_printf("ft_printf|%0-5p|\n\n", p4);

 	   printf("   printf|%*p|\n", 18, p5);
	ft_printf("ft_printf|%*p|\n\n", 18, p5);

 	   printf("   printf|% p|\n", p5);
	ft_printf("ft_printf|% p|\n\n", p5);
	  
	   printf("   printf|% *p|\n", 18, p6);
	ft_printf("ft_printf|% *p|\n\n", 18, p6);

	   printf("   printf|%0*p|\n", 18, p7);
	ft_printf("ft_printf|%0*p|\n\n", 18, p7);

	   printf("   printf|%0-5p|\n", p8);
	ft_printf("ft_printf|%0-5p|\n\n", p8);

	   printf("   printf|%0-5p|\n", p9);
	ft_printf("ft_printf|%0-5p|\n\n", p9);

	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Testing unsigned  %%u\n");

	unsigned int u1 = 1;
	unsigned int u2 = 22;
	unsigned int u3 = 333;
	unsigned int u4 = 4444;
	unsigned int u5 = 55555;
	unsigned int u6 = 666666;
	unsigned int u7 = -7777777;
	unsigned int u8 = -88888888;
	unsigned int u9 = -999999999;
	   
	   printf("   printf|%*u|\n", -18, u1);
	ft_printf("ft_printf|%*u|\n\n", -18, u1);
	  
	   printf("   printf|% *u|\n", -18, u2);
	ft_printf("ft_printf|% *u|\n\n", -18, u2);

	   printf("   printf|%0*u|\n", -18, u3);
	ft_printf("ft_printf|%0*u|\n\n", -18, u3);

	   printf("   printf|%0-5u|\n", u4);
	ft_printf("ft_printf|%0-5u|\n\n", u4);

 	   printf("   printf|%*u|\n", 18, u5);
	ft_printf("ft_printf|%*u|\n\n", 18, u5);

 	   printf("   printf|% u|\n", u5);
	ft_printf("ft_printf|% u|\n\n", u5);
	  
	   printf("   printf|% *u|\n", 18, u6);
	ft_printf("ft_printf|% *u|\n\n", 18, u6);

	   printf("   printf|%0*u|\n", 18, u7);
	ft_printf("ft_printf|%0*u|\n\n", 18, u7);

	   printf("   printf|%0-5u|\n", u8);
	ft_printf("ft_printf|%0-5u|\n\n", u8);

	   printf("   printf|%0-5u|\n", u9);
	ft_printf("ft_printf|%0-5u|\n\n", u9);

	   printf("   printf|%-18u|\n", -18, u1);
	ft_printf("ft_printf|%-18u|\n\n", -18, u1);
	  
	   printf("   printf|% -18u|\n", -18, u2);
	ft_printf("ft_printf|% -18u|\n\n", -18, u2);

	   printf("   printf|%0-18u|\n", -18, u3);
	ft_printf("ft_printf|%0-18u|\n\n", -18, u3);

	   printf("   printf|%0-5u|\n", u4);
	ft_printf("ft_printf|%0-5u|\n\n", u4);

 	   printf("   printf|%18u|\n", 18, u5);
	ft_printf("ft_printf|%18u|\n\n", 18, u5);

 	   printf("   printf|% u|\n", u5);
	ft_printf("ft_printf|% u|\n\n", u5);
	  
	   printf("   printf|% 18u|\n", 18, u6);
	ft_printf("ft_printf|% 18u|\n\n", 18, u6);

	   printf("   printf|%018u|\n", 18, u7);
	ft_printf("ft_printf|%018u|\n\n", 18, u7);

	   printf("   printf|% -18u|\n", u8);
	ft_printf("ft_printf|% -18u|\n\n", u8);

	   printf("   printf|% -18u|\n", u9);
	ft_printf("ft_printf|% -18u|\n\n", u9);

	printf("----Passes above tests----\n");
	printf("Testing hex, %%xX\n\n");
	unsigned int x1 = 1;
	unsigned int x2 = 22;
	unsigned int x3 = 333;
	unsigned int x4 = 4444;
	unsigned int x5 = 55555;
	unsigned int x6 = 666666;
	unsigned int x7 = -7777777;
	unsigned int x8 = -88888888;
	unsigned int x9 = -999999999;
	   
	   printf("   printf|%*x|\n", -18, x1);
	ft_printf("ft_printf|%*x|\n\n", -18, x1);
	  
	   printf("   printf|% *x|\n", -18, x2);
	ft_printf("ft_printf|% *x|\n\n", -18, x2);

	   printf("   printf|%0*x|\n", -18, x3);
	ft_printf("ft_printf|%0*x|\n\n", -18, x3);

	   printf("   printf|%0-5x|\n", x4);
	ft_printf("ft_printf|%0-5x|\n\n", x4);

 	   printf("   printf|%*x|\n", 18, x5);
	ft_printf("ft_printf|%*x|\n\n", 18, x5);

 	   printf("   printf|% x|\n", x5);
	ft_printf("ft_printf|% x|\n\n", x5);
	  
	   printf("   printf|% *x|\n", 18, x6);
	ft_printf("ft_printf|% *x|\n\n", 18, x6);

	   printf("   printf|%0*x|\n", 18, x7);
	ft_printf("ft_printf|%0*x|\n\n", 18, x7);

	   printf("   printf|%0-5x|\n", x8);
	ft_printf("ft_printf|%0-5x|\n\n", x8);

	   printf("   printf|%0-5x|\n", x9);
	ft_printf("ft_printf|%0-5x|\n\n", x9);

	   printf("   printf|%-18x|\n", -18, x1);
	ft_printf("ft_printf|%-18x|\n\n", -18, x1);
	  
	   printf("   printf|% -18x|\n", -18, x2);
	ft_printf("ft_printf|% -18x|\n\n", -18, x2);

	   printf("   printf|%0-18x|\n", -18, x3);
	ft_printf("ft_printf|%0-18x|\n\n", -18, x3);

	   printf("   printf|%0-5x|\n", x4);
	ft_printf("ft_printf|%0-5x|\n\n", x4);

 	   printf("   printf|%18x|\n", 18, x5);
	ft_printf("ft_printf|%18x|\n\n", 18, x5);

 	   printf("   printf|% x|\n", x5);
	ft_printf("ft_printf|% x|\n\n", x5);
	  
	   printf("   printf|% 18x|\n", 18, x6);
	ft_printf("ft_printf|% 18x|\n\n", 18, x6);

	   printf("   printf|%018x|\n", 18, x7);
	ft_printf("ft_printf|%018x|\n\n", 18, x7);

	   printf("   printf|% -18x|\n", x8);
	ft_printf("ft_printf|% -18x|\n\n", x8);

	   printf("   printf|% -18x|\n", x9);
	ft_printf("ft_printf|% -18x|\n\n", x9);

	   printf("   printf|%#*x|\n", -18, x1);
	ft_printf("ft_printf|%#*x|\n\n", -18, x1);
	  
	   printf("   printf|%# *x|\n", -18, x2);
	ft_printf("ft_printf|%# *x|\n\n", -18, x2);

	   printf("   printf|%#0*x|\n", -18, x3);
	ft_printf("ft_printf|%#0*x|\n\n", -18, x3);

	   printf("   printf|%#0-5x|\n", x4);
	ft_printf("ft_printf|%#0-5x|\n\n", x4);

 	   printf("   printf|%#*x|\n", 18, x5);
	ft_printf("ft_printf|%#*x|\n\n", 18, x5);

 	   printf("   printf|%# x|\n", x5);
	ft_printf("ft_printf|%# x|\n\n", x5);
	  
	   printf("   printf|%# *x|\n", 18, x6);
	ft_printf("ft_printf|%# *x|\n\n", 18, x6);

	   printf("   printf|%#0*x|\n", 18, x7);
	ft_printf("ft_printf|%#0*x|\n\n", 18, x7);

	   printf("   printf|%#0-5x|\n", x8);
	ft_printf("ft_printf|%#0-5x|\n\n", x8);

	   printf("   printf|%#0-5x|\n", x9);
	ft_printf("ft_printf|%#0-5x|\n\n", x9);

	   printf("   printf|%#-18x|\n", -18, x1);
	ft_printf("ft_printf|%#-18x|\n\n", -18, x1);
	  
	   printf("   printf|%# -18x|\n", -18, x2);
	ft_printf("ft_printf|%# -18x|\n\n", -18, x2);

	   printf("   printf|%#0-18x|\n", -18, x3);
	ft_printf("ft_printf|%#0-18x|\n\n", -18, x3);

	   printf("   printf|%#0-5x|\n", x4);
	ft_printf("ft_printf|%#0-5x|\n\n", x4);

 	   printf("   printf|%#18x|\n", 18, x5);
	ft_printf("ft_printf|%#18x|\n\n", 18, x5);

 	   printf("   printf|%# x|\n", x5);
	ft_printf("ft_printf|%# x|\n\n", x5);
	  
	   printf("   printf|%# 18x|\n", 18, x6);
	ft_printf("ft_printf|%# 18x|\n\n", 18, x6);

	   printf("   printf|%#018x|\n", 18, x7);
	ft_printf("ft_printf|%#018x|\n\n", 18, x7);

	   printf("   printf|%# -18x|\n", x8);
	ft_printf("ft_printf|%# -18x|\n\n", x8);

	   printf("   printf|%# -18x|\n", x9);
	ft_printf("ft_printf|%# -18x|\n\n", x9);

	ft_printf("Passes above tests\n");
	ft_printf("Testing binary, %%b\n\n");


	unsigned int b1 = 1;
	unsigned int b2 = 22;
	unsigned int b3 = 333;
	unsigned int b4 = 4444;
	unsigned int b5 = 55555;
	unsigned int b6 = 666666;
	unsigned int b7 = -7777777;
	unsigned int b8 = -88888888;
	unsigned int b9 = -999999999;
	   
	ft_printf("ft_printf|%*b|\n\n", -18, b1);
	  
	ft_printf("ft_printf|% *b|\n\n", -18, b2);

	ft_printf("ft_printf|%0*b|\n\n", -18, b3);

	ft_printf("ft_printf|%0-5b|\n\n", b4);

	ft_printf("ft_printf|%*b|\n\n", 18, b5);

	ft_printf("ft_printf|% b|\n\n", b5);
	  
	ft_printf("ft_printf|% *b|\n\n", 18, b6);

	ft_printf("ft_printf|%0*b|\n\n", 18, b7);

	ft_printf("ft_printf|%0-5b|\n\n", b8);

	ft_printf("ft_printf|%0-5b|\n\n", b9);

	ft_printf("ft_printf|%-18b|\n\n", -18, b1);
	  
	ft_printf("ft_printf|% -18b|\n\n", -18, b2);

	ft_printf("ft_printf|%0-18b|\n\n", -18, b3);

	ft_printf("ft_printf|%0-5b|\n\n", b4);

	ft_printf("ft_printf|%18b|\n\n", 18, b5);

	ft_printf("ft_printf|% b|\n\n", b5);
	  
	ft_printf("ft_printf|% 18b|\n\n", 18, b6);

	ft_printf("ft_printf|%018b|\n\n", 18, b7);

	ft_printf("ft_printf|% -18b|\n\n", b8);

	ft_printf("ft_printf|% -18b|\n\n", b9);

	ft_printf("ft_printf|%#*b|\n\n", -18, b1);
	  
	ft_printf("ft_printf|%# *b|\n\n", -18, b2);

	ft_printf("ft_printf|%#0*b|\n\n", -18, b3);

	ft_printf("ft_printf|%#0-5b|\n\n", b4);

	ft_printf("ft_printf|%#*b|\n\n", 18, b5);

	ft_printf("ft_printf|%# b|\n\n", b5);
	  
	ft_printf("ft_printf|%# *b|\n\n", 18, b6);

	ft_printf("ft_printf|%#0*b|\n\n", 18, b7);

	ft_printf("ft_printf|%#0-5b|\n\n", b8);

	ft_printf("ft_printf|%#0-5b|\n\n", b9);

	ft_printf("ft_printf|%#-18b|\n\n", -18, b1);
	  
	ft_printf("ft_printf|%# -18b|\n\n", -18, b2);

	ft_printf("ft_printf|%#0-18b|\n\n", -18, b3);

	ft_printf("ft_printf|%#0-5b|\n\n", b4);

	ft_printf("ft_printf|%#18b|\n\n", 18, b5);

	ft_printf("ft_printf|%# b|\n\n", b5);
	  
	ft_printf("ft_printf|%# 18b|\n\n", 18, b6);

	ft_printf("ft_printf|%#018b|\n\n", 18, b7);

	ft_printf("ft_printf|%# -18b|\n\n", b8);

	ft_printf("ft_printf|%# -18b|\n\n", b9);

}
