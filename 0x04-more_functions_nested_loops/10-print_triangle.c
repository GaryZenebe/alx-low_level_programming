#include "main.h"
/**
 * print_triangle - prints the character in tirangle shape
 * @size: contains integer for the size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = size; k >= i; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
