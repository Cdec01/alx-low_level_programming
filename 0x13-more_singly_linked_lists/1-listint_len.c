#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the no. of elements in a linked list
 * @h: pointer to the first element of the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}

	return (j);
}
