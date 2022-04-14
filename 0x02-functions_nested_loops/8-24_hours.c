#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints time of the day
 * Return: time
 */
void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
