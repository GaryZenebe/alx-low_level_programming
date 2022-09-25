#include <stdio.h>
/**
 * swap_int - swaps the value of 2 integers
 * @a: contains address of an integer variable
 * @b: contains address of an integer variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
