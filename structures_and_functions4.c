/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions4.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:35:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 19:54:41 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>>

struct point
{
	int x;
	int y;
}

// Returning a structure variable from the function
struct point edit(struct point p)
{
	(p.x)++;
	p.y = p.y + 5;
	return p;
}
void print(struct point p)
{
	printf("%d %d\n", p.x, p.y);
}

// Returning a pointer to a structure from the function
struct point *fun(int a, int b)
{
	struct point *ptr = (struct point *)malloc(sizeof(truct point));
	ptr->x = a;
	ptr->y = b + 5;
	return ptr;
}
void print(structure point *ptr)
{
	printf("%d %d\n", ptr->x, ptr->y);
}

int main(void)
{
	struct point ptr1 = {23, 45};
	struct point ptr2 = {56, 90};

	// Returning a structure variable from the function
	p1 = edit(p1);
	p2 = edit(p2);
	print(p1);
	print(p2);

	// Retuning a pointer from the function
	struct point *ptr1;
	struct point *ptr2;
	ptr1 = fun(2,3);
	ptr2 = fun(6,9);
	print(ptr1);
	print(ptr2);
	free(ptr1);
	free(ptr2);


	return (0);
}
