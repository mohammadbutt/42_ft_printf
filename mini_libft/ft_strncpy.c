/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 20:34:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/23 20:57:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

char *ft_strncpy(char *dest, char *source, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (source && len)
		while (len-- && source[i])
			dest[j++] = source[i++];
	dest[i] = '\0';
	return (dest);
}
