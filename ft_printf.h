/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/20 18:00:58 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./mini_libft/mini_libft.h"
# include <unistd.h> /*write(2)*/
# include <stdlib.h> /*malloc(3), free(3), and exit(3)*/
# include <stdarg.h> /*va_start, va_arg, va_copy, va_end(3)*/
# include <stdbool.h> /*bool data type*/
# include <stdio.h>

/*
** One megabyte = 1024 * 1024 bytes
** 1024 bytes    1024 kb
** __________ x _________
**    1 kb        1 mb
**
** 1024 x 1024 bytes / 1 mb
**
** 1048576 bytes = 1 mb
*/

# define FT_ONE_MEGABYTE 1048576

typedef struct s_printf
{
	va_list arguments;
	const char *string;
	bool flag_hash;
	bool flag_zero;
	bool flag_minus;
	bool flag_plus;
	bool flag_space;
	int	width_field;
	int	precision_field;
	int length_field;

}	t_printf;

typedef struct s_variables
{
	int i;
	int c;
	int repeat;
} t_variables;

//void set_variables_to_zero(t_variables var);

int 	ft_conversion(const char c);
char	determine_conversion(const char *str, t_variables *var);
int		start_parsing(va_list args, const char *str, t_variables *var);
void	print_c(va_list args, int repeat, const char conversion);
void	print_on_screen(int repeat, va_list args, const char conversion_value);
void	initialize_flag_and_field_values(t_printf *pr);
int 	collect_flags(t_printf *pr, t_variables *var);
void 	cancel_flags(t_printf *pr);
void	collect_width(va_list args, t_printf *pr, t_variables *var);
void	collect_precision(va_list args, t_printf *pr, t_variables *var);
int		ft_printf_driver(va_list args, const char *str);
int		ft_printf(const char *str, ...);

#endif
