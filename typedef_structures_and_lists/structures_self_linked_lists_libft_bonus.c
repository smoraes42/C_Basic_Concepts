/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures_self_linked_lists3.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:16:24 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 02:18:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//ft_lstnew
// 
t_list *ft_lstnew(void *content);

//ft_lstadd_front
void ft_lstadd_front(t_list **lst, t_list *new);

//ft_lstsize
int ft_lstsize(t_list *lst);

//ft_lstlast
t_list *ft_lstlast(t_list *lst);

//ft_lstadd_back
void ft_lstadd_back(t_list **lst, t_list *new);

//ft_lstdelone
void ft_lstdelone(t_list *lst, void(*del)(void *));

//ft_lstclear
void ft_lstclear(t_list **lst, void(*del) (void*));

int main()
{
}
