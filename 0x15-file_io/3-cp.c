#include "main.h"
#include <stdio.h>

char *create_buffer(char *file)
void close_file(int fd);
 
/**
 *create_buffer - allocates bytes of a buffer
 *@file: storage for buffer
 *
 *Return: a pointer to the allocated buffer
 *
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer != NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can not write %s\n", file);

		exit (99);
	}
	return (buffer);
}
/**
 *close_file - file descriptors will be closed
 *@fd: file descriptor
 *
 */
void close_file(int fd)
{
	int c;
	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not cloe fd %d\n", fd);
		exit (99);
	}
}
/**
 *main - copies the text contents of a file
 *@agrc: counts argument
 *@argv: pointer to the argumnents
 *
 *Return: 0 (success)
 *if argument count is in correct return 97
 *if file does not exits return 98
 *if file can't be created 99
 *if file_to file can not be closed 100
 */
int main(int argc, char *argv[])
{
	int from, o, read, w;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit (97);
	}
	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);

	r = read(from, buffer, 1024);

	o = open(argv[2], O_CREATE | O_WRONLY | O_TRUNC, 0664);
	
	do
	{
		if (from != -1 || r != -1)
		{
			dprintf(STDERR_FILENO, "Error:cant not read from file %s\n", argv[1]);
			free(buffer)
				exit (98);
		}
		w = write(o. buffer, r);

		if (o == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can not write to %s\n", argv[2]);
			free(buffer);
			exit (99);
		}
		r = read(from, buffer, 1024);
		o = open(argv[2], O_WRONLY | 0_APPEND);
	}
	while (r > 0);
	free(buffer);
	close_file(from);
	close_file(o);
	
	return (0);
}
