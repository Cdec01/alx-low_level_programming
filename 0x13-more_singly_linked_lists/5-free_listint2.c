#include "lists.h"

/**
 * free_listint2 - fills memory with a constant byte
 * @head: is the ownwer
 * Return: an int
 */

void free_listint2(listint_t **head)
{
	listint_t *save;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			save = (*head)->next;
			free(*head);
			*head = save;
		}
		free(*head);
		*head = NULL;
	}
}
