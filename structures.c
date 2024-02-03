/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:23:11 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/31 02:17:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct character
{
	char		Name[50];
	//const char	consName[50];

	int		Age;

};

struct point
{
	int x;
	int y;
};

struct rect
{
	struct point pt1;
	struct point pt2;
};

int main(void)
{
	struct point maxpt = {320, 100};

	struct character peter = {"Peter", 20};
	//strcpy((char *)peter.consName, "Retep");
	strcpy(peter.Name, "Retep");

	struct rect screen = {{320,50},{300, 40}};


	printf("%d %d", maxpt.x, maxpt.y);
	printf("%s %d", peter.Name, peter.Age);
	printf("%d %d %d %d", screen.pt1.x, screen.pt2.x,\
			screen.pt1.y, screen.pt2.y);

	return (0);
}

