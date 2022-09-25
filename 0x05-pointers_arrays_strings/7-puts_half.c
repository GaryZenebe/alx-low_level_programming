#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int i = 0, counter = 0;

	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	if (counter % 2 == 0)
	{
		i = counter / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		i = (counter - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
