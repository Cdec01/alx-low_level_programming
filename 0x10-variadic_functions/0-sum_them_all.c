#include "variadic_functions.h"

/**
 * sum_them_all - fills memory with a constant byte
 * @n: amnt of args
 * Return: sum of all arg recipe
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list gett;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(gett, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(gett, int);
	}
	va_end(gett);
	return (sum);
}
