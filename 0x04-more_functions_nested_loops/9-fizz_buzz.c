#include<stdio.h>
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf("%c", ' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf("%c", ' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf("%c", ' ');
		}
		else
		{
			printf("%d", i);
			printf("%c", ' ');
		}
	}
	printf("%c", '\n');
	return (0);
}
