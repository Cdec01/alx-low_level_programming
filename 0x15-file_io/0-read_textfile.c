#include "main.h"

/**
 * read_textfile - function to read a text file
 * @filename: pointer size
 * @letters: index
 * Return: an integer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}

	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buff);

	return (wd);
}
