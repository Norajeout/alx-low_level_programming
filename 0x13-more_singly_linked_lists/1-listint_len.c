#include "lists.h"
/* by nora jeout */
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: parameter
 * Return: results
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
