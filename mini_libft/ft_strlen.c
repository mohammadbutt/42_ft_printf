/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:50:22 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/10 13:53:18 by mbutt            ###   ########.fr       */
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

int_fast32_t ft_strlen_fast(char *str)
{
	int_fast32_t i;

	i = 0;
	if(str)
		while(str[i])
		{
			if(str[i + 1] == '\0')
				return (i + 1);
			else if(str[i + 2] == '\0')
				return(i + 2);
			else
				i = i + 3;
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
