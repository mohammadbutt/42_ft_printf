/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:22:56 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/04 23:24:50 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>

char *ft_strcat(char *dest, char *source)
{
	int len;
	
	len = ft_strlen(dest);
	return(ft_strcpy(dest + len, source));
}

char *ft_strcat_loop(char *dest, int x_times, char *source)
{
	if(x_times)
		while(x_times--)
			ft_strcat(dest, source);
	return(dest);
}
