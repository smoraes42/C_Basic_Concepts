/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_self_referencial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:29:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 20:39:09 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct self
{
	int i;
	char c;
	struct self *ptr;
};

int main(void)
{
	struct self var1;
	struct self var2;

	var1.i = 65;
	var1.c = 'A';
	var1.ptr = NULL;


	var2.i = 66;
	var2.c = 'B';
	var2.ptr = NULL;

	var1.ptr = &var2;

	printf("%d %c", var1.ptr->i, var1.ptr->c);

}
