/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:53:35 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/18 18:28:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPATCH_H
# define DISPATCH_H

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int divide(int num1, int num2);

typedef int math_function(int num1, int num2);

math_function *ft_dispatch_table[4] =
{
	add,
	sub,
	mult,
	divide
};

#endif
