#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers
 *
 * @n: first sart of anumber to be added
 *
 * Return: return integer
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n == 98)
		{
			break;
		}
		else
		{
			printf("%c",',');
			n = n + 1;
		}
	}
	printf("%c", '\n');
}
