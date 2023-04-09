#include "main.h"

/**
 * _strlen -  a function that return lenght of string
 * @s: pointer variable
 * Return: Always i (Success)
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
