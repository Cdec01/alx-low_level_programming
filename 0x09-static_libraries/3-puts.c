#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @str: pointer to the string
 * Return: nothing
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
