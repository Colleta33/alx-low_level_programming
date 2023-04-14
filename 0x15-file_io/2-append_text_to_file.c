#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 *@filename: a pointer the created file
 *@text_content: a pointer to the file text
 *Return: 1 on success and -1 on failure
 *If filename is NULL return -1
 *If text_content is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			w = write(fd, text_content, nletters);

		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
