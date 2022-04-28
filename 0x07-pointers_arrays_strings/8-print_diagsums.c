#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * @a: array pointer
 * @size: size or length
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0, j;
	int *arr = (int *) a;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				sum1 += arr[i * size + j];
			}
			if ((i + j) == (size -1))
			{
				sum2 += arr[i * size + j];
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\m", sum1, sum2
}
