#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_unit - converts binary to an unsigned int
 * @b: pointer to the string of binary digits
 * Return: the converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int n;

	i = 0;
	n = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			n = n * 2 + 1;
		}
		else if (b[i] == '0')
		{
			n = n * 2;
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (n);
}
