/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 12:36:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** In field parameter width_field or precision_field will be passed in whichever
** one is being calculated. In string_length field, len of string is passed,
** along with precision field if the precision field has a effect on a type
** field.
**
** Return Value: If the string length is greater than precision or width, then
** 0 is returned which means there would be no padding.
*/

int ft_pad(int precision_or_width, int string_length)
{
	int padding;

	padding = 0;
	padding = ft_abs(precision_or_width) - ft_abs(string_length);
	if (padding <= 0)
		return (0);
	return (padding);
}

char *ft_itoa_min_hh(char num, char temp_str[])
{
	if(num == CHAR_MIN)
		ft_strcpy(temp_str, FT_CHAR_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return(temp_str);
}

char *ft_itoa_min_h(short num, char temp_str[])
{
	if (num == SHRT_MIN)
		ft_strcpy(temp_str, FT_SHORT_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return (temp_str);
}

char *ft_itoa_min_l(int_fast64_t num, char temp_str[])
{
	if (num == LONG_MIN)
		ft_strcpy(temp_str, FT_LONG_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return (temp_str);
}

char *ft_itoa_min_ll(int_fast64_t num, char temp_str[])
{
	if (num == LLONG_MIN)
		ft_strcpy(temp_str, FT_LLONG_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return (temp_str);
}

char *ft_itoa_min_int(int num, char temp_str[])
{
	if (num == INT_MIN)
		ft_strcpy(temp_str, FT_INT_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return (temp_str);
}

char *ft_itoa_min(t_printf *pr, int_fast64_t num, char temp_str[])
{
	if (pr->length.hh == true)
		ft_itoa_min_hh(num, temp_str);
	else if (pr->length.h == true)
		ft_itoa_min_h(num, temp_str);
	else if (pr->length.l == true)
		ft_itoa_min_l(num, temp_str);
	else if (pr->length.ll == true)
		ft_itoa_min_ll(num, temp_str);
	else
		ft_itoa_min_int(num, temp_str);

	return (temp_str);
}

void check_flags_for_x(t_printf *pr, char s[], uint_fast64_t n)
{
	if(pr->flag.hash == true && n != 0 && pr->type_field == 7)
		ft_strcpy(s, "0x");
	else if (pr->flag.hash == true && n != 0 && pr->type_field == 8)
		ft_strcpy(s, "0X");

}

void x_width_n_precision_n(t_printf *pr, uint_fast64_t n)
{
	char str[32];
	char str_hex[32];
	
	ft_bzero(str, 32);
	ft_bzero(str_hex, 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if (pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if (pr->type_field == 8)
		ft_hex(n, 'X', str);

	check_flags_for_x(pr, str_hex, n);
	ft_strcat(str_hex, str);
	append_to_buffer(pr, str_hex);
}

void x_width_n_precision_y(t_printf *pr, uint_fast64_t n)
{
	char str[ft_abs(pr->precision_field) + 32];
	char str_hex[ft_abs(pr->precision_field) + 32];

	ft_bzero(str, ft_abs(pr->precision_field) + 32);
	ft_bzero(str_hex, ft_abs(pr->precision_field) + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if (pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if (pr->type_field == 8)
		ft_hex(n, 'X', str);
	check_flags_for_x(pr, str_hex, n);
	if (n == 0 && pr->precision_field == 0)
	{
		ft_strcpy(str, NULL);
		append_to_buffer(pr, str);
		return ;
	}
	pr->var.precision = ft_pad(pr->precision_field, ft_strlen(str));
	if (pr->flag.hash == false)
		append_to_buffer_loop(pr, pr->var.precision, "0");
	else if (pr->flag.hash == true)
		ft_strcat_loop(str_hex, pr->var.precision, "0");
	ft_strcat(str_hex, str);
	append_to_buffer(pr, str_hex);
}

void x_width_y_precision_n2(t_printf *pr, char str[], char str_hex[])
{
	if (pr->flag.hash == false)
	{
		if (pr->flag.zero == false)
			append_to_buffer_loop(pr, pr->var.width, " ");
		else if (pr->flag.zero == true)
			append_to_buffer_loop(pr, pr->var.width, "0");
		append_to_buffer(pr, str);
	}
	else if (pr->flag.hash == true)
	{
		if (pr->flag.zero == false)
			append_to_buffer_loop(pr, pr->var.width, " ");
		else if (pr->flag.zero == true)
			ft_strcat_loop(str_hex, pr->var.width, "0");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
	}
}

void x_width_y_precision_n(t_printf *pr, uint_fast64_t n)
{
	char str[pr->width_field + 32];
	char str_hex[pr->width_field + 32];
	int total_length;

	ft_bzero(str, pr->width_field + 32);
	ft_bzero(str_hex, pr->width_field + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if (pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if (pr->type_field == 8)
		ft_hex(n, 'X', str);

	check_flags_for_x(pr, str_hex, n);
	total_length = ft_strlen(str) + ft_strlen(str_hex);
	pr->var.width = ft_pad(pr->width_field, total_length);
	if (pr->flag.minus == true)
	{
		ft_strcat_loop(str, pr->var.width, " ");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
		return ;
	}
	else if (pr->flag.minus == false)
		x_width_y_precision_n2(pr, str, str_hex);
}

void x_width_y_precision_y2(t_printf *pr, char str[], char str_hex[])

{
	if (pr->flag.minus == true)
	{
		ft_strcat_loop(str_hex, pr->var.precision, "0");
		ft_strcat_loop(str, pr->var.width, " ");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
	}
	else if (pr->flag.minus == false)
	{
		append_to_buffer_loop(pr, pr->var.width, " ");
		if (pr->flag.hash == false)
		{
			append_to_buffer_loop(pr, pr->var.precision, "0");
			append_to_buffer(pr, str);
		}
		else if (pr->flag.hash == true)
		{
			ft_strcat_loop(str_hex, pr->var.precision, "0");
			ft_strcat(str_hex, str);
			append_to_buffer(pr, str_hex);
		}
	}
}

void x_width_y_precision_y(t_printf *pr, uint_fast64_t n)
{
	char str[pr->width_field + ft_abs(pr->precision_field) + 32];
	char str_hex[pr->width_field + ft_abs(pr->precision_field) + 32];
	int l_s;
	int l_s_h;

	ft_bzero(str, pr->width_field + ft_abs(pr->precision_field) + 32);
	ft_bzero(str_hex, pr->width_field + ft_abs(pr->precision_field) + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	(pr->type_field == 7) && (ft_hex(n, 'x', str));
	(pr->type_field == 8) && (ft_hex(n, 'X', str));

	check_flags_for_x(pr, str_hex, n);
	l_s_h = ft_strlen(str_hex);
	l_s = ft_strlen(str);
	(n == 0 && pr->precision_field == 0) && (l_s = 0);
	pr->var.precision = ft_pad(pr->precision_field, l_s);	
	pr->var.width = ft_pad(pr->width_field, l_s + l_s_h + pr->var.precision);
	if (n == 0 && pr->precision_field == 0)
	{
		ft_strcpy(str, NULL);
		ft_strcat_loop(str, pr->var.width, " ");
		append_to_buffer(pr, str);
		return ;
	}
	x_width_y_precision_y2(pr, str, str_hex);
}

void collect_x(t_printf *pr)
{
	uint_fast64_t n;

	n = 0;
	n = length_field_uox(pr);
	if (pr->width_field == 0 && pr->precision_field == -1)
		x_width_n_precision_n(pr, n);
	else if (pr->width_field == 0 && pr->precision_field != -1)
		x_width_n_precision_y(pr, n);
	else if (pr->width_field != 0 && pr->precision_field == -1)
		x_width_y_precision_n(pr, n);
	else if (pr->width_field != 0 && pr->precision_field != -1)
		x_width_y_precision_y(pr, n);
}

int ft_printf_driver(va_list args, const char *str)
{
	t_printf pr;
	ft_bzero(&pr, sizeof(pr));
	va_copy(pr.arguments, args);
	pr.string = str;
	while (pr.string[pr.i])
	{
		if (pr.string[pr.i] == '%')
		{
			start_parsing(&pr);
			if (pr.string[pr.i] == '\0')
				return (write(1, pr.buffer, pr.buffer_i));
		}
		else
			pr.buffer[pr.buffer_i++] = pr.string[pr.i];
		pr.i++;
	}
	va_end(pr.arguments);
	return (write(1, pr.buffer, pr.buffer_i));
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int ft_printf_return;

	ft_printf_return = 0;
	va_start(args, str);
	ft_printf_return = ft_printf_driver(args, str);
	
	va_end(args);
	return (ft_printf_return);
}
