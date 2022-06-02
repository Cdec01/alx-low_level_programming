#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if file exists, -1 if file does not exists
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
