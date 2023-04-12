#include "main.h"

/**
 *create_file - a function that creates a file.
 *@filename: apointer to  the file to be created
 *@text_content: a pointer to the text in the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	int len;
	int w;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0660);

	if (o == -1)
		return (-1);

	if (text_content)
		text_content = "";
	{
		for (len = 0; text_content[len];)
			len++;
	}

	w = write(o, text_content, len);

	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
