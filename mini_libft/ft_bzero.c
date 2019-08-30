/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 17:52:38 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/29 21:07:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char *str;
	size_t	i;

	str = s;
	i = 0;
	while (i < len)
		str[i++] = 0;
}

void ft_bzero_no_len(void *s)
{
	unsigned char *str;
	size_t i;
	
	str = s;
	i = 0;
	if(str)
		while(str[i])
			str[i++] = 0;
}
