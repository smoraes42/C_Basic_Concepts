/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:16:26 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/06 01:49:04 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../Libft/Project/libft.h"
/*
You have to recode the printf() function from libc.
The prototype of ft_printf() is:
int ft_printf(const char *, ...);
Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.
You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

// With Indexes
int ft_printf(const char *strng, ...)
{
	int args = ft_strlen(strng);
	va_list  params;
	va_start (params, strng);
	int i = 0;
	int count = 0;
	while(i < args)
	{
		while (strng[i] != '%' && strng[i] != '\0')
		{
			write(1, &strng[i++], 1);
			count++;
		}
		if (strng[i] == '%')
 		{
			i++;
			if (strng[i] == '%')
			{
				write(1, &strng[i++], 1);
				count++;
			}
			else if (strng[i] == 'c')
			{
				char fc;
				fc = va_arg(params, int);
				write(1, &fc, 1);
				count++;
				i++;
			}
			else if (strng[i] == 's')
			{
				char *fstr;
				fstr = va_arg(params, char *);
				ft_putstr_fd(fstr, 1);
				count += ft_strlen(fstr);
			}
			else if (strng[i] == 'p')
			{
				long faddr;
				faddr = va_arg(params, long);
				ft_putnbr

			}


			
		}
						
	}
	return (count);
}

// With Pointers
//int ft_printf(const char *strng, ...)
//{
//    int args = strlen(strng);
//    va_list params;
//    va_start (params, strng);
//    while(args-- && *strng != '\0')
//    {
//        while (*strng != '%' && *strng != '\0')
//            write(1, &*strng++, 1);
//        if (*strng == '%')
//         {
//            strng++;
//            if (*strng == '%')
//            {
//                write(1, &*strng++, 1);
//            }
//            else if (*strng++ == 'c')
//            {
//                char fc;
//                fc = va_arg(params, int);
//                write(1, &fc, 1);
//            }
//            
//        }
//    }
//    return (0);
//}
