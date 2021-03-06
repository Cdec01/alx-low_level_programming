#include "main.h"

/**
 * prime - function for prime numbers
 * @n: input num
 * @i: factor
 * Return: 1 for prime number, else 0
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime(n, i + 1));
}


/**
 * is_prime_number - checks prime number
 * @n: input num
 * Return: 1 for prime number, else 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
