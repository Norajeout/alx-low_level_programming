#include "lists.h"
/* noraatiiiiiiiiiiiiiiiiii*/
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: parameter
 * @n: parameter
 * Return: result
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *me;

	me = malloc(sizeof(listint_t));
	if (!me)
		return (NULL);
	me->n = n;
	me->next = *head;
	*head = me;
	return (me);
}
