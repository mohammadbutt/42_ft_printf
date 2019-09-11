/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:44:45 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 11:44:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

char *ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str) - 1;
	while(i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return(str);
}
