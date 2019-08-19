/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:55:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/18 18:28:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "dispatch.h"

int add(int num1, int num2)
{
	printf("Addition:\n");
	return(num1 + num2);
}

int sub(int num1, int num2)
{
	printf("Subtraction:\n");
	return(num1 - num2);
}

int mult(int num1, int num2)
{
	printf("Multiplication:\n");
	return(num1 * num2);
}

int divide(int num1, int num2)
{
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
