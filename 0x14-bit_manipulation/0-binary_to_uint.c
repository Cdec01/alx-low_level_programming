#include "main.h"

/**
 * binary_to_unit - converts binary to an unsigned int
 * @b: pointer to the string of binary digits
 * Return: the converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int j;
	unsigned int n;

	j = 0;
	n = 0;

	if (!b)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] == '1')
		{
			n = n * 2 + 1;
		}
		else if (b[j] == '0')
		{
			n = n * 2;
		}
		else
		{
			return (0);
		}
		j++;
	}

	return (n);
}
