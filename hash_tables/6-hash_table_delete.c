#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
