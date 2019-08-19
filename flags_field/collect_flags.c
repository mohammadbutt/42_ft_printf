/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:56:13 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/18 21:24:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int num;

	num = 5;
//	printf("|%2d|\n", num);
	printf("|%  2d|\n", num);
	printf("|%-2d|\n", num);
	printf("|%+2d|\n", num);
	printf("|%+-2d|\n", num);
	printf("|%-+2d|\n", num);
	printf("|%0+d|\n", num); // + overwrites 0 But need to store 0 for extra zeros
	printf("|%+0d|\n", num); // + overwrites 0 But need to store 0 for extra zeros
	printf("|%-  d|\n", num); //space overwrites - But need to store - for width
	printf("|%  -d|\n", num); //space overwrites - But need to store - for width
//	printf("|%+  d|\n", num); // flag ' ' is ignored when flag '+' is present
//	printf("|%  +d|\n", num); // flag ' ' is ignored when flag '+' is present
//	printf("|%0-d|\n", num); // flag '0' is ignored when flag '-' is present
//	printf("|%-d|\n", num); // flag '0' is ignored when flag '-' is present
	
	printf("|%#x|\n", num);
}
