#include<stdio.h>
/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	long int i, j;
	int x = 0;
	long int n = 612852475143;
	int y = 0;

	for (i = n - 1; i > 1; i--)
	{
		x = 0;
		for (j = i - 1; j > 1; j--)
		{
			if (i % j == 0)
			{
				x++;
			}
		}
		if (x == 0)
		{
			if (n % i == 0)
			{
				printf("%ld", i);
				y++;
				break;
			}
		}
	}
	if (y == 0)
	{
		printf("%ld", n);
	}
	return (0);
}
