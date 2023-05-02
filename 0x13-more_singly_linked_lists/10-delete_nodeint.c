#include "lists.h"
/* nora jeout */
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: parameter
 * @index: parameter
 * Return: results
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ls, *ls2;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	ls = *head;
	if (index == 0)
	{
		*head = ls->next;
		free(ls);
		return (1);
	}
	while (i < index - 1)
	{
		if (!(ls->next) || !ls)
			return (-1);
		ls = ls->next;
		i++;
	}
	ls2 = ls->next;
	ls->next = ls2->next;
	free(ls2);
	return (1);
}
