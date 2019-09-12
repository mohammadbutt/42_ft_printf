/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 11:13:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./mini_libft/mini_libft.h"
# include <unistd.h> /*write(2)*/
# include <stdlib.h> /*malloc(3), free(3), exit(3), uint64_t, and uint_fast64_t*/
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
# define FT_VALID_TYPE "cspdiouxXfb%"
# define FT_HEX 16
# define FT_DECIMAL 10
# define FT_OCTAL 8
# define FT_BINARY 2
# define FT_CHAR_STR "128"
# define FT_SHORT_STR "32768"
# define FT_INT_STR "2147483648"
# define FT_LONG_STR "9223372036854775808"
# define FT_LLONG_STR "9223372036854775808"

/*
** -----------------------------Font Color Scheme-------------------------------
** -----------------------------------------------------------------------------
*/

/*
** Regular font Color
*/

# define NC "\33[0m"
# define BLACK "\33[0;30m"
# define RED "\33[0;31m"
# define GREEN "\33[0;32m"
# define YELLOW "\33[0;33m"
# define BLUE "\33[0;34m"
# define PURPLE "\33[0;35m"
# define CYAN "\33[0;36m"
# define WHITE "\33[0;37m"

/*
** Bold font Color
*/

# define BBLACK "\33[1;30m"
# define BRED "\33[1;31m"
# define BGREEN "\33[1;32m"
# define BYELLOW "\33[1;33m"
# define BBLUE "\33[1;34m"
# define BPURPLE "\33[1;35m"
# define BCYAN "\33[1;36m"
# define BWHITE "\33[1;37m"

/*
** Background Colors
*/

#define ON_BLACK "\033[40m"
#define ON_RED "\033[41m"
#define ON_GREEN "\033[42m"
#define ON_YELLOW "\033[43m"
#define ON_BLUE "\033[44m"
#define ON_PURPLE "\033[45m"
#define ON_CYAN "\033[46m"
#define ON_WHITE "\033[47m"

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
} t_variables;

typedef struct s_flag
{
	bool hash : 1;
	bool zero : 1;
	bool minus : 1;
	bool plus : 1;
	bool space : 1;
} t_flag;

typedef struct s_length
{
	bool hh : 1;
	bool h : 1;
	bool l : 1;
	bool ll : 1;
	bool L : 1;
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

/*
** type_field_b.c
*/

void	b_append_buffer(t_printf *pr, char s[], char t_s[]);
void 	check_flags_for_b(t_printf *pr, char s[]);
void	collect_b(t_printf *pr);

/*
** type_field_f.c
*/

void	collect_f(t_printf *pr);
void	f_append_buffer(t_printf *pr, char s[], char t_s[]);

/*
** type_field_d_i.c
*/

int_fast64_t	length_field_d(t_printf *pr);
void			collect_d(t_printf *pr);
void			d_append_buffer(t_printf *pr, char s[], char t_s[]);

/*
** type_field_p.c
*/

void	collect_p(t_printf *pr);
void	p_append_buffer(t_printf *pr, char *str, int width, int precision);

/*
** type_field_s.c
*/

void	collect_s(t_printf *pr);
void	s_append_buffer(t_printf *pr, char *str, int repeat);

/*
** type_field_c.c
*/

void	collect_c(t_printf *pr);

/*
** type_field_percent.c
*/

void	collect_percent(t_printf *pr);







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
void	start_collect_flags(t_printf *pr);
int 	collect_flags(t_printf *pr);
void 	cancel_flags(t_printf *pr);
void	collect_width(t_printf *pr);
void	collect_precision(t_printf *pr);
void	collect_length(t_printf *pr);
void	collect_type_field(t_printf *pr);
//void	start_printing(t_printf *pr);
void	collect_data(t_printf *pr);
//void	print_c(t_printf *pr);
//int		ft_pad(t_printf *pr, int string_length);
//int		ft_pad(int field, int string_length);
int		ft_pad(int precision_or_width, int string_length);
//void	print_percent(t_printf *pr);
//void 	print_p(t_printf *pr);

//int_fast64_t 	determine_length_of_d(t_printf *pr);
char	*ft_itoa_min(t_printf *pr, int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_hh(char num, char temp_str[]);
char 	*ft_itoa_min_h(short num, char temp_str[]);
char	*ft_itoa_min_l(int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_ll(int_fast64_t num, char temp_str[]);
char	*ft_itoa_min_int(int num, char temp_str[]);
//void	ft_bzero_buffers(char str[], char temp_str[]);
//void 	print_d(t_printf *pr);
//void	print_u(t_printf *pr);
void	collect_u(t_printf *pr);
//uint_fast64_t determine_length_of_u_o(t_printf *pr);
uint_fast64_t	length_field_uox(t_printf *pr);
void	u_append_buffer(t_printf *pr, char s[], char t_s[]);
//void	print_o(t_printf *pr);
void	collect_o(t_printf *pr);
void 	check_flags_for_o(t_printf *pr, char s[]);
void	o_append_buffer(t_printf *pr, char s[], char t_s[]);
//void 	print_xX(t_printf *pr);
void 	collect_x(t_printf *pr);
/*
// Placing xX before function names
void	width_N_precision_N(t_printf *pr, uint_fast64_t n);
void	width_N_precision_Y(t_printf *pr, uint_fast64_t n);
void	width_Y_precision_N(t_printf *pr, uint_fast64_t n);
void	width_Y_precision_Y(t_printf *pr, uint_fast64_t n);
void	width_Y_precision_N2(t_printf *pr, char str[], char str_hex[]);
void	width_Y_precision_Y2(t_printf *pr, char str[], char str_hex[]);
*/
void	x_width_n_precision_n(t_printf *pr, uint_fast64_t n);
void	x_width_n_precision_y(t_printf *pr, uint_fast64_t n);
void	x_width_y_precision_n(t_printf *pr, uint_fast64_t n);
void	x_width_y_precision_y(t_printf *pr, uint_fast64_t n);
void	x_width_y_precision_n2(t_printf *pr, char str[], char str_hex[]);
void	x_width_y_precision_y2(t_printf *pr, char str[], char str_hex[]);



//void	print_f(t_printf *pr);

//void	print_b(t_printf *pr);




//void	no_width_no_precision(t_printf *pr, uint_fast64_t n);
//void	no_width_yes_precision(t_printf *pr, uint_fast64_t n);
//void	yes_width_no_precision(t_printf *pr, uint_fast64_t n);
//void	yes_width_yes_precision(t_printf *pr, uint_fast64_t n);
//void	print_x_append(t_printf *pr, char *str, int re_width, int re_precision, uint64_t pointer_value);

//void	print_x(t_printf *pr);
//void	x_append_buffer(t_printf *pr, char s[]);


typedef void ft_print_functions(t_printf *pr);

static ft_print_functions *ft_dispatch_table[] =
{
	collect_c,
	collect_s,
	collect_p,
	collect_d,
	collect_d,
	collect_o,
	collect_u,
	collect_x,
	collect_x,
	collect_f,
	collect_b,
	collect_percent
};

int		ft_printf_driver(va_list args, const char *str);
int		ft_printf(const char *str, ...);

#endif
