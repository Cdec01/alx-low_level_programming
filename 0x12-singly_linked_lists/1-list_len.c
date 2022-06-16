#include "lists.h"

/**
 * list_len - fills memory with a constant byte
 * @h: is the owner
 * Return: an int
 */

size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
