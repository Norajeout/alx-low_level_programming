#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: parameter
 * @str: parameter
 * Return: new list
 */
/* BY NRA JEOUT*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *PT;

	PT = malloc(sizeof(list_t));
	if (!PT)
		return (NULL);
	PT->str = strdup(str);
	PT->len = strlen(str);
	PT->next = *head;
	*head = PT;
	return (PT);
}
