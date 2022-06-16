#include "lists.h"

/**
 * add_node_end - fills memory with a constant byte
 * @head: is the owner
 * @str: string
 * Return: an address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *headcopy;
	size_t c;

	headcopy = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (c = 0; new->str[c] != '\0'; c++)
		;
	new->len = c;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (headcopy->next != NULL)
			headcopy = headcopy->next;
		new->next = (headcopy)->next;
		(headcopy)->next = new;
	}

	return (*head);
}
