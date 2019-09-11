/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:58:09 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 14:16:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>

/*
** ft_abs performs the same function as abs(3) function found in stdlib.h
** Converts a value into an absolute value, so a negative values becomes
** positive.
** Return Value: Returns a postive value.
*/

int_fast64_t	ft_abs(int_fast64_t num)
{
	if (num < 0)
		num = -1 * num;
	return (num);
}

/*
int main(void)
{
	int num;

	num = -1222;

	printf("|%d|\n", num);
	printf("|%d|\n", ft_abs(num));
}
*/
