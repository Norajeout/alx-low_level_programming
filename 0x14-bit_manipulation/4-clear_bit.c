#include "main.h"

/* nora jeout  */
/**
 * clear_bit - Entry point
 * @n:pointer to unsigned long int
 * @index: unsigned int
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int m;

	if (index > 64)
		return (-1);

	m = index;

	for (i = 1; m > 0; i *= 2, m--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
