#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: Second string
 * @n: n bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n >= len2)
		p = malloc(sizeof(*s1) * len1 + (len2 + 1));
	else
		p = malloc(sizeof(*s1) * len1 + (n + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		p[i] = s[i];
		i++;
	}
	j = 0;
	while (n < len2 && i < (len1 + n))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
