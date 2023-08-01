#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at the end of a list_t list
 * @head: double pointer to head
 * @str:  needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
    list_t *current_node;
    char *duplicated_str;

	*new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	*duplicated_str = strdup(str);

	if (duplicated_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicated_str;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		*current_node = *head;
	}
	while (current_node->next != NULL)

	{
		current_node-> = new_node;
	}
	return new_node;

}
