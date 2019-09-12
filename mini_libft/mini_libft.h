/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:50:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 15:50:30 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIBFT_H
# define MINI_LIBFT_H

#include <unistd.h>
#include <stdlib.h> /*uint64_t, uint_fast64_t*/
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

/*
** mini_libft function prototypes-----------------------------------------------
*/

/*
** Macros----------------------------------------------------------------------
*/

typedef __uint128_t uint128_t;

/*
** Struct for ftoa--------------------------------------------------------------
*/

typedef struct		s_floats
{
	char			new_string[64];
	long double		temp_nbr;
	long double		difference;
	uint_fast64_t	whole_nbr;
	uint_fast64_t	fraction_nbr;
	int				pad_zeros;
	int				fraction_nbr_len;
	int				whole_nbr_len;
	bool			negative_sign;
} 					t_float;

/*
** ft_ftoa.c
*/

void				get_whole_fraction_diff(t_float *f, long double n, int precision);
void 				ft_ftoa_roundup(t_float *f, long double nbr, int precision);
void 				extract_precision_nbr(t_float *f, char str[], int precision);
void				extract_whole_nbr(t_float *f, char str[], int precision);
char				*ft_ftoa(long double nbr, char str[], int precision);

/*
** ft_atoi.c
*/

int					ft_atoi(const char *str);
int					ft_isspace(int c);

/*
** ft_bzero.c
*/

void				ft_bzero(void *str, size_t len);
void				ft_bzero_no_len(void *str);

/*
** ft_hex.c
*/

char				*ft_hex(uint_fast64_t value, char c, char str[]);
int					ft_hex_numlen(uint_fast64_t value, int base);



int_fast64_t		ft_abs(int_fast64_t num);

char				*ft_strrev(char *str);
int					ft_isdigit(char c);
int					ft_isdigit1(char c);
char 				*ft_itoa_base(int_fast64_t value, int base, char str[]);
char				*ft_itoa_base_u(uint_fast64_t value, int base, char str[]);
int					ft_numlen_uint64(uint_fast64_t nbr);
int					ft_numlen_uint128(uint128_t nbr);
uint_fast64_t		ft_pow10(uint_fast64_t num);
void				ft_putchar(char c);
void				ft_putstr(char *str);
char				*ft_strcat(char *dest, char *source);
char				*ft_strcat_loop(char *dest, int x_times, char *source);
int					ft_strlen(char *str);
int_fast32_t		ft_strlen_fast(char *str);
char				*ft_strcpy(char *dest, char *source);
char				*ft_strncpy(char *dest, char *source, int len);
void				ft_swap(char *a, char *b);
void				print_spaces(int repeat);
int					var_to_zero(int_fast64_t *a, int *b, int *c, int *d);

#endif
