/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:48:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/09 18:33:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"
#include <stdbool.h>
#include <stdio.h>
/*
char *ft_strcpy(char *dest, char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(source)
		while(source[i])
			dest[j++] = source[i++];
	dest[i] = '\0';
	return(dest);
}


int ft_numlen(uint64_t nbr)
{
	int i;

	i = 0;
	if(nbr == 0)
		return(0);
	while(nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return(i);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

char *ft_strcat(char *dest, char *source)
{
	int len;

	len = ft_strlen(dest);
	return(ft_strcpy(dest + len, source));
}

char *ft_strcat_loop(char *dest, int x_times, char *source)
{
	if(x_times)
		while(x_times--)
			ft_strcat(dest, source);
	return(dest);
}

void ft_bzero(void *s, size_t len)
{
	unsigned char *str;
	size_t i;

	str = s;
	i = 0;
	while(i < len )
			str[i++] = 0;
}

uint64_t ft_pow10(uint64_t num)
{
	uint64_t i;

	i = 1;
	if(num)
		while(num--)
			i = i * 10;
	return(i);
}

int ft_numlen_uint64(uint64_t nbr)
{
	int i;

	i = 0;
	if(nbr == 0)
		return(0);
	while(nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return(i);
}
*/

/*
** ---------------------------------------------------------------------------
** ---------------------------------------------------------------------------
*/
double turn_negative_sign_on_and_off(t_float *f, double nbr)
{
	if(nbr < 0)
	{
		nbr = -1 * nbr;
		f->negative_sign = true;
	}
	return(nbr);
}

void get_whole_fraction_diff(t_float *f, double nbr, int precision)
{
	f->whole_nbr = (uint_fast64_t)nbr;
	f->temp_nbr = (nbr - f->whole_nbr) * ft_pow10(precision);
	f->fraction_nbr = (uint_fast64_t) f->temp_nbr;
	f->difference = f->temp_nbr - f->fraction_nbr;
}

void ft_ftoa_roundup(t_float *f, double nbr, int precision)
{
	if(f->difference > 0.5)
	{
		f->fraction_nbr++;
		if(f->fraction_nbr >= ft_pow10(precision))
		{
			f->fraction_nbr = 0;
			f->whole_nbr++;
		}
	}
	else if (f->difference > 0.5)
		if((f->fraction_nbr == 0) || ((f->fraction_nbr % 2) == 1))
			f->fraction_nbr++;
	if(precision == 0)
	{
		f->difference = nbr - (double) f->whole_nbr;
	    if(!(f->difference < 0.5) || (f->difference > 0.5))
			if((f->whole_nbr % 2) == 1)
				f->whole_nbr++;
	}
}

void extract_precision_nbr(t_float *f, char str[], int precision)
{
	f->fraction_nbr_len = ft_numlen_uint64(f->fraction_nbr);
	if(precision > f->fraction_nbr_len)
		f->pad_zeros = precision - f->fraction_nbr_len;
	str[f->fraction_nbr_len] = '\0';
	f->fraction_nbr_len--;
	if(precision >= 1)
		while(f->fraction_nbr)
		{
			str[f->fraction_nbr_len--] = f->fraction_nbr % 10 + '0';
			f->fraction_nbr = f->fraction_nbr / 10;
		}
	if(f->pad_zeros >= 1)
		ft_strcat_loop(f->new_string, f->pad_zeros, "0");
}

void extract_whole_nbr(t_float *f, char str[], int precision)
{
	f->whole_nbr_len = ft_numlen_uint64(f->whole_nbr);
	if(f->negative_sign == true)
	{
		str[0] = '-';
		f->whole_nbr_len++;
	}
	if(precision >= 1)
	{
		f->whole_nbr_len++;
		str[f->whole_nbr_len--] = '\0';
		str[f->whole_nbr_len--] = '.';
	}
	else
		str[f->whole_nbr_len--] = '\0';
	while(f->whole_nbr)
	{
		str[f->whole_nbr_len--] = (uint_fast64_t)f->whole_nbr % 10 + '0';
		f->whole_nbr = f->whole_nbr / 10;
	}
}

char 	*ft_ftoa(double nbr, char str[], int precision)
{
	t_float f;

	ft_bzero(&f, sizeof(f));
	nbr = turn_negative_sign_on_and_off(&f, nbr);
	get_whole_fraction_diff(&f, nbr, precision);
	ft_ftoa_roundup(&f, nbr, precision);
	extract_precision_nbr(&f, str, precision);
	ft_strcat(f.new_string, str);
	ft_bzero(str, ft_strlen(str));
	extract_whole_nbr(&f, str, precision);
	ft_strcat(str, f.new_string);
	return(str);
}

/*
int main(void)
{
	char str[1024];
	int precision;
	double num;

	num = 1.1;
	precision = 16;

	printf("   printf: |%.*f|\n", precision, num);
	printf(" ft_printf:|%s|\n", ft_ftoa(num, str, precision));

//	printf("printf:    |%.20f|\n", 111.109999999999999 - 111.11000000000000);
//	printf("printf:    |%f|\n", );
//	printf("printf:    |%f|\n", );
//	printf("printf:    |%f|\n", );



//	printf("|%f|\n", num1 % 10.0);

}
*/
