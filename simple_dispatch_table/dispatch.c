/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:55:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/11 15:06:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "dispatch.h"

int add(int num1, int num2)
{
	printf("Choice 0\n");
	printf("Addition:\n");
	return(num1 + num2);
}

int sub(int num1, int num2)
{
	printf("Choice 1\n");
	printf("Subtraction:\n");
	return(num1 - num2);
}

int mult(int num1, int num2)
{
	printf("Choice 2\n");
	printf("Multiplication:\n");
	return(num1 * num2);
}

int divide(int num1, int num2)
{
	printf("Choice 3\n");
	printf("Division:\n");
	return(num1 / num2);
}

int main(void)
{
	int num1;
	int num2;
	int choice;
	int result;

	num1 = 6;
	num2 = 2;
	choice = 3;
	result = ft_dispatch_table[choice](num1, num2);
	printf("Result is %d\n", result);
	return(0);
}
