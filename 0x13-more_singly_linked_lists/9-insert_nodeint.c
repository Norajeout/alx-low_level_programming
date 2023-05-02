#include "lists.h"
/* nora jeoout */
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: result
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int j = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (j < idx - 1)
	{
		if (!temp)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		j++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
