/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:04:48 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/31 03:17:43 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


struct point
{
	int x;
	int y;
};

struct triangulation
{
	struct point pt1;
	struct point pt2;
	struct point pt3;
};

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
 	temp.y = y;
	return temp;
}


int main(void)
{
	struct triangulation bermudas;

	bermudas.pt1 = makepoint(28, 45);


	return (0);
}
