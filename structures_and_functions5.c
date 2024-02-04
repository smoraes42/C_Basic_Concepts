/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions5.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:58:31 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 20:07:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct abc
{
	int a;
	char b;
};

void print(struct abc arr[])
{
	int i;
	i = 0;
	while (i < 2)
	{
		printf("%d %c\n", arr[i].a, arr[i].b);
		i++;
	}
}

int main(void)
{
	// Passing array of structures as arguments
	struct abc arr[2] = {{1, 'A'}, {2, 'B'}};
	print(arr);
	return (0);
}
