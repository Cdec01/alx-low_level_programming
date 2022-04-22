#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @str: pointer to the string
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
