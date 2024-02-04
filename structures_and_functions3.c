/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions3.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:14:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 19:23:33 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct point
{
	int x;
	int y;
};

// Print by copy
void print1(struct point p)
{
	printf("%d %d\n", p.x, p.y);
}

//Print by reference
void print2(struct point *ptr)
{
	printf("%d %d\n", ptr->x, ptr->y);
}


int main(void)
{
	struct point p1 = {23, 45};
	struct point p2 = {46, 90};

	// Passing the whole copy of the structure as argument
	print1(p1);
	print1(p2);

	// Passing pointer to structure as and argument
	print2(&p1);
	print2(&p2);
	
	return (0);
}
