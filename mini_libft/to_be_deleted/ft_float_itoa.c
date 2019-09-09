/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:58:12 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/06 19:52:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

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

/*
** Function ft_pow works like pow from <math.h>, but it only does power of for
** whole numbers.
** Returns 1 if the power is 0 just like pow.
** Returns a negative number if the number is negative and the power is an odd
** number just like pow.
** Returns 0 if the power is a negative number, unlike pow.
**
*/


double ft_pow(double num1, int power_of)
{
	double result;

	result = num1;
	if(power_of < 0)
		return(0);
	else if(power_of == 0)
		return(1);
	power_of--;
	if(power_of)
		while(power_of--)
			result = num1 * result;
	return(result);
}

/*
uint64_t ft_pow(uint64_t num1, int power_of)
{
	uint64_t result;

	result = num1;
	if(power_of < 0)
		return(0);
	else if(power_of == 0)
		return(1);
	power_of--;
	if(power_of)
		while(power_of--)
			result = num1 * result;
	return(result);
}
*/

double ft_float_abs(double num)
{
	if(num < 0)
		return(-1 * num);
	return(num);
}

/*
int ft_float_numlen(double nbr)
{
	int i;

	i = 0;
	if(nbr < 0)
		i++;
	nbr = ft_float_abs(nbr);
//	while(nbr >= 1)
//	{
//		printf("n:|%f|\n", nbr);
//		printf("i:|%i|\n", i);
//		nbr = nbr / 10;
//		i++;
//	}
//	printf("n:|%f|\n", nbr);
//	while(nbr >= 0.000001)
	while(nbr)
	{
		printf("n:|%f|\n", nbr);
		printf("i:|%i|\n", i);
		nbr = nbr / 10;
		i++;
	}
//	printf("n:|%f|\n", nbr);
	return(i);
}
*/
int ft_double_numlen(double nbr)
{
	int i;

	i = 0;
	if(nbr == 0)
		return(0);
	else if(nbr < 0)
		i++;
	nbr = ft_float_abs(nbr);
	while(nbr >= 1)
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
	if (str)
		while (str[i])
			i++;
	return (i);
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

char *ft_float_itoa(double nbr, char str[], int precision)
//char *ft_float_itoa(int nbr, char str[], int precision)
{
	int float_numlen;
	int len;
//	char *str;
	if(nbr == 0)
	{
		ft_strcpy(str, "0");
		if(precision > 0)
		{
			ft_strcat(str, ".");
			ft_strcat_loop(str, precision, "0");
		}
		return(str);
	}
	len = ft_double_numlen(nbr);
//	printf("comes here\n");
//	printf("len:|%d|\n", len);
	if(nbr < 0)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while(ft_float_abs(nbr) >= 1)
	{
		str[len] = (uint64_t) ft_float_abs(nbr) % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	printf("nbr:|%f|\n", nbr);

	return(str);
}

int main(void)
{
	char str[1024];
	double num1;
	double num2;
//	double power;
	int precision;
	int power;
	int num3;
//	float FLT_MAX;

//	num1 = 123.456711;
//	num1 = 0.8787;
//	num1 = ft_float_abs(num1);
//	num1 = -1234567795234567.6;
	num1 = -123.123456789;
	precision = 0;
//	power = 10;
//	num1 = 0;

//	num2 = num1 % 1;
//	num3 = num1 % 1;
//	printf("|%d|\n", ft_float_numlen(num1));
//	printf("|%.1f|\n", num1);
	printf("|%.*f|\n", precision, num1);
	printf("|%s|\n", ft_float_itoa(num1, str, precision));
//	printf("   pow:|%f|\n\n", pow(num1, power));
//	printf("   pow:|%f|\n\n", pow(num1, power));
//	printf("ft_pow:|%f|\n\n", ft_pow(num1, power));
//	ft_strcat_loop(str, 10, "0");
//	printf("|%s|\n", str);
}
