#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lowercase
 * @c: character to check the case
 * Return: 1 is lowercase, 0 is otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
