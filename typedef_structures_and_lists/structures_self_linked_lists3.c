/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_self_linked_lists3.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:32:35 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 07:26:45 by smoraes-         ###   ########.fr       */
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
	int data11= 11;
	int data111 = 111;

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
	add_at_end(head, data11);
	head = add_at_bgn(head, data111);
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

void add_at_end(struct node *head, int data)
{
	struct node *ptr, *temp;
	ptr = head;
	temp = (struct node *)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	while(ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = temp;
	
}

struct node* add_at_bgn(struct node *head, int data)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->data = data;
	ptr->link = NULL;

	ptr->link = head;
	head = ptr;
	return head;
}
