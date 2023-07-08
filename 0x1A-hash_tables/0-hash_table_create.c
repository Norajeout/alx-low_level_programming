#include "hash_tables.h"

/* BY me*/

/**
 * hash_table_create -> creates a hash table
 * @size: parameter
 * Return: entry point
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
