/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 01:08:41 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 19:16:43 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#define	YMAX 1080
#define XMAX 1920

/* struture:
 * User defined data type that can be used to group elements of different type
 * into a single type
 */

struct point
{
	int x;
	int y;
	// x = 0, y = 0;
	// struct point pt = {0, 0};
};

struct rect
{
	struct point pt1;
	struct point pt2;
	// pt1 = (0,0), pt2 = (0,0);
	// struct rect screen = {{0,0}, {0,0}};
};

struct point makepoint(int x, int y)
{
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

int main(void)
{
	struct rect screen;
	struct point middle;
	struct point addpo;
	struct point makepoint(int, int);
	//struct point addpoint(struct point middle, struct point left);

	screen.pt1 = makepoint(0,0);
	screen.pt2 = makepoint(XMAX, YMAX);

	// Passing Structure Members
	middle = makepoint((screen.pt1.x + screen.pt2.x) / 2,
			(screen.pt1.y + screen.pt2.y)/2);

	addpo = addpoint(middle,middle);

	printf("pt1 -> %d, %d\n", screen.pt1.x, screen.pt1.y);
	printf("pt2 -> %d, %d\n", screen.pt2.x, screen.pt2.y);
	printf("middle -> %d,%d\n", middle.x, middle.y);

	printf("addpo -> %d,%d\n", addpo.x, addpo.y);

	return (0);
}
