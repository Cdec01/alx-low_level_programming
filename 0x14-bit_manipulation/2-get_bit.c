#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be checked
 * Return: the value of the bit at index or -1 for failures
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (((n) & ((1) << (index))) ? 1 : 0);
}
