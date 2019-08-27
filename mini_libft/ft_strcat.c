/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:22:56 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/26 16:29:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

char *ft_strcat(char *dest, char *source)
{
	int len;
	
	len = ft_strlen(dest);
	return(ft_strcpy(dest + len, source));
}
