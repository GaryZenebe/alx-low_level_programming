#include "main.h"
/**
 * more_numbers - prints nums
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int k, l;


	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				int a = 0;

				k = i / 10;

				l = i % 10;

				while (a < 2)
				{
					_putchar('0' + k);
					k = l;
					a++;
				}
			}
			else
			{
				_putchar('0' + i);
			}
		}
		_putchar('\n');
	}
}
