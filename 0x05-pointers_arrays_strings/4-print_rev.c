#include "main.h"
/**
 * print_rev - prints a given string in reverse
 * @s: given string to be reversed
 *
 */
void print_rev(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	counter--;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');

}
