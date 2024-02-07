/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:25:51 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/07 06:07:31 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../Libft/Project/libft.h"
#include <limits.h>

int ft_printf(const char *strng, ...);

int main(void)
{
	int test = (INT_MAX);
	int d = 98081234;
	int i = 6;
	//unsigned long test = (INT_MAX);
	//unsigned long *test1= &test;
	//unsigned long t = 140732766361216;
	//ft_printf("test1%c\n", 'c');
	//ft_printf("test1%%%%%\n", 'c');

	//printf("test%s", "string");
	//printf("test%%"); -> Good
	//printf("test%%%%%%%%"); // -> Good 8
	//ft_printf("test%%%%%%%"); // -> No Good 7
	//printf("return value %d\n", ft_printf("test%%%%%%%s","_notstr")); // -> No Good 7
	//printf("return value %d\n", printf("test%%%%%%%s","_notrstr")); // -> No Good 7
	//int x = 5;
	//printf("%p\n", test1);
	//ft_printf("%p\n", test1);
	//ft_put_ulong_fd(test, 1);
	//printf ("%p", &x);
	//int p = printf ("%x\n", test);
	//ft_puthex_mayus_fd(
	//int ft = ft_printf ("%p", &test1);
	//ft_puthex_fd(t, 1);
	//printf("\nreturn printf: %d\nreturn ft_print: %d", p, ft);
	//ft_printf("%X\n",d);
	//printf("%X\n",d);
	//ft_printf("%i\n",i);
	//printf("%i\n",i);
	return (0);
}
