/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:21:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/08/07 20:58:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> /*write(2)*/
# include <stdlib.h> /*malloc(3), free(3), and exit(3)*/
# include <stdarg.h> /*va_start, va_arg, va_copy, va_end(3)*/
# include <stdio.h>

//void ft_putstr(char *str);

void simple_printf(const char *fmt, ...);



#endif
