/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions4.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:35:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/04 22:48:56 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};

// Returning a structure variable from the function
struct point edit(struct point p)
{
	(p.x)++;
	p.y = p.y + 5;
	return p;
}
void print_value(struct point p)
{
	printf("%d %d\n", p.x, p.y);
}

// Returning a pointer to a structure from the function
struct point *fun(int a, int b)
{
	struct point *ptr = (struct point *)malloc(sizeof(struct point));
	ptr->x = a;
	ptr->y = b + 5;
	return ptr;
}
void print_ref(struct point *ptr)
{
	printf("%d %d\n", ptr->x, ptr->y);
}

int main(void)
{
	struct point p1 = {23, 45};
	struct point p2 = {56, 90};

	// Returning a structure variable from the function
	p1 = edit(p1);
	p2 = edit(p2);
	print_value(p1);
	print_value(p2);

	// Retuning a pointer from the function
	struct point *ptr1;
	struct point *ptr2;
	ptr1 = fun(2,3);
	ptr2 = fun(6,9);
	print_ref(ptr1);
	print_ref(ptr2);
	free(ptr1);
	free(ptr2);


	return (0);
}
