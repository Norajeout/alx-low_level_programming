#include "lists.h"
/* noraaaaa*/
/**
 * pop_listint - deletes the head node
 * @head: parameter
 * Return: result
 */
int pop_listint(listint_t **head)
{
	listint_t *don;
	int i;

	if (!(*head))
		return (0);
	don = *head;
	i = don->n;
	(*head) = (*head)->next;
	free(don);
	return (i);
}
