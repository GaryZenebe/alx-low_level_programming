#include <stdio.h>
#include "holberton.h"
/**
 * main - this is holberton main function
 *
*/
int main(void)
{
	char text[] = "Holberton";
	
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
