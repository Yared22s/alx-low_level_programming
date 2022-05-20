#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[length])
		length++;

	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	return (new);
}
