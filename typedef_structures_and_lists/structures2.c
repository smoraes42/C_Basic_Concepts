/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_pointers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:30:49 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/31 07:38:35 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


struct points
{
	int x;
	int y;
};

int main(void)
{
	struct points *pp;
	struct points pointos;

	pointos.x = 20;
	pointos.y = 20;

	pp = &pointos;
	int px = pp -> x;

	printf("%d\n", pointos.x);
	printf("%d\n", px);
	printf("%d\n", ++px);
}
