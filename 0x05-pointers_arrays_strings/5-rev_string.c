#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: pointer to the reversed string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len, mid;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	mid = len / 2;
	while (mid >= 0)
	{
		first = s[len - mid];
		last = s[mid];
		s[mid] = first;
		s[len - mid] = last;
		mid--;
	}
}
