/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_dangling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 06:49:48 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/03 18:07:16 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *createArray()
{
	int arr[3] = {1,2,3};
	return arr;  //Dangling Pointer
				 //  Returning a pointer to an variable from a fucntion
				 //  the local variable memory may be deallocated 
				 //  when the function exits, leaving the pointer dangling
}
int *fun()
{
	int num = 10;
	return &num; //The same as above but a bit clearer
}
int *fun_with_malloc()
{
	int *num;
	num = (int *)malloc(sizeof(int));
	*num = 5;
	return num; //The same as above but now this function with malloc
				//allocates memory on the heap, so it keep after function finishes
				//and return a pointer to this memory location
}

int main(void)
{
	int *deal = NULL;
	deal = fun(); // returning addresses of a variable that exists only on 
				  // the scope of a local function.
	printf("%d", *deal);

	int *fun_with_mal = NULL;
	fun_with_mal = fun_with_malloc();
	printf("%d", *fun_with_mal);
	free(fun_with_mal);
	

	int *ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (-1);
	int *ptr2 = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (-1);
	int *ptr3 = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (-1);

	*ptr = 5;
	printf("%p\n", ptr);
	free(ptr);
	*ptr = 8;
	// freeing memory too soon
	// ptr becomes a dangling pointer as its pointer to a nonexisting
	// memory location, memory that doesn't exist
	printf("%p\n", ptr);
	printf("%d", *ptr);

	free(ptr2);
	free(ptr2); // Dangling Pointer
				// Double-free
	
	/* Solution */
	*ptr3 = 8;
	free(ptr3);
	ptr3 = NULL;

	// After free 
	// Reinitialize the pointer with NULL

	return (0);
}
