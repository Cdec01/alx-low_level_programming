#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks for alphabets
 * @c: parameter for checking
 * Return: 1 for alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
