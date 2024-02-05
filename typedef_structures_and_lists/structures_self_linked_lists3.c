/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_self_linked_lists3.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:32:35 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 04:23:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Traversing a Linked List */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
} node;

void count_of_nodes(struct node *head);
void print_data(struct node *head);

int main()
{
	node *head, *current;

	head = (node *) malloc(sizeof(node));
	head->data = 23;
	head->link = NULL;

	current = (node *) malloc(sizeof(node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current -> data = 3;
	current -> link = NULL;
	head->link->link = current;


	count_of_nodes(head);
	printf_data(head);
	return(0);
}

void count_of_nodes(struct node *head)
{
	int count;
	node *ptr;
	ptr = NULL;
	if (head == NULL)
		printf("Linked list is empty");
	ptr = head;
	count = 0;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d", count);
}

void print_data(struct node *head)
{
	if (head == NULL)
		printf("Linked List is empty");
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d", ptr->data);
		ptr = ptr->link;
	}
}
