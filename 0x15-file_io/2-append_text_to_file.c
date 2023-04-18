#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 *@filename:Name of the file to which text is to be appended.
 *@text_content:  Content to be appended at the end of the file.
 *Return: 1 on success and -1 on failure
 *If filename is NULL return -1
 *If text_content is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_return, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; *(text_content + text_len);)
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_return = write(fd, text_content, text_len);
	close(fd);

	if (write_return == -1)
		return (-1);
	return (1);
}
