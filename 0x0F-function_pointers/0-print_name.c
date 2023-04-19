#include "function_pointers.h"
#include <stdio.h>
/* by nora jeout */
/*
 * print_name - print name using pointer to function
 * @f : pointer to function
 * @name : string to add
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
	{
		if (!name || !f)
			return;


		f(name);
	}
