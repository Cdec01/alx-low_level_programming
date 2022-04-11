#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int c;

	for (i = 0; i < 100; i++)
	{
		for (c = 0; c < 100; c++)
		{
			if (i < c)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (i == 98 && c == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
