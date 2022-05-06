#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates array
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific char
 * Return: pointer if success, null otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(*p) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		printf("failed to allocate memory\n");
	}
	else
	{
		i = 0;
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		p[i] = '\0';
	}

	return (p);
}
