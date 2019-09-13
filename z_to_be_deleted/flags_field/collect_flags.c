/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:56:13 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/19 14:57:20 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int num;

	num = 5;

	printf("|01||%  d|\n", num);
	printf("|02||% #f|\n", (double)num);
	printf("|03||% 0d|\n", num);
	printf("|04||% -d|\n", num);
	printf("|05||% +d|\n\n", num); //flag ' ' is ignored when flag '+' is present


	printf("|06||%# f|\n", (double)num);
	printf("|07||%##f|\n", (double)num);
	printf("|08||%#0f|\n", (double)num);
	printf("|19||%#-f|\n", (double)num);
	printf("|10||%#+f|\n\n", (double)num);

	printf("|11||%0 d|\n", num);
	printf("|12||%0#f|\n", (double)num);
	printf("|13||%00d|\n", num);
	printf("|14||%0-d|\n", num); //flag '0' is ignored when flag '-' is present
	printf("|15||%0+d|\n\n", num);

	printf("|16||%- d|\n", num);
	printf("|17||%-#f|\n", (double)num);
	printf("|18||%-0d|\n", num); //flag '0' is ignored when flag '-' is present
	printf("|19||%--d|\n", num);
	printf("|20||%-+d|\n\n", num);

	printf("|21||%+ d|\n", num); //flag ' ' is ignored when flag '+' is present
	printf("|22||%+#f|\n", (double)num);
	printf("|23||%+0d|\n", num);
	printf("|24||%+-d|\n", num);
	printf("|25||%++d|\n", num);

/*
//	printf("|%2d|\n", num);
	printf("|%  2d|\n", num);
	printf("|%-2d|\n", num);
	printf("|%+2d|\n", num);
	printf("|%+-2d|\n", num);
	printf("|%-+2d|\n", num);
	printf("|%0+d|\n", num);
	printf("|%0+d|\n", num); // + overwrites 0 But need to store 0 for extra zeros
	printf("|%+0d|\n", num); // + overwrites 0 But need to store 0 for extra zeros
	printf("|%-  d|\n", num); //space overwrites - But need to store - for width
	printf("|%  -d|\n", num); //space overwrites - But need to store - for width
//	printf("|%+  d|\n", num); // flag ' ' is ignored when flag '+' is present
//	printf("|%  +d|\n", num); // flag ' ' is ignored when flag '+' is present
//	printf("|%0-d|\n", num); // flag '0' is ignored when flag '-' is present
//	printf("|%-d|\n", num); // flag '0' is ignored when flag '-' is present
	
	printf("|%#x|\n", num);
*/
}
