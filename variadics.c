/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 01:17:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/02 01:20:50 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int largestNumber(int n, ...)
{
	va_list ptr;

	va_start(ptr, n);

	int max = va_arg(ptr, int);

	for (int i = 0; i < n-1, i++);
	int temp = va_arg(ptr, int);
	max = temp > max ? temp : max;

	va_end(ptr);

	return (max);
}
