#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints lines and letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = 'a';

	while (c <= 'z')
	{
		i = 0;
		while (i < 3)
		{
			putchar('\n');
			i++;
		}
		putchar(c);
		c++;
	}
	return (0);
}
