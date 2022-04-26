#include "main.h"

/**
 * _memcpy - copies memeory
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
