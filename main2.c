/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:43:38 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/15 20:08:15 by mbutt            ###   ########.fr       */
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

	   printf("   printf|%*d|\n", -5, 42);
	ft_printf("ft_printf|%*d|\n\n", -5, 42);
	  
	   printf("   printf|% *d|\n", -5, 42);
	ft_printf("ft_printf|% *d|\n\n", -5, 42);

	   printf("   printf|%0*d|\n", -5, 42);
	ft_printf("ft_printf|%0*d|\n\n", -5, 42);



	   printf("   printf|%0-5d|\n", 42);
	ft_printf("ft_printf|%0-5d|\n\n", 42);

	   printf("   printf|%*c|\n", -5, 'a');
	ft_printf("ft_printf|%*c|\n\n", -5, 'a');

	   printf("   printf|%-5c|\n", 'a');
	ft_printf("ft_printf|%-5c|\n\n", 'a');


	printf("Passes above\n");
	printf("-----------------------\n");
	printf("Doesn't pass below\n\n");

	   printf("   printf{%.*d}\n", -5, 42);
	ft_printf("ft_printf{%.*d}\n\n", -5, 42);


	   printf("   printf|{%*3d}|\n", 5, 0);
	ft_printf("ft_printf|{%*3d}|\n", 5, 0);

	   printf("{%.*d}\n", -5, 42); printf("{%*3d}", 5, 0);


}
