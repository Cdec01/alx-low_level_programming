#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: contents of the file
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		wr = write(fd, text_content, len);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
