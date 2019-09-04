/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/03 22:27:15 by mbutt            ###   ########.fr       */
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
# include <limits.h> /*Ford different macros like CHAR_MIN, SHRT_MIN, LONG_MIN*/
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
**
** macros FT_CHAR_STR, FT_SHORT_STR, FT_INT_STR, FT_LONG_STR, FT_LONG_LONG_STR
** their values go over the max range, that's because the negative sign from
** these values will get appended to the buffer first and the values without
** the negative sign will get stored in temp_str.
*/

# define FT_ONE_MEGABYTE 1048576
# define FT_ONE_KILOBYTE 1024
# define FT_VALID_TYPE "cspdiouxXf%"
# define FT_HEX 16
# define FT_DECIMAL 10
# define FT_OCTAL 8
# define FT_CHAR_STR "128"
# define FT_SHORT_STR "32768"
# define FT_INT_STR "2147483648"
# define FT_LONG_STR "9223372036854775808"
# define FT_LLONG_STR "9223372036854775808"

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
	int width;
	int precision;
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
	int i;
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
//void 	ft_strappend(t_printf *pr, char *source);
//char	*ft_strappend(char *dest, int dest_index, char *source);
void	append_to_buffer(t_printf *pr, char *source);
void	append_to_buffer_loop(t_printf *pr, int x_times, char *str);
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
//int		ft_pad(t_printf *pr, int string_length);
int		ft_pad(int field, int string_length);
void	print_s(t_printf *pr);
void	print_s_append_buffer(t_printf *pr, char *str, int repeat);
void	print_percent(t_printf *pr);
void 	print_p(t_printf *pr);
void	print_p_append(t_printf *pr, char *str, int re_width, int re_precision);
int_fast64_t 	determine_length_of_d(t_printf *pr);
char	*ft_itoa_min(t_printf *pr, int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_hh(char num, char temp_str[]);
char 	*ft_itoa_min_h(short num, char temp_str[]);
char	*ft_itoa_min_l(int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_ll(int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_int(int num, char temp_str[]);
void	ft_bzero_buffers(char str[], char temp_str[]);
void 	print_d(t_printf *pr);
void	d_append_buffer(t_printf *pr, char s[], char t_s[]);
void	print_u(t_printf *pr);
uint_fast64_t determine_length_of_u_o(t_printf *pr);
void	u_append_buffer(t_printf *pr, char s[], char t_s[]);
void	print_o(t_printf *pr);
void 	check_flags_for_o(t_printf *pr, char s[]);
void	o_append_buffer(t_printf *pr, char s[], char t_s[]);
void 	print_x(t_printf *pr);
void	no_width_no_precision(t_printf *pr, uint_fast64_t n);
void	no_width_yes_precision(t_printf *pr, uint_fast64_t n);
void	yes_width_no_precision(t_printf *pr, uint_fast64_t n);
//void	print_x_append(t_printf *pr, char *str, int re_width, int re_precision, uint64_t pointer_value);

//void	print_x(t_printf *pr);
//void	x_append_buffer(t_printf *pr, char s[]);

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
