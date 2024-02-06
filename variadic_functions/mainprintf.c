/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:25:51 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/06 01:49:04 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../Libft/Project/libft.h"

int ft_printf(const char *strng, ...);

int main(void)
{
	//ft_printf("test1%c\n", 'c');
	//ft_printf("test1%%%%%\n", 'c');

	//printf("test%s", "string");
	//printf("test%%"); -> Good
	//printf("test%%%%%%%%"); // -> Good 8
	//ft_printf("test%%%%%%%"); // -> No Good 7
	//printf("return value %d\n", ft_printf("test%%%%%%%s","_notstr")); // -> No Good 7
	//printf("return value %d\n", printf("test%%%%%%%s","_notrstr")); // -> No Good 7
	printf (
	return (0);
}
