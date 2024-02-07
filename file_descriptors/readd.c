/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:11:35 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/07 08:42:34 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 *	strace
 *	ulimit -a
 *	 
 */
int main()
{
	FILE *fp = fopen("hello.txt", "r");
	fclose(fp);
	FILE *fpw = fopen("nowexists.txt", "w");
	fclose(fpw);
	return (0);
}
