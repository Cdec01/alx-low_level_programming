#include "main.h"

/**
 * palindrom1 - set true or false for palindrome string
 * @x: string
 * @y: length of string
 * Return: 1 on success, -1 is an error
 */
int palindrom1(char *x, int y)
{
	if (*x == 0)
		return (y - 1);

	return (palindrom1(x + 1, y + 1));
}


/**
 * palindrom2 - string reverse
 * @x: string
 * @y: length of string
 * Return: 1 on sucess, -1 for error
 */
int palindrom2(char *x, int y)
{
	if (*x != *(x + y))
		return (0);

	else if (*x == 0)
		return (1);

	return (palindrom2(x + 1, y - 2));
}


/**
 * is_palindrome - checks if a sting is a palindrome
 * @s: pointer to string
 * Return: 1 success, -1 for error
 */
int is_palindrome(char *s)
{
	int y;

	y = palindrom1(s, 0);
	return (palindrom2(s, y));
}
