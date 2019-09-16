/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:43:38 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/16 16:11:27 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "srcs/ft_printf.h"

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


	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Doesn't pass below\n\n");

	   printf("   printf{%.*d}\n", -5, 42);
	ft_printf("ft_printf{%.*d}\n\n", -5, 42);


	   printf("   printf|{%*3d}|\n", 5, 0);
	ft_printf("ft_printf|{%*3d}|\n", 5, 0);

	   printf("   printf:|%s%s%s%s%s%s%d%d%s%s%s%s  %s%s|\n", s1, s2, s3, s4, s5, s6, n1, n2, s6, s5, s4, s3, s2, s1);
	ft_printf("ft_printf:|%s%s%s%s%s%s%d%d%s%s%s%s  %s%s|\n", s1, s2, s3, s4, s5, s6, n1, n2, s6, s5, s4, s3, s2, s1);

	   printf("   printf:|%d%d%d%d%d%d%d%d%d%d%d%d%d%d|\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n7, n6, n5, n4, n3);
	ft_printf("ft_printf:|%d%d%d%d%d%d%d%d%d%d%d%d%d%d|\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n7, n6, n5, n4, n3);

}
