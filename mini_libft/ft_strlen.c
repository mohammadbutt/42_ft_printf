/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:50:22 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/13 20:18:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdio.h>
/*
int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	return (i);
}
*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str == NULL)
		return(i);
	if(str[i] != '\0')
	{
		i++;
//		i = 1 + ft_strlen(str + i);
		i = 1 + ft_strlen(&str[i]);
	}
	return(i);
}

/*
int main(void)
{
	char *str = "Test";

	printf("%d\n", ft_strlen(str));
}
*/
