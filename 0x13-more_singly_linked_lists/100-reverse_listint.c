#include "lists.h"
/**
* *reverse_listint - reverse a list
* @head: pointer
* Return: reversed list
*/
/* nora je out*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;

	}

	*head = prev;
	return (*head);
}
