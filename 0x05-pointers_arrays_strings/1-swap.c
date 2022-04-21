#include "main.h"

/**
 * swap_int - Swaps the value of a & b
 * @a: parameter 1
 * @b: parameter 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
