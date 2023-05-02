#include "lists.h"
/* by nora jeout */
/**
 * free_listint2 - frees a listint_t list.
 * @head: parameter
 * Return: result
 */
void free_listint2(listint_t **head)
{
	listint_t *us;

	if (!head)
		return;
	while (*head)
	{
		us = *head;
		*head = (*head)->next;
		free(us);
	}
	*head = NULL;
}
