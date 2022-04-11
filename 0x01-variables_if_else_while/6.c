#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digits of base 10
 * using the putchar function
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
