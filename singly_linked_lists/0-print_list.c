#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;

	while (h != NULL)

    if (h->str != NULL)
	{
		printf("%s\n", h->str);
    }
    else
    {
    printf ("[0](nil)")
		c++;
	}

	return (c);
}
