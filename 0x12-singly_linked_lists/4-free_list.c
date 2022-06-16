#include "lists.h"

/**
 * free_list - fills memory with a constant byte
 * @head: is the owner
 * Return: an int
 */

void free_list(list_t *head)
{
	list_t *save;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			save = head->next;
			free(head->str);
			free(head);
			head = save;
		}
		free(head->str);
		free(head);
	}
}
