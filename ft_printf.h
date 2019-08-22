/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/21 18:27:27 by mbutt            ###   ########.fr       */
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
# define FT_VALID_TYPE "cspdiouxXf%"
/*
** Colon ':' in structs is called a bit field
** 1 bool data type uses 1 bytes. 1 byte = 8 bits. This means a bool will ask
** for 1 byte of memory which will have 8 bits as shown below:
**  _ _ _ _ _ _ _ _
** |_|_|_|_|_|_|_|_|
**
** Unless se specify this entire 1 byte will be reserved and used for a single
** variable.
** We can ask for one single bit from a byte and it will look as following:
**  _
** |_|
**
** When we specify by using colon : a bool variable will only
** use the specified number of bits of the byte, which means we can have 7 more
** bits that can be used.
*/

typedef struct s_printf
{
	va_list arguments;
	const char *string;
	int	width_field;
	int	precision_field;
	int length_field;
	bool flag_hash : 1;
	bool flag_zero : 1;
	bool flag_minus : 1;
	bool flag_plus : 1;
	bool flag_space : 1;
	bool length_hh : 1;
	bool length_h : 1;
	bool length_l : 1;
	bool length_ll : 1;
	bool length_L : 1;
	int  type_field;

}	t_printf;

typedef struct s_variables
{
	int i;
//	int c;
//	int repeat;
} t_variables;

//void set_variables_to_zero(t_variables var);

int 	ft_conversion(const char c);
char	determine_conversion(const char *str, t_variables *var);
int		start_parsing(va_list args, const char *str, t_variables *var);
void	print_c(va_list args, int repeat, const char conversion);
void	print_on_screen(int repeat, va_list args, const char conversion_value);
void	initialize_flag_and_field_values(t_printf *pr);
void	start_collecting(va_list args, t_printf *pr, t_variables *var);
int 	collect_flags(t_printf *pr, t_variables *var);
void 	cancel_flags(t_printf *pr);
void	collect_width(va_list args, t_printf *pr, t_variables *var);
void	collect_precision(va_list args, t_printf *pr, t_variables *var);
void	collect_length(t_printf *pr, t_variables *var);
void	collect_type_field(t_printf *pr ,t_variables *var);
int		ft_printf_driver(va_list args, const char *str);
int		ft_printf(const char *str, ...);

#endif
