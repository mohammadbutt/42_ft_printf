/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:48:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/09 16:14:23 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_libft.h"

double turn_negative_sign_on_and_off(t_float *f, double nbr)
{
	if(nbr < 0)
	{
		nbr = -1 * nbr;
		f->negative_sign = true;
	}
	return(nbr);
}

void extract_whole_fraction_difference(t_float *f, double nbr, int precision)
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

void extract_precision_to_ascii(t_float *f, char str[], int precision)
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

void extract_whole_to_ascii(t_float *f, char str[], int precision)
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

char *ft_ftoa(t_float *f, double nbr, char str[], int precision)
{
	ft_bzero(f, sizeof(f));
	nbr = turn_negative_sign_on_and_off(f, nbr);
	extract_whole_fraction_difference(f, nbr, precision);
	ft_ftoa_roundup(f, nbr, precision);
	extract_precision_to_ascii(f, str, precision);
	ft_strcat(f->new_string, str);
	ft_bzero(str, ft_strlen(str));
	extract_whole_to_ascii(f, str, precision);
	ft_strcat(str, f->new_string);
	return(str);
}
