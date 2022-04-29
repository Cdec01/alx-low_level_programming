#include "main.h"

/**
 * _sqrt - finds the square root of n with i
 * @n: number
 * @i: factor
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
