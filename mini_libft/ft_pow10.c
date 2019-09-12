/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:52:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 16:18:11 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"


uint_fast64_t ft_pow10(uint_fast64_t num)
{
	uint_fast64_t i;

	i = 1;
	if(num)
		while(num--)
			i = i * 10;
	return(i);
}
