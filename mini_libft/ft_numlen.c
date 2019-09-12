/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:42:00 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 16:25:14 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

int ft_numlen_uint64(uint_fast64_t nbr)
{
	int i;

	i = 0;
	if(nbr == 0)
		return(0);
	while(nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return(i);
}
