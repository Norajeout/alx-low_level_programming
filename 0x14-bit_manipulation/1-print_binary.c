#include "main.h"
/* nora jeouttt*/
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * Return: result
 */
void print_binary(unsigned long int n)
{
	int i = 63, mani = 0;
	unsigned long int number;

	while (i >= 0)
	{
		number = n >> i;

		if (number & 1)
		{
			_putchar('1');
			mani++;
		} else if (mani)
			_putchar('0');
		i--;
	}
	if (mani == 0)
		_putchar('0');
}
