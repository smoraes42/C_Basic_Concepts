/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 01:17:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 08:31:59 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

float average(int num, ...)
{
	int total;
	va_list ap;

	total = 0;
	va_start(ap, num);
	for (int i = 0; i< num; ++i)
		total += va_arg(ap, int);
	va_end(ap);
	return ((float)total / num);
}

//int largestNumber(int n, ...)
//{
//	va_list ptr;
//
//	va_start(ptr, n);
//
//	int max = va_arg(ptr, int);
//
//	for (int i = 0; i < n-1, i++);
//	int temp = va_arg(ptr, int);
//	max = temp > max ? temp : max;
//
//	va_end(ptr);
//
//	return (max);
//}

int main()
{
	printf("The average is %.2f\n", average(5, 3,4,5,6,78));
}
