#include "lists.h"
/* nora jeout */
/**
 * free_listint - frees a listint_t list.
 * @head: parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *you;

	while (head)
	{
		you = head;
		head = head->next;
		free(you);
	}
}
