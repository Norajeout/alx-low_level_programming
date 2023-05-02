#include "lists.h"
/*  by nora jeout */
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: parameter
 * Return: results
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
