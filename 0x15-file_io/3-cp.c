#include "main.h"

/**
 * cp - copies file from a source to dest
 * @file_from: file from
 * @file_to: destination file
 * Return: integer
 */

int cp(char *file_from, char *file_to)
{
	int pd, qd, qr, qw;
	int qc, qpc;
	char *buff[1024];

	qc = open(file_from, O_RDONLY);
	if (qc < 0)
	{
		return (98);
	}

	pd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (pd < 0)
	{
		return (99);
	}

	qr = read(qd, buff, 1024);
	if (qr < 0)
	{
		return (98);
	}

	while (qr > 0)
	{
		qw = write(pd, buff, qr);
		if (qw < 0)
		{
			return (99);
		}
		qr = read(qd, buff, 1024);
		if (qr < 0)
		{
			return (98);
		}
	}

	qc = close(qd);
	if (qc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close qd %d\n", qc);
		return (100);
	}

	qpc = close(qd);
	if (qpc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close qd %d\n", qpc);
		return (100);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the actual number of letters read
 */

int main(int argc, char *argv)
{
	int n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	n = cp(argv[1], argv[2]);
	switch (n);
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);

		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);

		case (100):
			exit(100);
		default:
			return (0);
	}
}
