#include "main.h"

/**
 * c_from - fills memory with a constant byte
 * @file_from: file from
 * Return: an integer
 */

void c_from(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * c_to - fills memory with a constant byte
 * @file_to: is the size of the pointer
 * Return: an integer
 */

void c_to(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * c_fd - fills memory with a constant byte
 * @file: file to work on
 * Return: an integer
 */

void c_fd(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}

/**
 * main - fills memory with a constant byte
 * @argc: is the size of the pointer
 * @argv: an index
 * Return: an integer
 */

int main(int argc, char **argv)
{
	int file1 = 0, file2 = 0, rd = 0, wr = 0;
	char *file_from, *file_to, buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	file1 = open(file_from, O_RDONLY);
	if (file1 == -1)
		c_from(file_from);

	file2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
		c_to(file_to);

	for (rd = read(file1, buff, 1024); rd > 0; rd = read(file1, buff, 1024))
	{
		wr = write(file2, buff, rd);
		if (wr == -1)
			c_to(file_to);
	}

	if (rd == -1)
		c_from(file_from);

	if (close(file1) == -1)
		c_fd(file_from);

	if (close(file2) == -1)
		c_fd(file_to);
	return (0);
}
