#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list.
 * @h: list
 * Return: number of elements in a linked
 */
/* BY NORA JEOUT */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
