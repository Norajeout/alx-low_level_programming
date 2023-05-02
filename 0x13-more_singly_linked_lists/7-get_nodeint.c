#include "lists.h"
/* noratiiii*/
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: parameter
 * @index: parameter
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (!(head->next))
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
