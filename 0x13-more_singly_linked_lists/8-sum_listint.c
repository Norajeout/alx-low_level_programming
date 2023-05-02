#include "lists.h"
/* nora jeout */
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: parameter
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
