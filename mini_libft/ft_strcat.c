/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:22:56 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 13:19:08 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>

/*
char *ft_strcat(char *dest, char *source)
{
	int len;
	
	len = ft_strlen(dest);
	return(ft_strcpy(dest + len, source));
}
*/


/*
char *ft_strcat_loop(char *dest, int x_times, char *source)
{
	if(x_times)
		while(x_times--)
			ft_strcat(dest, source);
	return(dest);
}
*/

char *ft_strcat(char *dest, char *source)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	if(source[i])
		while(source[i])
			dest[j++] = source[i++];
	dest[j] = '\0';
	return(dest);
}

char *ft_strcat_loop(char *dest, int x_times, char *source)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	if(x_times)
		while(x_times--)
		{
			if(source)
				while(source[i])
					dest[j++] = source[i++];
			i = 0;
		}
	dest[j] = '\0';
	return(dest);
}
