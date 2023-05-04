#include "main.h"
/* nora jeout*/
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: parameter
 * Return: results
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = (n << 1) | (b[i] - '0');
		i++;
	}
	return (n);
}
