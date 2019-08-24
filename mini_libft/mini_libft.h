/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:50:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/23 21:00:48 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIBFT_H
# define MINI_LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*
** mini_libft function prototypes-----------------------------------------------
*/


int		ft_abs(int num);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t len);
int		ft_isdigit(char c);
int		ft_isdigit1(char c);
int		ft_isspace(int c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char 	*ft_strcpy(char *dest, char *source);
char	*ft_strncpy(char *dest, char *source, int len);
void	print_spaces(int repeat);


#endif
