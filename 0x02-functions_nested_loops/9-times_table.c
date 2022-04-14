#include "main.h"
#include <stdio.h>

/**
 * times_table - multiplication
 * Return: times table
 */
void times_table(void)
{
	int i, j, first, last, multi;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multi = i * j;
			first = multi / 10;
			last = multi % 10;

			if (first == 0)
			{
				if (j >= 1)
				{
					_putchar(first + ' ');
				}
				_putchar(last + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}
			_putchar(first + '0');
			_putchar(last + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
