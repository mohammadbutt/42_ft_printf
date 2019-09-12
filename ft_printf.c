/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:54:07 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 20:54:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



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
** Conversion symbols are: "cspdiouxXfb%" stored in macro FT_VALID_TYPE
** When the conversion symbol is found it's index is stored in type_field
** which can be used for dispatch table later.
** 
** If type_field is equal to 0 that would represent 'c'.
** If type_field is equal to 1 that would represent 's'.
** If type_field is equal to 2 that would represetnt 'p'. and so on.
** 
** If the conversion symbol is not found then the type_field will remain 0.
** simpler way to understand the below while loop:
**
**	while(FT_VALID_TYPE[j])
**	{
**		if(FT_VALID_TYPE[j] == pr->string[pr->i])
**		{
**			pr->type_field = j;
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
			pr->type_field = j;
			return;
		}
		j++;
	}
}

void start_collecting_flags(t_printf *pr)
{
	while(collect_flags(pr) != -1)
		pr->i++;
	cancel_flags(pr);
	collect_width(pr);
	collect_precision(pr);
	collect_length(pr);
	collect_type_field(pr);
}

void collect_c(t_printf *pr)
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

void collect_percent(t_printf *pr)
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
	if(padding <= 0)
		return(0);
	return(padding);
}


/*
** s_append_buffer looks if the minus flag is true or false.
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

void s_append_buffer(t_printf *pr, char *str, int repeat)
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
** collect_s function does two things:
** 1. Looks at the precision_field value to determine how many characters will
** have to be appended so we store those in str variable.
** 2. Looks at the width_field to calculate the repeat value. This repeat value
** will be used to determine how much padding will be placed in the beginning
** or end of the string.
** NOTE: Since we dont know how long a string will be that is entered by the
** user, 1 megabyte of memory is allocated which is equal to 1,048,576.
*/

void collect_s(t_printf *pr)
{
	char *temp_s;
	char str[pr->width_field + ft_abs(pr->precision_field) + FT_ONE_MEGABYTE];
	int repeat;
	int width;
	int precision;
	
//	ft_bzero(str, pr->width_field); Commenting
	width = pr->width_field;
	precision = pr->precision_field;
	ft_bzero(str,width + precision + FT_ONE_MEGABYTE);
//	ft_bzero(str, pr->width_field + ft_abs(pr->precision_field) + FT_ONE_MEGABYTE)
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
	s_append_buffer(pr, str, repeat);
}

void p_append_buffer(t_printf *pr, char *str, int re_width, int re_precision)
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
** int or int32_t, int_fast64_t is used which uses 8 bytes or 64 bits and has
** enough range to store the pointer value that is generated.
** 
** When the pointer is converted to a hexadecimal value, it can be  upto
** 11 characters long + 1 for '\0', so allocating 12 bytes of memory would be
** sufficient, but 16 bytes of memory is allocated to stay consistent with the
** power of 2. Since memory is tied to cpu having a power of 2 requires less
** logic and computational power.
*/

void collect_p(t_printf *pr)
{
	uint_fast64_t pointer_value;
	char str[ft_abs(pr->precision_field) + pr->width_field + 32];
	char temp_str1[ft_abs(pr->precision_field) + pr->width_field + 32];
	int re_width;
	int re_precision;
	
//	ft_bzero_buffers(str, temp_str1);
	ft_bzero(str, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(temp_str1, ft_abs(pr->precision_field) + pr->width_field + 32);
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
	p_append_buffer(pr, str, re_width, re_precision);
}

/*
** length_field_d determines what data type is the in the given argument for d.
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
	else
		ft_itoa_min_int(num, temp_str);

	return(temp_str);
}


void ft_bzero_buffers(char str[], char temp_str[])
{
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

void collect_d(t_printf *pr)
{
	int_fast64_t n;
	char s[ft_abs(pr->precision_field) + pr->width_field + 32];
	char t_s[ft_abs(pr->precision_field) + pr->width_field + 32];
	
//	ft_bzero_buffers(s, t_s);
	ft_bzero(s, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(t_s, ft_abs(pr->precision_field) + pr->width_field + 32);
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
** Function length_field_uoxX determines what data type is in given argument.
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

void collect_u(t_printf *pr)
{
	uint_fast64_t n;
	char s[ft_abs(pr->precision_field) + pr->width_field + 32];
	char t_s[ft_abs(pr->precision_field) + pr->width_field + 32];
	
//	ft_bzero_buffers(s, t_s);
	ft_bzero(s, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(t_s, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
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

	if(s[0] == '0')
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

void collect_o(t_printf *pr)
{
	uint_fast64_t n;
	char s[ft_abs(pr->precision_field) + pr->width_field + 32];
	char t_s[ft_abs(pr->precision_field) + pr->width_field + 32];
	
//	ft_bzero_buffers(s, t_s);
	ft_bzero(s, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(t_s, ft_abs(pr->precision_field) + pr->width_field + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
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

void check_flags_for_x(t_printf *pr, char s[], uint_fast64_t n)
{
	if(pr->flag.hash == true && n != 0 && pr->type_field == 7)
		ft_strcpy(s, "0x");
	else if (pr->flag.hash == true && n != 0 && pr->type_field == 8)
		ft_strcpy(s, "0X");

}

void xX_width_N_precision_N(t_printf *pr, uint_fast64_t n)
{
	char str[32];
	char str_hex[32];
	
//	ft_bzero_buffers(str, str_hex);
	ft_bzero(str, 32);
	ft_bzero(str_hex, 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if(pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 8)
		ft_hex(n, 'X', str);

	check_flags_for_x(pr, str_hex, n);
	ft_strcat(str_hex, str);
	append_to_buffer(pr, str_hex);
}

void xX_width_N_precision_Y(t_printf *pr, uint_fast64_t n)
{
	char str[ft_abs(pr->precision_field) + 32];
	char str_hex[ft_abs(pr->precision_field) + 32];

//	ft_bzero_buffers(str, str_hex);
	ft_bzero(str, ft_abs(pr->precision_field) + 32);
	ft_bzero(str_hex, ft_abs(pr->precision_field) + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if(pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 8)
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

void xX_width_Y_precision_N2(t_printf *pr, char str[], char str_hex[])
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

void xX_width_Y_precision_N(t_printf *pr, uint_fast64_t n)
{
	char str[pr->width_field + 32];
	char str_hex[pr->width_field + 32];
	int total_length;

//	ft_bzero_buffers(str, str_hex);
	ft_bzero(str, pr->width_field + 32);
	ft_bzero(str_hex, pr->width_field + 32);
	ft_bzero(&pr->var, sizeof(&pr->var));
	if(pr->type_field == 7)
		ft_hex(n, 'x', str);
	else if(pr->type_field == 8)
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
		xX_width_Y_precision_N2(pr, str, str_hex);
}

void xX_width_Y_precision_Y2(t_printf *pr, char str[], char str_hex[])

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

void xX_width_Y_precision_Y(t_printf *pr, uint_fast64_t n)
{
	char str[pr->width_field + ft_abs(pr->precision_field) + 32];
	char str_hex[pr->width_field + ft_abs(pr->precision_field) + 32];
	int l_s;
	int l_s_h;

//	ft_bzero_buffers(str, str_hex);
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
	if(n == 0 && pr->precision_field == 0)
	{
		ft_strcpy(str, NULL);
		ft_strcat_loop(str, pr->var.width, " ");
		append_to_buffer(pr, str);
		return;
	}
	xX_width_Y_precision_Y2(pr, str, str_hex);
}

void collect_xX(t_printf *pr)
{
	uint_fast64_t n;

	n = 0;
	n = length_field_uoxX(pr);
	if(pr->width_field == 0 && pr->precision_field == -1)
		xX_width_N_precision_N(pr, n);
	else if(pr->width_field == 0 && pr->precision_field != -1)
		xX_width_N_precision_Y(pr, n);
	else if(pr->width_field != 0 && pr->precision_field == -1)
		xX_width_Y_precision_N(pr, n);
	else if(pr->width_field != 0 && pr->precision_field != -1)
		xX_width_Y_precision_Y(pr, n);


}

void f_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
	pr->var.precision = ft_pad(pr->precision_field, len);
	pr->var.width = ft_pad(pr->width_field, len + pr->var.precision);
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

void collect_f(t_printf *pr)
{
	long double nbr;
	char s[ft_abs(pr->precision_field) + pr->width_field + 64];
	char t_s[ft_abs(pr->precision_field) + pr->width_field + 64];

	nbr = 0;
//	ft_bzero_buffers(s, t_s);
	ft_bzero(s, ft_abs(pr->precision_field) + pr->width_field + 64);
	ft_bzero(t_s, ft_abs(pr->precision_field) + pr->width_field + 64);
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
	if(pr->precision_field == 0 && pr->flag.hash == true)
		ft_strcat(t_s, ".");
	f_append_buffer(pr, s, t_s);
}

void	b_append_buffer(t_printf *pr, char s[], char t_s[])
{
	int len;

	len = ft_strlen(t_s);
	if(s[0] == '0')
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

void check_flags_for_b(t_printf *pr, char s[])
{
	if(pr->flag.hash == true)
		ft_strcpy(s, "0");
	else if(pr->flag.space == true)
		ft_strcpy(s, " ");
}

void collect_b(t_printf *pr)
{
	uint_fast64_t n;
	char s[ft_abs(pr->precision_field) + pr->width_field + 128];
	char t_s[ft_abs(pr->precision_field) + pr->width_field + 128];
	
//	ft_bzero_buffers(s, t_s);
	ft_bzero(s, ft_abs(pr->precision_field) + pr->width_field + 128);
	ft_bzero(t_s, ft_abs(pr->precision_field) + pr->width_field + 128);
	ft_bzero(&pr->var, sizeof(&pr->var));
	n = 0;
	n = length_field_uoxX(pr);
	check_flags_for_o(pr, s);
	ft_itoa_base_u(n, FT_BINARY, t_s);
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
** 0 = c,  1 = s,  2 = p
** 3 = d,  4 = i,  5 = o
** 6 = u,  7 = x,  8 = X
** 9 = f, 10 = b, 11 = %
*/

/*
**void collect_data(t_printf *pr)
**{
**	if(pr->type_field == 0)
**		collect_c(pr);
**	else if(pr->type_field == 1)
**		collect_s(pr);
**	else if(pr->type_field == 2)
**		collect_p(pr);
**	else if(pr->type_field == 3 || pr->type_field == 4)
**		collect_d(pr);
**	else if(pr->type_field == 5)
**		collect_o(pr);
**	else if(pr->type_field == 6)
**		collect_u(pr);
**	else if(pr->type_field == 7 || pr->type_field == 8)
**		collect_xX(pr);
**	else if(pr->type_field == 9)
**		collect_f(pr);
**	else if(pr->type_field == 10)
**		collect_b(pr);
**	else if(pr->type_field == 11)
**		collect_percent(pr);
**}
*/

/*
** Above commented function that uses if and else if statements can also be
** used to instead of the disptach table. But I implemented dispatch table to
** learn how it works, which is pretty similar to if and else if statements.
*/

void collect_data(t_printf *pr)

{
	ft_dispatch_table[pr->type_field](pr);
}

void start_parsing(t_printf *pr)
{
	pr->i++;
	initialize_flag_and_field_values(pr);
	if(pr->string[pr->i] == '\0')
		return;
	start_collecting_flags(pr);
	collect_data(pr);
}

int ft_printf_driver(va_list args, const char *str)
{
	t_printf pr;
	ft_bzero(&pr, sizeof(pr));
	va_copy(pr.arguments, args);
	pr.string = str;
	while(pr.string[pr.i])
	{
		if(pr.string[pr.i] == '%')
		{
			start_parsing(&pr);
			if(pr.string[pr.i] == '\0')
				return(write(1, pr.buffer, pr.buffer_i));
		}
		else
			pr.buffer[pr.buffer_i++] = pr.string[pr.i];
		pr.i++;
	}
	va_end(pr.arguments);
	return(write(1, pr.buffer, pr.buffer_i));
}

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
