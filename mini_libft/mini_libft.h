/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:50:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/28 20:12:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIBFT_H
# define MINI_LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*
** mini_libft function prototypes-----------------------------------------------
*/


int_fast64_t	ft_abs(int_fast64_t num);
int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t len);
int				ft_numlen(int_fast64_t value, int base);
int				ft_isdigit(char c);
int				ft_isdigit1(char c);
int				ft_isspace(int c);
char 			*ft_itoa_base(int_fast64_t value, int base, char str_buffer[]);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *source);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *source);
char			*ft_strncpy(char *dest, char *source, int len);
void			print_spaces(int repeat);


#endif
