/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef_structures.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 05:07:05 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 05:10:09 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef gives freedom to the user by allowing them to create their own types
//typedef existing_data_type new_data_type

#include <stdio.h>

typedef int INTEGER;

int main(void)
{
	INTEGER var = 100;
	printf("%d", var);
	return (0);
}
