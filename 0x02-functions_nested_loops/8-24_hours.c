#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack bauer
 *
 * Return: integer
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			else
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
