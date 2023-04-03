#include "main.h"

/**
 * _strchr - a function that return a  pointer to the first
 *occurrence of the character
 * @s: pointer variable
 * @c: variable need to look at
 * Return: Always *s (Success)
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			break;
		}
		n++;
	}

	return (&s[n]);
}
