#include "main.h"
/**
 * swap_int - a function that  swaps the values of two integers
 * @a: pointer variable one
 * @b: pointer variable two
 * Return: void return nothing
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
