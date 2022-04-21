#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: pointer
 * Return: the lenghth of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
