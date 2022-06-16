#include "lists.h"

/**
 * get_nodeint_at_index - fills memory with a constant byte
 * @head: is the owner
 * @index: is the number
 * Return: an address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *headcopy;
	unsigned int n;

	headcopy = head;
	if (headcopy != NULL)
	{
		for (n = 0; (n < index) && (headcopy != NULL); n++)
			headcopy = headcopy->next;
		return (headcopy);
	}
	else
		return (NULL);
}
