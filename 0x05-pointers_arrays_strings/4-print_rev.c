#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the spring in reverse
 * @s: pointer to the reversed string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
