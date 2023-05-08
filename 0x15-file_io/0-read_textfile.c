#include "main.h"
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	size_t n;
	ssize_t w;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}
	n = fread(buf, sizeof(char), letters, fp);
	if (n != letters && ferror(fp))
	{
		perror("fread");
		free(buf);
		fclose(fp);
		return (0);
	}
	buf[n] = '\0';

	w = fwrite(buf, sizeof(char), n, stdout);
	if (w != (ssize_t)n && ferror(stdout))
	{
		perror("fwrite");
		free(buf);
		fclose(fp);
		return (0);
	}
	free(buf);
	fclose(fp);
	return (w);
}
