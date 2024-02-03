/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef_structures.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 05:07:05 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 05:31:02 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef gives freedom to the user by allowing them to create their own types
//typedef existing_data_type new_data_type

#include <stdio.h>
#include <string.h>

struct car
{
	char engine[50];
	char fuel_type[10];
	int fuel_tank_cap;
	int seating_cap;
	float city_mileage;
}
// global scope declaration
//c1
;

typedef int INTEGER;

typedef struct t_car
{
	char engine[50];
	char fuel_type[10];
	int fuel_tank_cap;
	int seating_cap;
	float city_mileage;
}
t_car;

int main(void)
{
	INTEGER var = 100;
	printf("%d\n", var);

	// local scope declaration
	struct car c1; // = {"DDis 190", "Diesel", 50, 5, 19.74};
	strcpy(c1.engine,"DDis 190");

	/* with the new typedef */
	t_car c2  = {"DDis 190", "Diesel", 50, 5, 19.74};
	// Bellow Initialization Not Allowed
	//c2 = {"DDis 190", "Diesel", 50, 5, 19.74};
	
	// Bellow Initialization Allowed
	t_car c3;
	c3 = (struct t_car){"DDis 190", "Diesel", 1337, 5, 19.74};

	
	

	printf("%d\n", c1.fuel_tank_cap);
	printf("%d\n", c2.fuel_tank_cap);
	printf("%d\n", c3.fuel_tank_cap);
	return (0);

}
