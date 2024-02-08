/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:11:35 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/08 19:15:31 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZ
/*
	strace
	ulimit -a 

	size_t read (int fd, void* buf, size_t cnt);
	From the file indicated by the file descriptor fd, 
	the read() function reads the specified amount of bytes cnt of input 
	into the memory area indicated by buf. 
	A successful read() updates the access time for the file.
	The read() function is also defined inside the <unistd.h> header file.

	Important points::
		buf =	valid memory location
		fd  =	lenght >= cnt
		cnt =   requested number read may != bytes read, return actual number
				of bytes read, Also, some times read system call 
				should read fewer bytes than cnt. 


 */

int main()
{
	/*
	FILE *fp = fopen("hello.txt", "r");
	fclose(fp);
	FILE *fpw = fopen("nowexists.txt", "w");
	fclose(fpw);
	*/

	int fd1, fd2, sz1, sz2;
	char *c1 = (char *)calloc(BUFF_SIZ, sizeof(char));
	char *c2 = (char *)calloc(BUFF_SIZ, sizeof(char));

	fd1 = open("foo.txt", O_RDONLY);
	fd2 = open("foo1.txt", O_RDONLY);
	if (fd1 < 0 || fd2 < 0)
	{
		perror("r1");
		exit(1);
	}
	

	sz1 = read(fd1, c1, BUFF_SIZ);
	sz2 = read(fd2, c2, BUFF_SIZ);
	printf("called read(%d, c, 10). return that"
			" %d bytes were read.\n", fd1, sz1);
	c1[sz1] = '\0';
	printf("Those bytes are as follows: %s\n", c1);
	printf("called read(%d, c, 10). return that"
			" %d bytes were read.\n", fd2, sz2);
	c2[sz2] = '\0';
	printf("Those bytes are as follows: %s\n", c2);
	
	return (0);
}
