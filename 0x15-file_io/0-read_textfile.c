#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints
 *@filename: name of the file to be read
 *@letters: number of characters tobe read
 *Return: w- actual number of letters
 *if filename is NULL return 0
 *if write fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open (filename, O_RDONLY);
	if (fd != -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer,t);

	free(buffer);
	close(fd);
	return (w);
}
