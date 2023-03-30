#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len2 = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[len2] != '\0' && len2 < n)
	{
		dest[len + len] = src[len];
	}
	dest[len + len] = '\0';
	return (dest);
}
