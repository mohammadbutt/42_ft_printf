/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:50:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/09 16:09:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIBFT_H
# define MINI_LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

/*
** mini_libft function prototypes-----------------------------------------------
*/

typedef struct s_floats
{
	double temp_nbr;
	uint64_t whole_nbr;
	uint64_t fraction_nbr;
	double difference;
	int pad_zeros;
	char new_string[64];
	int fraction_nbr_len;
	int whole_nbr_len;
	bool negative_sign;
} t_float;

/*
typedef struct s_float
{
	double temp_nbr;
	uint64_t whole_nbr;
	uint64_t fraction_nbr;
	double difference;
	int pad_zeros;
	char new_string[64];
	int fraction_nbr_len;
	int whole_nbr_len;
	bool negative_sign;

} t_float;
*/
/*
typedef struct s_printf
{
	t_floats f;
} t_printf;
*/
int_fast64_t	ft_abs(int_fast64_t num);
int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t len);
void			ft_bzero_no_len(void *str);
//int				ft_numlen(int_fast64_t value, int base);
//int				initialize_with_zero(int_fast64_t *a, int *b, int *c, int *d);
int				ft_isdigit(char c);
int				ft_isdigit1(char c);
int				ft_isspace(int c);
char 			*ft_itoa_base(int_fast64_t value, int base, char str[]);
char			*ft_itoa_base_u(uint_fast64_t value, int base, char str[]);
char			*ft_hex(uint_fast64_t value, char c, char str[]);
int				ft_numlen_uint64(uint_fast64_t nbr);
uint_fast64_t	ft_pow10(uint_fast64_t num);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *source);
char			*ft_strcat_loop(char *dest, int x_times, char *source);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *source);
char			*ft_strncpy(char *dest, char *source, int len);
void			ft_swap(char *a, char *b);
void			print_spaces(int repeat);
int				var_to_zero(int_fast64_t *a, int *b, int *c, int *d);

#endif
