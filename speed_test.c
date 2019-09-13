/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   speed_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:31:40 by mbutt             #+#    #+#             */
/*   Updated: 2019/09/13 13:45:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include "srcs/ft_printf.h"

int main(void)
{
    clock_t        time;
    int            i = 2147483647;
    long        l = 2147483647;
    long long    ll = 9223372036854775807;
    char        c = 0;
    intmax_t    im = 9223372036854775807;

    time = clock();
    while ((double)time / CLOCKS_PER_SEC < 15)
    {
        time = clock();

        ft_printf("\n");
        ft_printf("%%\n");
        ft_printf("%d\n", 42);
        ft_printf("%d%d\n", 42, 41);
        ft_printf("%d%d%d\n", 42, 43, 44);
        ft_printf("%ld\n", l);
        ft_printf("%lld\n", ll);
        ft_printf("%x %X %p %20.15d\n", 505, 505, &ll, 54321);
        ft_printf("%-10d % d %+d %010d %hhd\n", 3, 3, 3, 1, c);
        ft_printf("%jd %zd %u %o %#08x\n", im, (size_t)i, i, 40, 42);
        ft_printf("%x %#X %S %s%s\n", 1000, 1000, L"ݗݜशব", "test", "test2");
        ft_printf("%s%s%s\n", "test", "test", "test");
        ft_printf("%C\n", 15000);

/*
        printf("\n");
        printf("%%\n");
        printf("%d\n", 42);
        printf("%d%d\n", 42, 41);
        printf("%d%d%d\n", 42, 43, 44);
        printf("%ld\n", l);
        printf("%lld\n", ll);
        printf("%x %X %p %20.15d\n", 505, 505, &ll, 54321);
        printf("%-10d % d %+d %010d %hhd\n", 3, 3, 3, 1, c);
        printf("%jd %zd %u %o %#08x\n", im, (size_t)i, i, 40, 42);
        printf("%x %#X %S %s%s\n", 1000, 1000, L"ݗݜशব", "test", "test2");
        printf("%s%s%s\n", "test", "test", "test");
        printf("%C\n", 15000);
*/
    }
    return (0);
}
