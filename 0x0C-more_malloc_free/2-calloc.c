#include "main.h"
#include <stdlib.h>
/* by nora jeout */
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *  Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	s = malloc(nmemb * size);
	if (!s)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
		return (s);
}
