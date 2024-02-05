/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 06:03:55 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 06:36:47 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int		n = 10;
	char	c = 'a';
	int		o = 20;
	int		p = 30;
	int		*nu = NULL;

	void	*ptr = &n;
	int		*ptr1 = &n;
	char	*ptr_c = &c;
	int		*ptr_o = &o;
	int		*ptr_p = &p;


	printf("n ->%p\n",	ptr);
	printf("%d\n",		*(int *)ptr);

	printf("n ->%p\n",	ptr1);
	printf("%d\n",		*ptr1);

	printf("c ->%p\n",	ptr_c);
	printf("%c\n",		*ptr_c);

	printf("o ->%p\n",	ptr_o);
	printf("%d\n",		*ptr_o);

	printf("p ->%p\n",	ptr_p);
	printf("%d\n",		*ptr_p);

	printf("nu ->%p\n",	nu);
	printf("%lu\n",		sizeof(NULL));

	printf("sizeof int %lu", sizeof(int));

	printf("%d\n",		*nu);
	return (0);
}
