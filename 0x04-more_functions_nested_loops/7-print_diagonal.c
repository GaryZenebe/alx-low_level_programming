#include "main.h"
/**
 * print_diagonal - print character
 *
 * @n: number of times \ to be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i == n - 1)
		{
			break;
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar(' ');
		}
	}
}
