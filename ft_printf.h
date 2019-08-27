/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/27 16:23:11 by mbutt            ###   ########.fr       */
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
# include <string.h>
//# include "forbidden.h"

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
# define FT_HEX 16
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

typedef struct s_variables
{
	int i;
//	int c;
//	int repeat;
} t_variables;

typedef struct s_flag
{
	bool hash; //: 1;
	bool zero; //: 1;
	bool minus; //: 1;
	bool plus; //: 1;
	bool space; //: 1;
} t_flag;

typedef struct s_length
{
	bool hh; //: 1;
	bool h; //: 1;
	bool l; //: 1;
	bool ll; //: 1;
	bool L; //: 1;
} t_length;

typedef struct s_printf
{
	t_variables var;
	t_flag flag;
	t_length length;
	char buffer[FT_ONE_MEGABYTE];
	va_list arguments;
	const char *string;
	int buffer_i;
	int	width_field;
	int	precision_field;
	int length_field;
	int  type_field;
	int return_of_printf;

}	t_printf;

//int 	ft_conversion(const char c);
//char	determine_conversion(const char *str, t_variables *var);
//int		start_parsing(va_list args, const char *str, t_variables *var);
//void	print_on_screen(int repeat, va_list args, const char conversion_value);
void 	ft_strappend(t_printf *pr, char *source);
//char	*ft_strappend(char *dest, int dest_index, char *source);
void	start_parsing(t_printf *pr);
void	initialize_flag_and_field_values(t_printf *pr);
void	start_collecting(t_printf *pr);
int 	collect_flags(t_printf *pr);
void 	cancel_flags(t_printf *pr);
void	collect_width(t_printf *pr);
void	collect_precision(t_printf *pr);
void	collect_length(t_printf *pr);
void	collect_type_field(t_printf *pr);
void	start_printing(t_printf *pr);
void	print_c(t_printf *pr);
//int		find_padding(t_printf *pr, int string_length);
int		find_padding(int field, int string_length);
void	print_s(t_printf *pr);
void	print_s_append_buffer(t_printf *pr, char *str, int repeat);
void	print_percent(t_printf *pr);
void 	print_p(t_printf *pr);
void	append_to_buffer_in_loop(t_printf *pr, int x_times, char *str);
void	print_p_append(t_printf *pr, char *str, int re_width, int re_precision);

/*
typedef void ft_print_functions(t_printf *pr);

ft_print_functions *ft_dispatch_table[2] =
{
	print_c,
	print_percent
};
*/
void	initialize_printf_struct(t_printf *pr, const char *str);
int		ft_printf_driver(va_list args, const char *str);
int		ft_printf(const char *str, ...);

#endif
