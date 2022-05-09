#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to an
 * allocated space in memory, which is a copy of
 * parameter string
 *
 * @str: parameter
 * Return: pointer if success
 */

char *_strdup(char *str)
{
	unsigned int i, strlen;
	char *p;

	if (str == NULL)
		return (NULL);

	strlen = 0;
	while (str[strlen])
		strlen++;

	p = malloc(sizeof(*str) * (strlen + 1));

	if (p == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
