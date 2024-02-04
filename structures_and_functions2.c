/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_and_functions2.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:18:04 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 19:10:40 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct student
{
	char name[50];
	int age;
	int roll_no;
	float marks;
};

void print(char name[], int age, int roll, float marks)
{
	printf("%s %d %d %.2f", name, age, roll, marks);
}

/* Call by reference */
struct charset
{
	char s;
	int i;
};
void keyvalue(char *s, int *i)
{
	scanf("%c %d", s, i);
}

int main()
{
	struct student s1 = {"Nick", 16, 50, 72.5};
	print(s1.name, s1.age, s1.roll_no, s1.marks);

	/* Calling by referece */
	int j;
	struct charset cs;
	keyvalue(&cs.s, &cs.i);
	printf("%c %D", cs.s, cs.i);
	return (0);
}
