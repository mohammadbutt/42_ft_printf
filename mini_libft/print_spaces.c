/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:41:38 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/12 14:02:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
/*
** Function print_spaces prints as many spaces as the number repeat. There's a
** simpler method to create the function as shown below:
** while(repeat)
** {
**		write(1, " ", 1);
**		repeat--;
** }
** The above function is simple and works fine to print spaces, but the only
** challenge is that we have to call the write function repeatedly.
** To avoid calling write several times, the below function is created:
*/

void print_spaces(int repeat)
{
	int i;
	char buffer_size[repeat + 1];

	i = 0;
	while(i < repeat)
	{
		buffer_size[i] = ' ';
		i++;
	}
	buffer_size[i] = '\0';
	write(1, buffer_size, repeat);
}
