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

	for (i = 48; i <= 57; i++)
	{
		for (c = 48; c <= 57; c++)
		{
			if (i < c)
			{
				putchar(i);
				putchar(c);
				if (i == 56 && c == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
