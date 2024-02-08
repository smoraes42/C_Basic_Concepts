/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:36:52 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/07 20:36:52 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
/*
How C open() works in OS
Find the existing file on the disk.
Create file table entry.
Set the first unused file descriptor to point to the file table entry.
Return file descriptor used, -1 upon failure
	
int open(const char* Path, int flags);
		Path - Preferiblely the absolute path of the file.
		flags - fcntl.h
				O_RDONLY	Opens the file in read-only mode.
				O_WRONLY	Opens the file in write-only mode.
				O_RDWR		Opens the file in read and write mode.
				O_CREAT		Create a file if it doesn’t exist.
				O_EXCL		Prevent creation if it already exists.
				O_ APPEND	Opens the file and places the cursor at the end of the contents.
				O_ASYNC		Enable input and output control by signal.
				O_CLOEXEC	Enable close-on-exec mode on the open file.
				O_NONBLOCK	Disables blocking of the file opened.
				O_TMPFILE	Create an unnamed temporary file at the specified path.
 */
int main(int argc, char **argv)
{
	(void) argc;
	char *path = argv[1];
	int flags = atoi(argv[2]);
	int fd1 = open(path, flags);
	printf("fd = %d\n", fd1);

	if (fd1 == -1)
	{
		printf("Error number: %d \n", errno);
		perror("Message from perror");
	}
	printf("opened the fd = %d\n", fd1);

	if (close(fd1) < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("closed the fd.\n");
	return (0);
}
