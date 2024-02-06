/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 01:17:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/05 23:21:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/*

   va_list ap
   The called function must declare a type va_list and defines three macros for
   stepping through a list of arguments whose number and tye are not know 
   to the called function

   void va_start(va_list ap, last);
   Must be called first and it initializes ap, which can be passed to va_arg()

   type va_arg(va_list ap, type);
   For each argument to be processed


   void va_copy(va_list dest, va_list src);
   Copies the state of the variable argument list, dest, which must not have been 
   previously initialized by va_start()

   void va_end(va_list ap);
   Signals that there are no further arguments and causes ap to be invalidated 
   note that each call to va_start() must be matched by a call to va_end()

*/
float average(int num, ...)
{
	int total;
	total = 0;

	//	Declare type va_list
	va_list ap;

	//		va_start	->  Called first and initializes ap
	va_start(ap, num);

	for (int i = 0; i< num; ++i)
		//		va_arg		->  
		total += va_arg(ap, int);
	va_end(ap);
	return ((float)total / num);
}

int largestNumber(int n, ...)
{
	va_list ptr;

	va_start(ptr, n);

	int max = va_arg(ptr, int);

	for (int i = 0; i < n-1; i++)
	{
		int temp = va_arg(ptr, int);
		max = temp > max ? temp : max;
	}

	va_end(ptr);

	return (max);
}

int max(int num_args, ...)
{
	va_list args;
	va_start(args, num_args);
	int x;

	for (int i = 0; i < num_args; i++)
	{
		x = va_arg(args, int);
		printf("x: %d\n", x);
	}
	return x;

}

void print(char *placeholders, ...)
{
	int num_args = strlen(placeholders);
	va_list args;
	va_start(args, placeholders);

	for( int i = 0; i < num_args; i++)
	{
		if (placeholders[i] == 'd')
		{
			int x = va_args(args, int);
			//print int x...
		}
		else if ...
	}
}
int main()
{
	printf("The average is %.2f\n", average(5, 3,4,5,6,78));
}
