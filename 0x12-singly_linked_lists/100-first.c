#include <stdio.h>
/**
 * first - function that prints
 */
void first(void) __attribute__ ((constructor));
/* by nora jeout */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
