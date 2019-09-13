/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forbidden.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:54:58 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/12 20:33:29 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORBIDDEN_H
# define FORBIDDEN_H

/*
** This header list has some of the functions that are forbidden in our school,
** 42 Silicon Valley. We can use them for testing puposes for our own use or to
** understand their behavaiors, limitations and useage, but we are not allowed
** to turn in our projects with these functions unless we have recreated them
** ourselves.
**
** Inspired by github for banning some standard C Library functions because they
** are easy to misue. Link Below for reference:
** https://github.com/git/git/blob/master/banned.h
*/

# define FORBIDDEN(func) sorry_##func##_is_a_forbidden_function

# undef strcpy
# define strcpy(x,y) FORBIDDEN(strcpy)
# undef strcat
# define strcat(x,y) FORBIDDEN(strcat)
# undef strncpy
# define strncpy(x,y,n) FORBIDDEN(strncpy)
# undef strncat
# define strncat(x,y,n) FORBIDDEN(strncat)
# undef bzero
# define bzero(s, n) FORBIDDEN(strcpy)

# undef sprintf
# undef vsprintf
# undef printf
# ifdef HAVE_VARIADIC_MACROS
# define sprintf(...) FORBIDDEN(sprintf)
# define vsprintf(...) FORBIDDEN(vsprintf)
# define printf(...) FORBIDDEN(printf)
# else
# define sprintf(buf,fmt,arg) FORBIDDEN(sprintf)
# define vsprintf(buf,fmt,arg) FORBIDDEN(sprintf)
# define printf(fmt, arg) FORBIDDEN(printf)
# endif

#endif
