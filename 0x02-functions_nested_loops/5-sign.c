#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints + for positive,
 * for negative we print -,
 * and 0 for zero
 * @n: parameter
 * Return: 1 for +, 0 for 0and -1 for -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
