#include "lists.h"
/**
* print_listint_safe - prints a list
* @head: pointer
* Return: the number of nodes
*/
/* nora jr out */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int dif;
	size_t n;
	const listint_t *tmp = NULL;
	const listint_t *node = NULL;

	while (head)

	tmp = head;

	while (tmp)
	{
		dif = head - head->next;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		tmp = tmp->next;
		node = head;
		n = 0;

		while (n < i)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
			if (tmp == node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			node = node->next;
			n++;
		}
		if (!head)
			exit(98);
	}

	return (i);
}
