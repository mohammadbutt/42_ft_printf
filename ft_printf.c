/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/22 16:29:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

//void traverse_negative_sign

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
void initialize_flag_and_field_values(t_printf *pr)
{
	pr->width_field = 0;
	pr->precision_field = 0;
	pr->length_field = 0;
	pr->flag_hash = false;
	pr->flag_zero = false;
	pr->flag_minus = false;
	pr->flag_plus = false;
	pr->flag_space = false;
	pr->length_hh = false;
	pr->length_h = false;
	pr->length_l = false;
	pr->length_ll = false;
	pr->length_L = false;
	pr->type_field = 0;
}

/*
** Function collect_flags gets called in a while loop and it will run as long as
** the return value is not -1.
** Function will return -1 if one of the characters is a conversion symbols,
** which are cspdiouxX.
*/

int collect_flags(t_printf *pr, t_variables *var)
{
	if(pr->string[var->i] == '#')
		return (pr->flag_hash = true);
	else if(pr->string[var->i] == '0')
		return(pr->flag_zero = true);
	else if(pr->string[var->i] == '-')
		return (pr->flag_minus = true);
	else if(pr->string[var->i] == '+')
		return (pr->flag_plus = true);
	else if(pr->string[var->i] == ' ')
		return(pr->flag_space = true);
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
	if(pr->flag_plus == true)
		pr->flag_space = false;
	if(pr->flag_minus == true)
		pr->flag_zero = false;
}

/*
** Collect_width function collects width_field for each conversion
*/
void collect_width(t_printf *pr, t_variables *var)
{
	if(ft_isdigit(pr->string[var->i]) == 1)
	{
		pr->width_field = ft_atoi(&pr->string[var->i]);
		while(ft_isdigit(pr->string[var->i]) == 1)	
			var->i++;
	}
	else if(pr->string[var->i] == '*')
	{
		pr->width_field = va_arg(pr->arguments, int);
		var->i++;
	}
}

void collect_precision(t_printf *pr, t_variables *var)
{
	if(pr->string[var->i] == '.' && ft_isdigit(pr->string[var->i+1]) == 1)
	{
		var->i++;
		pr->precision_field = ft_atoi(&pr->string[var->i]);
		while(ft_isdigit(pr->string[var->i]) == 1)
			var->i++;
	}
	else if(pr->string[var->i] == '.' && pr->string[var->i+1] == '*')
	{
		var->i++;
		pr->precision_field = va_arg(pr->arguments, int);
		var->i++;
	}
}

void collect_length(t_printf *pr, t_variables *var)
{
	char c;
	char d;

//	if(!(pr->string[var->i]))
//		return ;
	c = pr->string[var->i];
	d = pr->string[var->i + 1];
	if((c == 'h' && d == 'h') || (c == 'l' && d == 'l'))
	{
		if(c == 'h' && d == 'h')
			pr->length_hh = true;
		else if(c == 'l' && d == 'l')
			pr->length_ll = true;
		var->i = var->i + 2;
	}
	else if(c == 'h' || c == 'l' || c == 'L')
	{
		if(c == 'h')
			pr->length_h = true;
		else if(c == 'l')
			pr->length_l = true;
		else if(c == 'L')
			pr->length_L = true;
		var->i++;
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

/*
void collect_type_field(t_printf *pr, t_variables, char *str, char c)
{
	int i;

	i = 0;
	if(str)
	{
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
}
*/


void collect_type_field(t_printf *pr, t_variables *var)
{
	char *str;
	char c;
	int i;

	i = 0;
//	if(!(pr->string[var->i]))
//		return ;
	str = FT_VALID_TYPE;
	c = pr->string[var->i];
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

void start_collecting(t_printf *pr, t_variables *var)
{
	while(collect_flags(pr, var) != -1) // commenting for a quick test
		var->i++;					    // commenting for a quick test
	
//	printf("0:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	cancel_flags(pr);

//	printf("1:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_width(pr, var);

//	printf("2:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_precision(pr, var);

//	printf("3:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_length(pr, var);

//	printf("4:pr->string[var->i]:|%c|\n", pr->string[var->i]);
	collect_type_field(pr, var);
//	printf("5:pr->string[var->i]:|%c|\n", pr->string[var->i]);

}

//void print_c(va_list args, t_printf *pr)
void print_c(t_printf *pr)
{
	int c;
	int repeat;

	c = va_arg(pr->arguments, int);
	repeat = 0;
/*	
	if(pr->width_field > 0)
		repeat = pr->width_field - 1;
	if(pr->flag_minus == false && pr->flag_zero == true)
		while(repeat--)
			write(1, "0", 1);
	else if(pr->flag_minus == false && pr->flag_zero == false)
		while(repeat--)
			write(1, " ", 1);
*/
	if(pr->width_field > 0)
		repeat = pr->width_field - 1;
	if(pr->flag_minus == false)
	{
		if(pr->flag_zero == true)
			while(repeat--)
				pr->return_of_printf += write(1, "0", 1);
		else if(pr->flag_zero == false)
			while(repeat--)
				pr->return_of_printf += write(1, " ", 1);
		pr->return_of_printf += write(1, &c, 1);
	}
	else if(pr->flag_minus == true)
	{
		pr->return_of_printf += write(1, &c, 1);
		while(repeat--)
			pr->return_of_printf += write(1, " ", 1);
	}
}

void start_printing(t_printf *pr)
{
	if(pr->type_field == 1)
		print_c(pr);
}

int ft_printf_driver(va_list args, const char *str)
{
	t_printf pr; // print_struct
	t_variables var;

	va_copy(pr.arguments, args);
	pr.return_of_printf = 0;
	pr.string = str;
	var.i = 0;
	while(pr.string[var.i])
	{
//		if(ps.string[i] == '%')
//		{
//			c = va_arg(args, int);
//			ft_putchar(c);
//		}

/*
		if(ps.string[var.i] == '%')
		{
			temp_i = var.i;
			conversion_value = determine_conversion(ps.string + var.i, &var);
			temp_i2 = var.i;
			var.i = temp_i;
			repeat = start_parsing(args, ps.string + var.i);
			print_on_screen(repeat, args, conversion_value);
			var.i = temp_i2;
		}
		else
			ft_putchar(ps.string[var.i]);
		var.i++;
*/
		if(pr.string[var.i] == '%')
		{
			initialize_flag_and_field_values(&pr);
			var.i++;
/*
			while(collect_flags(&pr, &var) != -1)
				var.i++;
			cancel_flags(&pr);
			collect_width(args, &pr, &var);
			collect_precision(args, &pr, &var);
			collect_length(&pr, &var);
			collect_type_field(&pr, &var);
*/
			if(pr.string[var.i] == '\0')
				return(pr.return_of_printf);
			start_collecting(&pr, &var);
			start_printing(&pr);


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
//			repeat = start_parsing(args, pr.string + var.i, &var);
//			conversion_value = determine_conversion(pr.string + var.i, &var);
//			print_on_screen(repeat, args, conversion_value);
		}
		else
			pr.return_of_printf += write(1, &pr.string[var.i], 1);
		var.i++;
	}
	va_end(pr.arguments);
	return(pr.return_of_printf);
//	return(0);
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
