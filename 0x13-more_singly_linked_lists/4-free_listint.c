#include "lists.h"

/**
 * free_listint - fills memory with a constant byte
 * @head: is the owner
 * Return: an int
 */

void free_listint(listint_t *head)
{
	listint_t *save;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			save = head->next;
			free(head);
			head = save;
		}
		free(head);
	}
}
