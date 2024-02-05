/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_linked_lists.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:54:02 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 02:15:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
   array = sequential elements
   Array		=	[23]	[54]	[78]	[90]
					&1000	&1004	&1008	&1012 

   node = [data][link]	
   Linked List	=	[23][&5000]	[54][50FE]	[90][80DF]	[78][NULL]
					&1000		&5000		&50FE		&80DF
					^
					Head

   struct node
   {
		int data;
		struct node *link;
   };

   struct node *head = (struct node *)malloc(sizeof(struct node));
   head->data = 23;
   head->link = NULL;

   struct node *current = malloc(sizeof(struct node));
   current->data = 54;
   current->link = NULL;
   head->link = current;

   Linked List	=	[23][&5000]	[54][50FE]	[90][80DF]	[78][NULL]
					&1000		&5000		&50FE		&80DF
					^			^
					Head		Current

   struct node *current2 = malloc(sizeof(struct node));
   current2->data = 90;
   current2->link = NULL;
   current->link = current2;

   Linked List	=	[23][&5000]	[54][50FE]	[90][80DF]	[78][NULL]
					&1000		&5000		&50FE		&80DF
					^			^			^
					Head		Current		Current2

	struct node *current3 = malloc(sizeof(struct node));
	current3->data = 78;
	current3->link = NULL;
	current2->link = current3;

	Linked List	=	[23][&5000]	[54][50FE]	[90][80DF]	[78][NULL]
					&1000		&5000		&50FE		&80DF
					^			^			^			^
					Head		Current		Current2	Current3

   ...
   The above is correct despite not a very optimal way of doing it

	head->link => 2000
	head->link->link ==> (2000)->link = 3000 
	head->link->link->link ===>  (3000)->link = NULL

	struc node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current->data = 3;
	current->link = NULL;

	head->link->link = current;




   return (0);

*/
