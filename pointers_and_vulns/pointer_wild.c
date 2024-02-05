/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_wild.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:11:32 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 17:17:41 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{

	int n;
	n = 10;
	int *c;
	c = &n; // correct

	int *p;
	*p = 10; // wild pointer

	int *p = (int *)malloc(sizeof(int));
			 // Also Correct
	*p = 10; // Explictly allocating memory and putting values inside of it
	free(p);


	return(0);
}
