/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/27 20:51:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
int ft_conversion(const char c)
{
	if(c == 'c' || c == 's' || c == 'p')
		return(1);
	else if(c == 'd' || c == 'i' || c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return(1);
	else if(c == 'f')
		return(1);
	return(0);
}
*/
/*
int start_parsing(va_list args, const char *str)
{
	t_printf ps; // print_struct
	int i;
	int c;
	int repeat;

	va_copy(ps.arguments, args)
	i = 0;
	c = 0;
	repeat = 0;
	while(str[i] && ft_conversion(str[i]) == 0)
	{
		if(str[i] >= '1' && str[i] <= '9')
		{
			repeat = ft_atoi(&str[i]);
			repeat--;   // If there's 1 we should not print space, so we minus 1.
			while(repeat)
				write(1, " ", repeat--);
		}
		else if(str[i] == '-')
		{
			repeat = ft_abs(ft_atoi(&str[i]));
			repeat--;
			return(repeat);
		}
	}
	return(0);
}
*/

/*
** Function determine_conversion traverses through a string to check what value
** comes after the modulo. Function will traverse through the string to skip
** all the elements to get to one of the onversion values: "cspdiouxXf"
** If the string is "%3c", it will skip '%' and '3', and return 'c' and update
** the index of the string.
*/

/*
char determine_conversion(const char *str, t_variables *var)
{
	
	int i;

	i = 0;	
	while(str[i])
	{
		if(ft_conversion(str[i]) == 1)
			break ;
		i++;
	}
	var->i = var->i + i;
	return(str[i]);
}
*/
//void traverse_negative_sign

/*
int start_parsing(va_list args, const char *str, t_variables *var)
{
	t_printf ps;
	int i;
	int repeat;
	int return_value;

	i = 0;
	
	repeat = 0;
	return_value = 0;
	va_copy(ps.arguments, args);
	ps.string = str;
	while(ps.string[i] && ft_conversion(ps.string[i]) == 0)
	{
		if(ps.string[i] >= '1' && ps.string[i] <= '9')
			return(ft_atoi(&ps.string[i]) - 1);
		else if((ps.string[i] == '-') && (ft_isdigit1(ps.string[i + 1]) == 1))
			return(ft_atoi(&ps.string[i]) + 1);
		else if(ps.string[i] == '*')
		{
			return_value = va_arg(args, int);
			if(return_value > 0)
				return(return_value - 1);
			else if(return_value < 0)
				return(return_value + 1);
			return(0);
		}
		i++;
		var->i++;
	}
	return(0);
}
*/
/*
void print_c(va_list args, int repeat, const char conversion_value)
{
	t_printf ps;
	int c;

	c = 0;
	va_copy(ps.arguments, args);
	c = va_arg(args, int);
	if(repeat <=0 && conversion_value == 'c')
	{
		ft_putchar(c);
		repeat = ft_abs(repeat);
		print_spaces(repeat);
	}
	else if(repeat > 0 && conversion_value == 'c')
	{
		print_spaces(repeat);
		ft_putchar(c);
	}
}
*/

/*
void print_on_screen(int repeat, va_list args, const char conversion_value)
{
	t_printf ps;
	va_copy(ps.arguments, args);
	if(conversion_value == 'c')
		print_c(args, repeat, conversion_value);
}
*/

/*
** Function append_to_buffe works just like strcat, but it takes in the struct
** and source string to append.
** Destination string and index inside the struct are used to append the source
** to the end of the destination.
** RETURN VALUE: Concatenated destination string
*/

void	append_to_buffer(t_printf *pr, char *source)
{
	int i;

	i = 0;
	if(source)
		while(source[i])
			pr->buffer[pr->buffer_i++] = source[i++];
	pr->buffer[pr->buffer_i] = '\0';
}

/*
** Function append_to_buffer_in_loop will append the string or a character in a
** while loop as many times as the x_times value.
**
** Note: Uses ft_str_append function so the string, or character will be
** appended at the end of the buffer and buffer_index will be incremented
*/

void append_to_buffer_loop(t_printf *pr, int x_times, char *str)
{
	if(str[1] != '\0')
		while(x_times--)
			append_to_buffer(pr, str);
	else if(str[1] == '\0')
		while(x_times--)
			pr->buffer[pr->buffer_i++] = str[0];
}

void initialize_flag_and_field_values(t_printf *pr)
{
	pr->width_field = 0;
	pr->precision_field = -1;
	pr->length_field = 0;
	pr->type_field = 0;
	ft_bzero(&pr->flag, sizeof(pr->flag));
	ft_bzero(&pr->length, sizeof(pr->length));
}

/*
** Function collect_flags gets called in a while loop and it will run as long as
** the return value is not -1.
** Function will return -1 if the character is not '#' '0' '-' '+' ' '.
*/

int collect_flags(t_printf *pr)
{
	if(pr->string[pr->var.i] == '#')
		return (pr->flag.hash = true);
	else if(pr->string[pr->var.i] == '0')
		return(pr->flag.zero = true);
	else if(pr->string[pr->var.i] == '-')
		return (pr->flag.minus = true);
	else if(pr->string[pr->var.i] == '+')
		return (pr->flag.plus = true);
	else if(pr->string[pr->var.i] == ' ')
		return(pr->flag.space = true);
	return(-1);
}

/*
** Function cancel_flags cancels/ignores the below flags:
** 1. Flag ' ' is ignored when flag '+' is present. So when flag_plus is true,
** we set flag_space to false.
**
** 2. Flag '0' is ignored when flag '-' is present. So when flag_minus is true,
** we set flag_zero to false.
*/

void cancel_flags(t_printf *pr)
{
	if(pr->flag.plus == true)
		pr->flag.space = false;
	if(pr->flag.minus == true)
		pr->flag.zero = false;
}

/*
** Collect_width function collects width_field for each conversion
*/

void collect_width(t_printf *pr)
{
	if(ft_isdigit(pr->string[pr->var.i]) == 1)
	{
		pr->width_field = ft_atoi(&pr->string[pr->var.i]);
		while(ft_isdigit(pr->string[pr->var.i]) == 1)	
			pr->var.i++;
	}
	else if(pr->string[pr->var.i] == '*')
	{
		pr->width_field = va_arg(pr->arguments, int);
		pr->var.i++;
	}
}

void collect_precision(t_printf *pr)
{
	int current_i;
	int next_i;
	
	current_i = pr->var.i;
	next_i = pr->var.i + 1;
	if(pr->string[current_i] == '.' && ft_isdigit(pr->string[next_i]) == 1)
	{
		pr->var.i++;
		pr->precision_field = ft_atoi(&pr->string[pr->var.i]);
		while(ft_isdigit(pr->string[pr->var.i]) == 1)
			pr->var.i++;
	}
	else if(pr->string[current_i] == '.' && pr->string[next_i] == '*')
	{
		pr->precision_field = va_arg(pr->arguments, int);
		pr->var.i = pr->var.i + 2;
	}
	else if(pr->string[current_i] == '.' && ft_isdigit(pr->string[next_i]) != 1)
	{
		pr->var.i++;
		pr->precision_field = 0;
	}
}

void collect_length(t_printf *pr)
{
	char current;
	char next;

	current = pr->string[pr->var.i];
	next = pr->string[pr->var.i + 1];

	if((current == 'h' && next == 'h') || (current == 'l' && next == 'l'))
	{
		if(current == 'h' && next == 'h')
			pr->length.hh = true;
		else if(current == 'l' && next == 'l')
			pr->length.ll = true;
		pr->var.i = pr->var.i + 2;
	}
	else if(current == 'h' || current == 'l' || current == 'L')
	{
		if(current == 'h')
			pr->length.h = true;
		else if(current == 'l')
			pr->length.l = true;
		else if(current == 'L')
			pr->length.L = true;
		pr->var.i++;
	}
}

/*
** Function collect_type_field finds the index of the conversion symbols.
** Conversion symbols are: "cspdiouxXf%" stored in macro FT_VALID_TYPE
** When the conversion symbol is found it's index + 1 is stored in type_field
** to be used for dispatch table.
** 
** If type_field is equal to 1 that would represent 'c'.
** If type_field is equal to 2 that would represent 's'.
** If type_field is equal to 3 that would represetnt 'p'. and so on.
** 
** If the conversion symbol is not found then the type_field will remain 0.
*/

void collect_type_field(t_printf *pr)
{
	char *str;
	char c;
	int i;

	i = 0;
	str = FT_VALID_TYPE;
	c = pr->string[pr->var.i];
	while(str[i])
	{
		if(str[i] == c)
		{
			pr->type_field = i + 1;
			return;
		}
		i++;
	}
}

void start_collecting(t_printf *pr)
{
	while(collect_flags(pr) != -1)
		pr->var.i++;
	
//	printf("0:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	cancel_flags(pr);

//	printf("1:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_width(pr);

//	printf("2:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_precision(pr);

//	printf("3:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_length(pr);

//	printf("4:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_type_field(pr);
//	printf("5:pr->string[var->i]:|%c|\n", pr->string[var->i]);

}

void print_c(t_printf *pr)
{
	int c;
	int repeat;

	c = va_arg(pr->arguments, int);
	repeat = 0;
	if(pr->width_field > 0)
		repeat = pr->width_field - 1;
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == true)
			append_to_buffer_loop(pr, repeat, "0");
		else if(pr->flag.zero == false)
			append_to_buffer_loop(pr, repeat, " ");
		pr->buffer[pr->buffer_i++] = c;
	}
	else if(pr->flag.minus == true)
	{
		pr->buffer[pr->buffer_i++] = c;
		append_to_buffer_loop(pr, repeat, " ");
	}
}

void print_percent(t_printf *pr)
{
	int repeat;

	repeat = 0;

	if(pr->width_field > 0)
		repeat = pr->width_field - 1;
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == true)
			append_to_buffer_loop(pr, repeat, "0");
		else if(pr->flag.zero == false)
			append_to_buffer_loop(pr, repeat, " ");
		pr->buffer[pr->buffer_i++] = pr->string[pr->var.i];
	}
	else if(pr->flag.minus == true)
	{
		pr->buffer[pr->buffer_i++] = pr->string[pr->var.i];
		append_to_buffer_loop(pr, repeat, " ");
	}
}


/*
** In field parameter we can pass in width_field or precision_field.
*/

int find_padding(int field, int string_length)
{
	int repeat;

	repeat = 0;
	repeat = field - string_length;
	if(repeat < 0)
		return(0);
	return(repeat);
}


/*
** print_s_append_buffer looks if the minus flag is true or false.
** If the minus flag is false which means it is 0, then we will look at the zero
** flag.
** 1. If the zero flag is true then we will store '0' as many times as the
** repeat value onto the buffer. Repeat is also called pad/padding.
** 2. If the zero flag is false then then we will store ' ' space as many times
** as the repeat value onto the buffer.
** 3. Finally we will append the str that was previously stored using va_arg.
** 
** If the minus flag is true which means it is 1, we will do the following two
** things.
** 1. Append the string from str to buffer.
** 2. Then append ' ', space as any times as the repeat value, or the pad.
**
** Note: If the minus flag is true then the 0 zero flag is ignored.
*/

void print_s_append_buffer(t_printf *pr, char *str, int repeat)
{
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == true)
			append_to_buffer_loop(pr, repeat, "0");
		else if(pr->flag.zero == false)
			append_to_buffer_loop(pr, repeat, " ");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.minus == true)
	{
		append_to_buffer(pr, str);
		append_to_buffer_loop(pr, repeat, " ");
	}
}

/*
** print_s function does two things:
** 1. Looks at the precision_field value to determine how many characters will
** have to be appended so we store those in str variable.
** 2. Looks at the width_field to calculate the repeat value. This repeat value
** will be used to determine how much padding will be placed in the beginning
** or end of the string.
*/

void print_s(t_printf *pr)
{
	char *temp_s;
	char str[FT_ONE_MEGABYTE];
	int repeat;
	
	repeat = 0;
	temp_s = va_arg(pr->arguments, char *);
	if(temp_s == NULL)
		temp_s = "(null)";
	if (pr->precision_field > 0)
		ft_strncpy(str, temp_s, pr->precision_field);
	else if(pr->precision_field == -1)
		ft_strcpy(str, temp_s);
	else if(pr->precision_field == 0)
		(ft_strcpy(str, NULL));
	repeat = find_padding(pr->width_field, ft_strlen(str));
	print_s_append_buffer(pr, str, repeat);
}


void print_p_append(t_printf *pr, char *str, int re_width, int re_precision)
{
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == false)
		{
			append_to_buffer_loop(pr, re_width, " ");
			append_to_buffer(pr, "0x");
		}
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.minus == true)
	{
		append_to_buffer(pr, "0x");
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
		append_to_buffer_loop(pr, re_width, " ");
	}
}

void print_p(t_printf *pr)
{
	int_fast64_t pointer_value;
	char str[16];
	char temp_str1[16];
	int re_width;
	int re_precision;

	pointer_value = (int_fast64_t)va_arg(pr->arguments, void *);
	ft_itoa_base(pointer_value, FT_HEX, temp_str1);
	re_width = find_padding(pr->width_field, ft_strlen(temp_str1) + 2);
	re_precision = find_padding(pr->precision_field, ft_strlen(temp_str1));
	if(pr->flag.zero == true && pr->flag.minus == false)
	{
		append_to_buffer(pr, "0x");
		append_to_buffer_loop(pr, re_width, "0");
	}
	if(pointer_value == 0 && pr->precision_field != 0)
		ft_strcpy(str, "0");
	else if(pointer_value == 0 && pr->precision_field == 0)
		ft_strcpy(str, NULL);
	else if(pr->precision_field != 0)
		ft_strcpy(str, temp_str1);
	print_p_append(pr, str, re_width, re_precision);
}

/*
void print_d(t_printf *pr)
{
	int_fast64_t num;

	num = (int_fast64_t)va_arg(pr->arguments, int);
}
*/
void start_printing(t_printf *pr)
{
	if(pr->type_field == 1)
		print_c(pr);
	else if(pr->type_field == 2)
		print_s(pr);
	else if(pr->type_field == 3)
		print_p(pr);
//	else if(pr->type_field == 4)
//		print_d(pr);
	else if(pr->type_field == 11)
		print_percent(pr);

//	ft_dispatch_table[pr->type_field](pr);
}

void start_parsing(t_printf *pr)
{
	pr->var.i++;
	initialize_flag_and_field_values(pr);
	if(pr->string[pr->var.i] == '\0')
		return;
	start_collecting(pr);
	start_printing(pr);
}

void initialize_printf_struct(t_printf *pr, const char *str)
{
	pr->string = str;
	pr->return_of_printf = 0;
	pr->var.i = 0;
	pr->buffer_i = 0;
}

int ft_printf_driver(va_list args, const char *str)
{
	t_printf pr; // print_struct	
	ft_bzero(&pr, sizeof(pr));
	va_copy(pr.arguments, args);
//	initialize_printf_struct(&pr, str);
	pr.string = str;
	while(pr.string[pr.var.i])
	{
		if(pr.string[pr.var.i] == '%')
		{
			start_parsing(&pr);
			if(pr.string[pr.var.i] == '\0')
				return(write(1, pr.buffer, pr.buffer_i));
/*	
			printf("flag_hash:|%d|\n", pr.flag_hash);
			printf("flag_zero:|%d|\n", pr.flag_zero);
			printf("flag_minus:|%d|\n", pr.flag_minus);
			printf("flag_plus:|%d|\n", pr.flag_plus);
			printf("flag_space:|%d|\n", pr.flag_space);
			printf("width_field:|%d|\n", pr.width_field);
			printf("precision_field:|%d|\n", pr.precision_field);
			printf("h:|%d|\n", pr.length_h);
			printf("hh:|%d|\n", pr.length_hh);
			printf("l:|%d|\n", pr.length_l);
			printf("ll:|%d|\n", pr.length_ll);
			printf("L:|%d|\n", pr.length_L);
			printf("\ntype_field:|%d|\n", pr.type_field);
			printf("\npr.string[var.i]:|%c|\n", pr.string[var.i]);
*/
		}
		else
			pr.buffer[pr.buffer_i++] = pr.string[pr.var.i];
		pr.var.i++;
	}
	va_end(pr.arguments);
	return(write(1, pr.buffer, pr.buffer_i));
}

/*
** To do:
** 1. Parsing - Once you hit %, store the string until it hits conversion.
** Conversions: are "csp-diouxX-f"
*/

int ft_printf(const char *str, ...)
{
	va_list args;
	int ft_printf_return;

	ft_printf_return = 0;
	va_start(args, str);
	ft_printf_return = ft_printf_driver(args, str);
	
	va_end(args);
	return(ft_printf_return);
}

/*
//void simple_printf(const char *fmt, ...)
int	ft_printf(const char *str, ...)
{
	va_list args;
	int ft_printf_return;
	int i;
	int c;

	va_start(args, str);
	i = 0;
	c = 0;
	ft_printf_return = 0;  //For now it's fine, but we want to update this.

	while(str[i] != '\0')
	{
		if(str[i] == '%')
			start_parsing(args, str+i);
			//	start_parsing((char *)str+i, args);
//		if(fmt[i] == '%' && fmt[i+1] == 'c')
//		{
//			c = va_arg(args, int);
//			ft_putchar(c);
//		}
		i++;
	}
	va_end(args);
	return(ft_printf_return);
}
*/
/*	
	while(fmt[i] != '\0')
	{
		if(fmt[i] == '%' && fmt[i + 1] == 'c')
		{
			c = va_arg(args, int);
			ft_putchar(c);
		}
		if(fmt[i] != 'c' && fmt[i] != '%')
		{
			ft_putchar(fmt[i]);
		}
		i++;
	}
	va_end(args);
}
*/

/*
void simple_printf(const char *fmt, ...)
{
	va_list args;
	int i;
	int c;
	double d;
	char *s;

	va_start(args, fmt);
	i = 0;
	c = 0;
	d = 0;
	s = NULL;
	while(*fmt != '\0')
	{
		if(*fmt == 'd')
		{
			i = va_arg(args, int);
			printf("%d\n", i);
		}
		else if(*fmt == 'c')
		{
			c = va_arg(args, int);
			printf("%c\n", c);
		}
		else if(*fmt == 'f')
		{
			d = va_arg(args, double);
			printf("%f\n", d);
		}
		else if(*fmt == 's')
		{
			s = va_arg(args, char *);
			printf("%s\n", s);
		}
		++fmt;
	}
	va_end(args);
}
*/
