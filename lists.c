/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:48:38 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/31 22:58:49 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

t_list *ft_lstnew(void *content);

struct abc
{
	int a;
	char b;
	struct abc *self;
};

struct node
{
	int data;
	// datat
	// data
	// data
	struct node *link;
}

typedef struct Node
{
	int x;
	struct Node* next;
}

int main(void)
{
	Node root, elem2;
	root.x = 15;
	root.next = $elem2;
	elem2.next = -2;
	elem2.next = NULL;
	return (0);


	// { Data | Link } - > NODE
}
