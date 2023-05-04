#include "main.h"

/* nora jeoutt*/
/**
 * flip_bits - Entry point
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int h;
	int u = 0;

	h = n ^ m;

	while (h)
	{
		u++;
		h &= (h - 1);
	}

	return (u);
}
