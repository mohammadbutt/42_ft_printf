/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/10 20:58:35 by mbutt            ###   ########.fr       */
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
	if(pr->string[pr->i] == '#')
		return (pr->flag.hash = true);
	else if(pr->string[pr->i] == '0')
		return(pr->flag.zero = true);
	else if(pr->string[pr->i] == '-')
		return (pr->flag.minus = true);
	else if(pr->string[pr->i] == '+')
		return (pr->flag.plus = true);
	else if(pr->string[pr->i] == ' ')
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
	if(ft_isdigit(pr->string[pr->i]) == 1)
	{
		pr->width_field = ft_atoi(&pr->string[pr->i]);
		while(ft_isdigit(pr->string[pr->i]) == 1)	
			pr->i++;
	}
	else if(pr->string[pr->i] == '*')
	{
		pr->width_field = va_arg(pr->arguments, int);
		pr->i++;
	}
}

void collect_precision(t_printf *pr)
{
	int current_i;
	int next_i;
	
	current_i = pr->i;
	next_i = pr->i + 1;
	if(pr->string[current_i] == '.' && ft_isdigit(pr->string[next_i]) == 1)
	{
		pr->i++;
		pr->precision_field = ft_atoi(&pr->string[pr->i]);
		while(ft_isdigit(pr->string[pr->i]) == 1)
			pr->i++;
	}
	else if(pr->string[current_i] == '.' && pr->string[next_i] == '*')
	{
		pr->precision_field = va_arg(pr->arguments, int);
		pr->i = pr->i + 2;
	}
	else if(pr->string[current_i] == '.' && ft_isdigit(pr->string[next_i]) != 1)
	{
		pr->i++;
		pr->precision_field = 0;
	}
}

void collect_length(t_printf *pr)
{
	char current;
	char next;

	current = pr->string[pr->i];
	next = pr->string[pr->i + 1];
	if((current == 'h' && next == 'h') || (current == 'l' && next == 'l'))
	{
		if(current == 'h' && next == 'h')
			pr->length.hh = true;
		else if(current == 'l' && next == 'l')
			pr->length.ll = true;
		pr->i = pr->i + 2;
	}	
	else if(current == 'h' || current == 'l' || current == 'L')
	{
		if(current == 'h')
			pr->length.h = true;
		else if(current == 'l')
			pr->length.l = true;
		else if(current == 'L')
			pr->length.L = true;
		pr->i++;
	}
}

/*
** Function collect_type_field finds the index of the conversion symbols.
** Conversion symbols are: "cspdiouxXf%" stored in macro FT_VALID_TYPE
** When the conversion symbol is found it's index + 1 is stored in type_field
** which can be used for dispatch table later.
** 
** If type_field is equal to 1 that would represent 'c'.
** If type_field is equal to 2 that would represent 's'.
** If type_field is equal to 3 that would represetnt 'p'. and so on.
** 
** If the conversion symbol is not found then the type_field will remain 0.
** simpler way to understand the below while loop:
**
**	while(FT_VALID_TYPE[j])
**	{
**		if(FT_VALID_TYPE[j] == pr->string[pr->i])
**		{
**			pr->type_field = j + 1;
**			return;
**		}
**		j++;
**	}
*/

void collect_type_field(t_printf *pr)
{
	char *str;
	char c;
	int j;

	j = 0;
	str = FT_VALID_TYPE;
	c = pr->string[pr->i];
	while(str[j])
	{
		if(str[j] == c)
		{
			pr->type_field = j + 1;
			return;
		}
		j++;
	}
}

void start_collecting(t_printf *pr)
{
	while(collect_flags(pr) != -1)
		pr->i++;
	
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
		pr->buffer[pr->buffer_i++] = pr->string[pr->i];
	}
	else if(pr->flag.minus == true)
	{
		pr->buffer[pr->buffer_i++] = pr->string[pr->i];
		append_to_buffer_loop(pr, repeat, " ");
	}
}


/*
** In field parameter we can pass in width_field or precision_field.
*/

int ft_pad(int field, int string_length)
{
	int repeat;

	repeat = 0;
	repeat = ft_abs(field) - ft_abs(string_length);
	if(repeat <= 0)
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
** NOTE: Since we dont know how long a string will be that is entered by the
** user, 1 megabyte of memory is allocated which is equal to 1,048,576.
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
	repeat = ft_pad(pr->width_field, ft_strlen(str));
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

/*
** p type_field gives a number which goes over int max range of 2147483647, but
** it is upto 10 digits long. Because the pointer number cannot be stored in an
** int or int32_t, we use int_fast64_t which uses 8 bytes or 64 bits and has
** enough range to house the pointer value that is generated.
** 
** When the pointer is converted to a hexadecimal value, it can be  upto
** 11 characters long + 1 for '\0', so allocating 12 bytes of memory would be
** sufficient, but 16 bytes of memory is allocated to stay consistent with the
** power of 2. Since memory is tied to cpu having a power of 2 requires less
** logic and computational power.
*/

void print_p(t_printf *pr)
{
	uint_fast64_t pointer_value;
	char str[32];
	char temp_str1[32];
	int re_width;
	int re_precision;

	pointer_value = 0;
	pointer_value = (uint_fast64_t)va_arg(pr->arguments, void *);
	ft_itoa_base(pointer_value, FT_HEX, temp_str1);
	re_width = ft_pad(pr->width_field, ft_strlen(temp_str1) + 2);
	re_precision = ft_pad(pr->precision_field, ft_strlen(temp_str1));
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
**int_fast64_t determines what data type is the in the given argument.
** Type casts to 'char' for 'hh'. Type casts to 'short' for 'h'.
*/

int_fast64_t length_field_d(t_printf *pr)
{
	int_fast64_t num;

	num = 0;
	if(pr->length.hh == true)
		num = (char) va_arg(pr->arguments, int);
	else if(pr->length.h == true)
		num = (short) va_arg(pr->arguments, int);
	else if(pr->length.l == true)
		num = va_arg(pr->arguments, long);
	else if(pr->length.ll == true)
		num = va_arg(pr->arguments, long long);
	else
		num = va_arg(pr->arguments, int);
	return(num);
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
	if(num == SHRT_MIN)
		ft_strcpy(temp_str, FT_SHORT_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return(temp_str);
}

char *ft_itoa_min_l(int_fast64_t num, char temp_str[])
{
	if(num == LONG_MIN)
		ft_strcpy(temp_str, FT_LONG_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return(temp_str);
}

char *ft_itoa_min_ll(int_fast64_t num, char temp_str[])
{
	if(num == LLONG_MIN)
		ft_strcpy(temp_str, FT_LLONG_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return(temp_str);
}

char *ft_itoa_min_int(int num, char temp_str[])
{
	if(num == INT_MIN)
		ft_strcpy(temp_str, FT_INT_STR);
	else
	{
		num = ft_abs(num);
		ft_itoa_base(num, FT_DECIMAL, temp_str);
	}
	return(temp_str);
}

char *ft_itoa_min(t_printf *pr, int_fast64_t num, char temp_str[])
{
	if(pr->length.hh == true)
		ft_itoa_min_hh(num, temp_str);
	else if(pr->length.h == true)
		ft_itoa_min_h(num, temp_str);
	else if(pr->length.l == true)
		ft_itoa_min_l(num, temp_str);
	else if(pr->length.ll == true)
		ft_itoa_min_ll(num, temp_str);
//	else if(pr->length.L == true)
//		ft_itoa_min_L(num, temp_str);
	else
		ft_itoa_min_int(num, temp_str);

	return(temp_str);
}


void ft_bzero_buffers(char str[], char temp_str[])
{
//	ft_bzero_no_len(str);
//	ft_bzero_no_len(temp_str);
	ft_bzero(str, ft_strlen(str));
	ft_bzero(temp_str, ft_strlen(temp_str));
}


/*
** s = str, t_s = temp_str
*/

void	d_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
	pr->var.precision = ft_pad(pr->precision_field, len);
	if(s[0] == '-')
		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision +1);
	else
		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
	if(pr->flag.plus == true || pr->flag.space == true)
		if(pr->var.width > 0 && s[0] != '-')
			pr->var.width--;
	if(pr->flag.zero == true && pr->var.width >= 0)
		while(pr->var.width--)
			ft_strcat(s, "0");
	else if(pr->flag.zero == false && pr->flag.minus == false)
		append_to_buffer_loop(pr, pr->var.width, " ");
	else if(pr->flag.minus == true)
		while(pr->var.width--)
			ft_strcat(t_s, " ");
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
			ft_strcat(s, "0");
	ft_strcat(s, t_s);
	append_to_buffer(pr, s);
}

/*
** n = num or number, s = str, t_s = temp_str
*/

/*
** For d type_field, 'll' length_field can print a 19 digits number with a range
** from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
** This would require 21 bytes of memory to account for negative sign and '\0'
** null termination, but 32 bytes are allocated to stay consistent with power of
** 2.
** Since 'll' is the biggest length_field for d type_field, all other
** length fields 'hh','h', 'l' will be safely covered are stored with 32 bytes.
**
** Note: 'l' long and 'll' long long has the same value range.
** .0 means there's 0 precision_field, which is a valid precision .1 means
** there's 1 precision_field, which is also a valid precision. This is why
** precision_field is initialized to -1 which would means precision was not
** invoked.
** If there is precision and the precision value is equal to 0 or greater than
** 0, it would cancel out the zero flag and make it false.
** 
** precision is stored first and then width is calculated. precision over width.
** Precision does not count the negative sign in the length of the number:
** printf("|%.5hhd|\n", -128) will give output of |-00128|
** printf("|%.5hhd|\n",  127) will give output of |00127|
**
** Width counts the negative sign in the length of the number:
** printf("|%5hhd|\n", -128) will give output of | -128|
** printf("|%5hhd|\n",  127) will give output of |  127|
*/

void print_d(t_printf *pr)
{
	int_fast64_t n;
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];
	
	ft_bzero_buffers(s, t_s);
	var_to_zero(&n, &pr->var.precision, &pr->var.width, &pr->var.width);
	n = length_field_d(pr);
	if(n < 0)
	{
		ft_strcpy(s, "-");
		ft_itoa_min(pr, n, t_s);
	}
	else
	{
		if(pr->flag.plus == true)
			ft_strcpy(s, "+");
		else if(pr->flag.space == true)
			ft_strcpy(s, " ");
		ft_itoa_base(n, FT_DECIMAL, t_s);
	}
	(pr->precision_field != -1) && (pr->flag.zero = false);
	(pr->precision_field == 0 && n == 0) && (ft_strcpy(t_s, NULL));
	d_append_buffer(pr, s, t_s);
}


/*
** Function length_field_uoxX determines what data type is in the given argument.
** Type casts to 'unsigned char' for 'hh'.
** Type casts to 'unsigned short' for 'h'.
*/

uint_fast64_t length_field_uoxX(t_printf *pr)
{
	uint_fast64_t num;

	num = 0;
	if(pr->length.hh == true)
		num = (unsigned char) va_arg(pr->arguments, unsigned int);
	else if(pr->length.h == true)
		num = (unsigned short) va_arg(pr->arguments, unsigned int);
	else if(pr->length.l == true)
		num = va_arg(pr->arguments, unsigned long);
	else if(pr->length.ll == true)
		num = va_arg(pr->arguments, unsigned long long);
	else
		num = va_arg(pr->arguments, unsigned int);
	return(num);
}

void	u_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
	pr->var.precision = ft_pad(pr->precision_field, len);	
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
	if(pr->flag.plus == true || pr->flag.space == true)
		if(pr->var.width > 0)	
			pr->var.width--;
	if(pr->flag.zero == true && pr->var.width >= 0)
		while(pr->var.width--)
			ft_strcat(s, "0");
	else if(pr->flag.zero == false && pr->flag.minus == false)
		append_to_buffer_loop(pr, pr->var.width, " ");
	else if(pr->flag.minus == true)
		while(pr->var.width--)
			ft_strcat(t_s, " ");
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
			ft_strcat(s, "0");
	ft_strcat(s, t_s);
	append_to_buffer(pr, s);
}


void print_u(t_printf *pr)
{
	uint_fast64_t n;
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];
	
	ft_bzero_buffers(s, t_s);
	ft_bzero_no_len(&pr->var);
	n = 0;
	n = length_field_uoxX(pr);
	if(pr->flag.plus == true)
		ft_strcpy(s, "+");
	else if(pr->flag.space == true)
		ft_strcpy(s, " ");
	ft_itoa_base_u(n, FT_DECIMAL, t_s);
	(pr->precision_field != -1) && (pr->flag.zero = false);
	(pr->precision_field == 0 && n == 0) && (ft_strcpy(t_s, NULL));
	u_append_buffer(pr, s, t_s);
}

void	o_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
//	if(pr->flag.hash == true && pr->precision_field >= 0) // Commenting

	if(s[0] == '0') // Works
		pr->var.precision = ft_pad(pr->precision_field, len + 1);
	else
		pr->var.precision = ft_pad(pr->precision_field, len);
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
	if(pr->flag.plus == true || pr->flag.space == true || pr->flag.hash == true)
		if(pr->var.width > 0)	
			pr->var.width--;
	if( pr->flag.zero == true && pr->var.width >= 0)
		while(pr->var.width--)
			ft_strcat(s, "0");
	else if(pr->flag.zero == false && pr->flag.minus == false)
		append_to_buffer_loop(pr, pr->var.width, " ");
	else if(pr->flag.minus == true)
		while(pr->var.width--)
			ft_strcat(t_s, " ");
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
			ft_strcat(s, "0");
	ft_strcat(s, t_s);
	append_to_buffer(pr, s);
}

void check_flags_for_o(t_printf *pr, char s[])
{
	if(pr->flag.hash == true)
		ft_strcpy(s, "0");
	else if(pr->flag.space == true)
		ft_strcpy(s, " ");
}

void print_o(t_printf *pr)
{
	uint_fast64_t n;
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];
	
	ft_bzero_buffers(s, t_s);
	ft_bzero_no_len(&pr->var);
	n = 0;
	n = length_field_uoxX(pr);
	check_flags_for_o(pr, s);
	ft_itoa_base_u(n, FT_OCTAL, t_s);
	if(t_s[0] == '0' && s[0] == '0' && pr->precision_field == -1)
		(pr->flag.zero == false) && (ft_strcpy(s, " "));
	if(s[0] == ' ' && t_s[0] == '0' && pr->flag.minus == true)
		ft_swap(&s[0], &t_s[0]);
	else if(n == 0 && pr->width_field == 0 && pr->precision_field == -1)
		ft_strcpy(s, NULL);
	if(n == 0 && pr->width_field > 1 && pr->flag.zero == true)
		(pr->flag.hash == true) && (ft_strcpy(s, "0"));
	(pr->precision_field != -1) && (pr->flag.zero = false);
	(pr->precision_field == 0 && n == 0) && (ft_strcpy(t_s, NULL));
	o_append_buffer(pr, s, t_s);
}

/*
void x_append_buffer(t_printf *pr, char str[])//, int re_width, int re_precision)
{
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == false)
//		if(pr->flag.hash == false)
		{
			append_to_buffer_loop(pr, pr->var.width, " ");
			if(pr->flag.hash == true)
				append_to_buffer(pr, "0x");
		}
//		if(pr->precision_field > 0 && re_precision > 0)
		if(pr->precision_field > 0 && pr->var.precision > 0)	
			append_to_buffer_loop(pr, pr->var.precision, "0");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.minus == true)
	{
		if(pr->flag.hash == true)
			append_to_buffer(pr, "0x");
		if(pr->precision_field > 0 && pr->var.precision > 0)
			append_to_buffer_loop(pr, pr->var.precision, "0");
		append_to_buffer(pr, str);
		append_to_buffer_loop(pr, pr->var.width, " ");
	}
}

void print_xX(t_printf *pr)
{
	uint_fast64_t n;
//	char str[16];
//	char temp_str1[16];
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];

	ft_bzero_buffers(s, t_s);
	ft_bzero_no_len(&pr->var);
	n = 0;
	n = length_field_uoxX(pr);
	
	ft_hex(n, 'x', t_s);
	if(pr->flag.hash == true)
		pr->var.width = ft_pad(pr->width_field, ft_strlen(t_s) + 2);
	else
		pr->var.width = ft_pad(pr->width_field, ft_strlen(t_s));
	pr->var.precision = ft_pad(pr->precision_field, ft_strlen(t_s));
//	if(pr->flag.zero == true && pr->flag.minus == false)
	if(pr->flag.hash == true && pr->flag.minus == false)
	{
		append_to_buffer(pr, "0x");
		append_to_buffer_loop(pr, pr->var.width, "0");
	}
	if(n == 0 && pr->precision_field != 0)
		ft_strcpy(s, "0");
	else if(n == 0 && pr->precision_field == 0)
		ft_strcpy(s, NULL);
	else if(pr->precision_field != 0)
		ft_strcpy(s, t_s);
	x_append_buffer(pr, s);//, re_width, re_precision);
}
*/

/*
void print_xX_append(t_printf *pr, char *str, int re_width, int re_precision, uint64_t pointer_value)
{
	if(pr->flag.minus == false)
	{
//		if(pointer_value == 0 && pr->flag.zero == false) // Added
//			append_to_buffer_loop(pr, re_width, " ");   //  Added
		if(pr->flag.zero == false)
		{
//			append_to_buffer_loop(pr, re_width, " "); // commenting
//			append_to_buffer(pr, "0x");
			append_to_buffer(pr, "2b");
		}
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.minus == true)
	{
//		append_to_buffer(pr, "0x");
		if(pr->flag.hash == true)        // Added
			append_to_buffer(pr, "3c");  // Added
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
		append_to_buffer_loop(pr, re_width, " ");
	}
	pointer_value++;
	pointer_value--;
}
*/
/*
void print_xX(t_printf *pr)
{
	uint_fast64_t pointer_value;
	char str[16];
	char temp_str1[16];
	int re_width;
	int re_precision;

//	pointer_value = (int_fast64_t)va_arg(pr->arguments, void *);
	pointer_value = length_field_uoxX(pr);
//	ft_itoa_base(pointer_value, FT_HEX, temp_str1);
	ft_hex(pointer_value, 'x', temp_str1);
	re_width = 0;
	if(pr->flag.hash == true) // Added
		re_width = ft_pad(pr->width_field, ft_strlen(temp_str1) + 2);
	else // Added
		re_width = ft_pad(pr->width_field, ft_strlen(temp_str1)); // Added
	re_precision = ft_pad(pr->precision_field, ft_strlen(temp_str1));
//	if(pr->flag.zero == true && pr->flag.minus == false) // commenting
	if(pr->flag.minus == false && pointer_value == 0) // Added
	{
//		append_to_buffer(pr, "0x");
		if(pr->flag.hash == true)				// Added
			append_to_buffer(pr, "1a");			// Added
		append_to_buffer_loop(pr, re_width, "0");
	}
	if(pointer_value == 0 && pr->precision_field != 0)
		ft_strcpy(str, "0");
	else if(pointer_value == 0 && pr->precision_field == 0)
		ft_strcpy(str, NULL);
	else if(pr->precision_field != 0)
		ft_strcpy(str, temp_str1);
	print_xX_append(pr, str, re_width, re_precision, pointer_value);
}
*/
/*
void print_xX(t_printf *pr)
{
	uint_fast64_t pointer_value;
	char str[16];
	char temp_str1[16];
	int re_width;
	int re_precision;
	int len;

	pointer_value = length_field_uoxX(pr);
	ft_hex(pointer_value, 'x', temp_str1);
	len = ft_strlen(temp_str1);
	if(pr->flag.hash == true && pointer_value != 0)
		re_precision = ft_pad(pr->precision_field, len + 2);
	else
		re_precision = ft_pad(pr->precision_field, len);
	re_width = ft_pad(pr->width_field, len + re_precision);

	
//	if(pr->flag.hash == true && pointer_value != 0)
//		re_width = ft_pad(pr->width_field, ft_strlen(temp_str1) + 2);
//	else
//		re_width = ft_pad(pr->width_field, ft_strlen(temp_str1));
//	re_precision = ft_pad(pr->precision_field, ft_strlen(temp_str1));

	if(pr->flag.zero == true && pr->flag.minus == false)
	{
		if(pr->flag.hash == true && pointer_value != 0)
			append_to_buffer(pr, "0x");
		append_to_buffer_loop(pr, re_width, "0");
	}
	if(pointer_value == 0 && pr->precision_field != -1)
		ft_strcpy(str, "0");
	else if(pointer_value == 0 && pr->precision_field == -1)
		ft_strcpy(str, NULL);
	else
		ft_strcpy(str, temp_str1);
//	else if(pr->precision_field != 0)
//		ft_strcpy(str, temp_str1);
	if(pr->flag.minus == false)
	{
		if(pr->flag.zero == false)
		{
			append_to_buffer_loop(pr, re_width, "a"); // space
			if(pr->flag.hash == true && pointer_value != 0)
				append_to_buffer(pr, "0x");
		}
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.minus == true)
	{
		if(pr->flag.hash == true && pointer_value != 0)
			append_to_buffer(pr, "0x");
		if(pr->precision_field > 0 && re_precision > 0)
			append_to_buffer_loop(pr, re_precision, "0");
		append_to_buffer(pr, str);
		append_to_buffer_loop(pr, re_width, "b"); //space
	}

}
*/

void check_flags_for_x(t_printf *pr, char s[], uint_fast64_t n)
{
	if(pr->flag.hash == true && n != 0 && pr->type_field == 8)
		ft_strcpy(s, "0x");
	else if (pr->flag.hash == true && n != 0 && pr->type_field == 9)
		ft_strcpy(s, "0X");
}

void width_N_precision_N(t_printf *pr, uint_fast64_t n)
{
	char str[32];
	char str_hex[32];
	
	ft_bzero_buffers(str, str_hex);
	ft_bzero_no_len(&pr->var);
	if(pr->type_field == 8)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 9)
		ft_hex(n, 'X', str);
	check_flags_for_x(pr, str_hex, n);
	ft_strcat(str_hex, str);
	append_to_buffer(pr, str_hex);
}

void width_N_precision_Y(t_printf *pr, uint_fast64_t n)

{
	char str[pr->precision_field + 32];
	char str_hex[pr->precision_field + 32];

	ft_bzero_buffers(str, str_hex);
	ft_bzero_no_len(&pr->var);
	if(pr->type_field == 8)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 9)
		ft_hex(n, 'X', str);
	check_flags_for_x(pr, str_hex, n);
	if(n == 0 && pr->precision_field == 0)
	{
		ft_strcpy(str, NULL);
		append_to_buffer(pr, str);
		return;
	}
	pr->var.precision = ft_pad(pr->precision_field, ft_strlen(str));
	if(pr->flag.hash == false)
		append_to_buffer_loop(pr, pr->var.precision, "0");
	else if(pr->flag.hash == true)
		ft_strcat_loop(str_hex, pr->var.precision, "0");
	ft_strcat(str_hex, str);
	append_to_buffer(pr, str_hex);
}

void width_Y_precision_N2(t_printf *pr, char str[], char str_hex[])
{
	if(pr->flag.hash == false)
	{
		if(pr->flag.zero == false)
			append_to_buffer_loop(pr, pr->var.width, " ");
		else if(pr->flag.zero == true)
			append_to_buffer_loop(pr, pr->var.width, "0");
		append_to_buffer(pr, str);
	}
	else if(pr->flag.hash == true)
	{
		if(pr->flag.zero == false)
			append_to_buffer_loop(pr, pr->var.width, " ");
		else if(pr->flag.zero == true)
			ft_strcat_loop(str_hex, pr->var.width, "0");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
	}
}

void width_Y_precision_N(t_printf *pr, uint_fast64_t n)

{
	char str[pr->width_field + 32];
	char str_hex[pr->width_field + 32];
	int total_length;

	ft_bzero_buffers(str, str_hex);
	ft_bzero_no_len(&pr->var);
	if(pr->type_field == 8)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 9)
		ft_hex(n, 'X', str);
	check_flags_for_x(pr, str_hex, n);
	total_length = ft_strlen(str) + ft_strlen(str_hex);
	pr->var.width = ft_pad(pr->width_field, total_length);
	if(pr->flag.minus == true)
	{
		ft_strcat_loop(str, pr->var.width, " ");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
		return;
	}
	else if(pr->flag.minus == false)
		width_Y_precision_N2(pr, str, str_hex);
}

void width_Y_precision_Y2(t_printf *pr, char str[], char str_hex[])
{
	if(pr->flag.minus == true)
	{
		ft_strcat_loop(str_hex, pr->var.precision, "0");
		ft_strcat_loop(str, pr->var.width, " ");
		ft_strcat(str_hex, str);
		append_to_buffer(pr, str_hex);
	}
	else if(pr->flag.minus == false)
	{
		append_to_buffer_loop(pr, pr->var.width, " ");
		if(pr->flag.hash == false)
		{
			append_to_buffer_loop(pr, pr->var.precision, "0");
			append_to_buffer(pr, str);
		}
		else if(pr->flag.hash == true)
		{
			ft_strcat_loop(str_hex, pr->var.precision, "0");
			ft_strcat(str_hex, str);
			append_to_buffer(pr, str_hex);
		}
	}
}

void width_Y_precision_Y(t_printf *pr, uint_fast64_t n)
{
	char str[pr->width_field + pr->precision_field + 32];
	char str_hex[pr->width_field + pr->precision_field + 32];
	int l_s;
	int l_s_h;

	ft_bzero_buffers(str, str_hex);
	ft_bzero_no_len(&pr->var);
	(pr->type_field == 8) && (ft_hex(n, 'x', str));
	(pr->type_field == 9) && (ft_hex(n, 'X', str));
	check_flags_for_x(pr, str_hex, n);
	l_s_h = ft_strlen(str_hex);
	l_s = ft_strlen(str);
	(n == 0 && pr->precision_field == 0) && (l_s = 0);
	pr->var.precision = ft_pad(pr->precision_field, l_s);	
	pr->var.width = ft_pad(pr->width_field, l_s + l_s_h + pr->var.precision);
	if(n == 0 && pr->precision_field == 0)
	{
		ft_strcpy(str, NULL);
		ft_strcat_loop(str, pr->var.width, " ");
		append_to_buffer(pr, str);
		return;
	}
	width_Y_precision_Y2(pr, str, str_hex);
}

void print_xX(t_printf *pr)
{
	uint_fast64_t n;

	n = 0;
	n = length_field_uoxX(pr);
	if(pr->width_field == 0 && pr->precision_field == -1)
		width_N_precision_N(pr, n);
	else if(pr->width_field == 0 && pr->precision_field != -1)
		width_N_precision_Y(pr, n);
	else if(pr->width_field != 0 && pr->precision_field == -1)
		width_Y_precision_N(pr, n);
	else if(pr->width_field != 0 && pr->precision_field != -1)
		width_Y_precision_Y(pr, n);
}

void f_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
	pr->var.precision = ft_pad(pr->precision_field, len);
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
/*
// Commenting
	if(pr->flag.plus == true || pr->flag.space == true)
		if(pr->var.width > 0)// && t_s[0] != '-')
			pr->var.width--;
*/
	if(pr->flag.plus == true || pr->flag.space == true || s[0] == '-')
		if(pr->var.width > 0)
			pr->var.width--;
	if(pr->flag.zero == true && pr->var.width >= 0)
		while(pr->var.width--)
			ft_strcat(s, "0");
	else if(pr->flag.zero == false && pr->flag.minus == false)
		append_to_buffer_loop(pr, pr->var.width, " ");
	else if(pr->flag.minus == true)
		while(pr->var.width--)
			ft_strcat(t_s, " ");
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
			ft_strcat(s, "0");
	ft_strcat(s, t_s);
	append_to_buffer(pr, s);
}

void print_f(t_printf *pr)
{
//	double nbr;
	long double nbr;
	char s[pr->precision_field + pr->width_field + 64];
	char t_s[pr->precision_field + pr->width_field + 64];

	nbr = 0;
	ft_bzero_buffers(s, t_s);
	if(pr->length.L == true)
		nbr = va_arg(pr->arguments, long double);
	else if(pr->length.L == false)
		nbr = va_arg(pr->arguments, double);
	if(nbr < 0)
		ft_strcpy(s, "-");
	else if(nbr >= 0)
	{
		if(pr->flag.plus == true)
			ft_strcpy(s, "+");
		else if(pr->flag.space == true)
			ft_strcpy(s, " ");
	}
	ft_ftoa(nbr, t_s, pr->precision_field);
//	(pr->precision_field != -1) && (pr->flag.zero == false) Not applied to floats
//	(pr->precision_field == 0 && nbr == 0) && (ft_strcpy(t_s, "0"));
//	if(nbr == 0 && pr->precision_field >= 1)
//		ft_strcpy(t_s, "0.");
//	else if(nbr == 0)
//		ft_strcpy(t_s, "0");
//	(nbr == 0) && (ft_strcpy(t_s, "0"));
//	(nbr == 0) && (ft_strcpy(s, "0"));
	if(pr->precision_field == 0 && pr->flag.hash == true)
		ft_strcat(t_s, ".");
	f_append_buffer(pr, s, t_s); // Break function here;
}



/*
** 1 = c,  2 = s, 3 = p, 4 = d,  5 = i, 6 = o
** 7 = u, 8 = x, 9 = X, 10 = f, 11 = %
*/


void start_printing(t_printf *pr)
{
	if(pr->type_field == 1)
		print_c(pr);
	else if(pr->type_field == 2)
		print_s(pr);
	else if(pr->type_field == 3)
		print_p(pr);
	else if(pr->type_field == 4 || pr->type_field == 5)
		print_d(pr);
	else if(pr->type_field == 6)
		print_o(pr);
	else if(pr->type_field == 7)
		print_u(pr);
	else if(pr->type_field == 8)
		print_xX(pr);
	else if(pr->type_field == 9)
		print_xX(pr);
	else if(pr->type_field == 10)
		print_f(pr);
	else if(pr->type_field == 11)
		print_percent(pr);

//	ft_dispatch_table[pr->type_field](pr);
}


/*
void print_xX(t_printf *pr)
{
	uint_fast64_t n;
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];
	int len;

	n = 0;
	ft_bzero_buffers(s, t_s);
	ft_bzero_no_len(&pr->var);
	n = length_field_uoxX(pr);
	check_flags_for_x(pr, s, n);
	ft_hex(n, 'x', t_s);
	len = ft_strlen(t_s);

	if(pr->precision_field == 0 && n == 0)
		ft_strcpy(s, NULL); // commenting
	if(pr->precision_field == 0 && n == 0)
		ft_strcpy(t_s, NULL);
//		ft_strcpy(s, "");
//	else if(s[0] == '\0')
//		ft_strcpy(s, t_s);
//	else if(s[0] != '\0')
//		ft_strcat(s, t_s);


//	if(s[0] == '0' && s[1] == 'x') // commenting
	if(pr->flag.hash == true && n != 0) // Adding	
		pr->var.precision = ft_pad(pr->precision_field, len + 2);
	else
		pr->var.precision = ft_pad(pr->precision_field, len);
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);


//	pr->var.precision = ft_pad(pr->precision_field, len);
//	if(s[0] == '0' && s[1] == 'x')
//		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision + 2);
//	else
//		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);

	
//	if(s[0] == '0' && s[1] == 'x' && pr->flag.hash == true) // commenting
	if(pr->flag.hash == true && n != 0) // Adding
	{
		if(pr->var.width == 1)
			pr->var.width = pr->var.width - 1;
		else if(pr->var.width > 1)
			pr->var.width = pr->var.width - 2;
	}


// somewhat works -- Need to switch 0x , spacing alligns
	pr->var.precision = ft_pad(pr->precision_field, len);	
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
		{
			if(pr->flag.minus == true)
		//		ft_strcat(s, "0");// commenting
				ft_strcat(s, "0"); // "0"
			else if(pr->flag.minus == false)
			{
		//		ft_strcat(s, "0"); // commenting
				ft_strcat(s, "0"); // "0"
//				append_to_buffer(pr, "0");
//				ft_strcat(t_s, "0");
			}
		}
//	pr->var.precision = ft_pad(pr->precision_field, len);
	if(pr->flag.minus == false && pr->flag.zero == false)
	{
		if(pr->flag.hash == true && n != 0) // Adding	
			pr->var.precision = ft_pad(pr->precision_field, len + 2);
		else
			pr->var.precision = ft_pad(pr->precision_field, len);
		if(pr->flag.zero == true && pr->precision_field == -1)
			append_to_buffer_loop(pr, pr->var.width, "0"); // "0"
		else if(pr->var.width > ft_pad(pr->width_field, len + pr->var.precision))
		//	append_to_buffer_loop(pr, pr->var.width, " ");
			append_to_buffer_loop(pr, pr->var.width, "0"); // "0"
		else
			append_to_buffer_loop(pr, pr->var.width, " "); // " "
		if(pr->precision_field == 0 && n == 0)
			ft_strcpy(t_s, NULL); // NULL
	}
	else if(pr->flag.minus == false && pr->flag.zero == true)
	{
		if(pr->flag.hash == true && n != 0) // Adding	
			pr->var.precision = ft_pad(pr->precision_field, len + 2); // Adding
		else // Adding
			pr->var.precision = ft_pad(pr->precision_field, len); // Adding
		if(pr->flag.zero == true && pr->precision_field == -1)
			append_to_buffer_loop(pr, pr->var.width, "0"); // "0"
		else if(pr->var.width > ft_pad(pr->width_field, len + pr->var.precision))
//		if(pr->var.width > pr->var.precision)
			append_to_buffer_loop(pr, pr->var.width, "0"); // "0"
		else
		{
//			pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
			if(pr->flag.hash == true && n != 0) // Adding
			{
				if(pr->var.width == 1)
					pr->var.width = pr->var.width - 1;
				else if(pr->var.width > 1)
					pr->var.width = pr->var.width - 2;
			}
			append_to_buffer_loop(pr, pr->var.width, "-"); // " "
		}
	}
//	if(pr->flag.minus == false)
//	{
//		if(pr->precision_field == 0 && n == 0)
//		{
//			if(pr->width_field == 0)
//				ft_strcpy(t_s, NULL);
//			else if(pr->width_field > 0)
//				ft_strcpy(t_s, " ");
//		}
//		while(pr->var.width--)
//			ft_strcat(t_s, " ");
//		ft_strcat(s, t_s);
//	}
	else if(pr->flag.minus == true)
	{

// Somewhat works, need to modify a little
//		if(pr->precision_field == 0 && n == 0 && pr->var.width > 0)// > 0
//			ft_strcpy(t_s, " "); //" "
//		else if(pr->precision_field == 0 && n == 0 && pr->var.width == 0)
//			ft_strcpy(t_s, NULL); // NULL

		if(pr->precision_field == 0 && n == 0)// && pr->var.width == 0)
		{
			if(pr->width_field == 0)
				ft_strcpy(t_s, NULL);
			else if(pr->width_field > 0)
				ft_strcpy(t_s, " ");
		}
//		else if(pr->precision_field == 0 && n == 0 && pr->var.width > 0)
//			ft_strcpy(t_s, " ");

		while(pr->var.width--)
			ft_strcat(t_s, " "); // " "
		ft_strcat(s, t_s);
	}
	ft_hex(n, 'x', t_s);

	if(pr->precision_field == 0 && n == 0)
		ft_strcpy(t_s, NULL);
	if(pr->flag.minus == false)
		ft_strcat(s, t_s);



	append_to_buffer(pr, s);
}
*/

/*
// somewhat works
void print_xX(t_printf *pr)
{
	uint_fast64_t n;
	char s[pr->precision_field + pr->width_field + 32];
	char t_s[pr->precision_field + pr->width_field + 32];
	int len;

	n = 0;
	ft_bzero_buffers(s, t_s);
	ft_bzero_no_len(&pr->var);
	n = length_field_uoxX(pr);
	check_flags_for_x(pr, s, n); //commenting
	ft_hex(n, 'x', t_s);
	len = ft_strlen(t_s);

	if(pr->precision_field == 0 && n == 0)
		ft_strcpy(s, NULL);
	else if(s[0] == '\0')
		ft_strcpy(s, t_s);
	else if(s[0] != '\0')
		ft_strcat(s, t_s);


//	if(s[0] == '0' && s[1] == 'x') // commenting
	if(pr->flag.hash == true && n != 0) // Adding	
		pr->var.precision = ft_pad(pr->precision_field, len + 2);
	else
		pr->var.precision = ft_pad(pr->precision_field, len);
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);


//	pr->var.precision = ft_pad(pr->precision_field, len);
//	if(s[0] == '0' && s[1] == 'x')
//		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision + 2);
//	else
//		pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);

	
//	if(s[0] == '0' && s[1] == 'x' && pr->flag.hash == true) // commenting
	if(pr->flag.hash == true && n != 0) // Adding
	{
		if(pr->var.width == 1)
			pr->var.width = pr->var.width - 1;
		else if(pr->var.width > 1)
			pr->var.width = pr->var.width - 2;
	}


// somewhat works -- Need to switch 0x , spacing alligns
	pr->var.precision = ft_pad(pr->precision_field, len);	
	if(pr->var.precision >= 0)
		while(pr->var.precision--)
		{
			if(pr->flag.minus == true)
				ft_strcat(s, "0");
			else if(pr->flag.minus == false)
				append_to_buffer(pr, "0");
				ft_strcat(t_s, "0");
		}
	pr->var.precision = ft_pad(pr->precision_field, len);	
	if(pr->flag.minus == false)
		append_to_buffer_loop(pr, pr->var.width, " ");
	else if(pr->flag.minus == true)
	{
		ft_strcpy(t_s, NULL);
		while(pr->var.width--)
			ft_strcat(t_s, " ");
		ft_strcat(s, t_s);
	}
	append_to_buffer(pr, s);
}
*/

/*
** 1 = c,  2 = s, 3 = p, 4 = d,  5 = i, 6 = o
** 7 = u, 8 = x, 9 = X, 10 = f, 11 = %
*/
/*
void start_printing(t_printf *pr)
{
	if(pr->type_field == 1)
		print_c(pr);
	else if(pr->type_field == 2)
		print_s(pr);
	else if(pr->type_field == 3)
		print_p(pr);
	else if(pr->type_field == 4 || pr->type_field == 5)
		print_d(pr);
	else if(pr->type_field == 6)
		print_o(pr);
	else if(pr->type_field == 7)
		print_u(pr);
	else if(pr->type_field == 8)
		print_xX(pr);
	else if(pr->type_field == 9)
		print_xX(pr);
	else if(pr->type_field == 10)
		printf_f(pr);
	else if(pr->type_field == 11)
		print_percent(pr);

//	ft_dispatch_table[pr->type_field](pr);
}
*/
void start_parsing(t_printf *pr)
{
	pr->i++;
	initialize_flag_and_field_values(pr);
	if(pr->string[pr->i] == '\0')
		return;
	start_collecting(pr);
	start_printing(pr);
}

void initialize_printf_struct(t_printf *pr, const char *str)
{
	pr->string = str;
	pr->return_of_printf = 0;
	pr->i = 0;
	pr->buffer_i = 0;
}

int ft_printf_driver(va_list args, const char *str)
{
	t_printf pr; // print_struct	
	ft_bzero(&pr, sizeof(pr));
	va_copy(pr.arguments, args);
//	initialize_printf_struct(&pr, str);
	pr.string = str;
	while(pr.string[pr.i])
	{
		if(pr.string[pr.i] == '%')
		{
			start_parsing(&pr);
			if(pr.string[pr.i] == '\0')
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
			printf("\npr.string[i]:|%c|\n", pr.string[i]);
*/
		}
		else
			pr.buffer[pr.buffer_i++] = pr.string[pr.i];
		pr.i++;
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
