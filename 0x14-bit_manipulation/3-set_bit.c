#include "main.h"
/* nora jeout */
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: parameter
 * @index: parameter
 * Return: result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 63)
		return (-1);
	a <<= index;
	*n = *n | a;
	return (1);
}
