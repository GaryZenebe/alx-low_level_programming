#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n element of an array
 * @a: passed address of array
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i = 0, counter = 1;

	if (n > 0)
	{
		while (counter <= n)
		{
			if (counter == n)
			{
				printf("%d\n", *(a + i));
				i++;
				counter++;
			}
			else
			{
				printf("%d, ", *(a + i));
				i++;
				counter++;
			}
		}
	}
	else
	{
		printf('\n');
	}
}
