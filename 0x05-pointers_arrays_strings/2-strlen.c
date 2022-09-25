#include <stdio.h>
/**
 * _strlen - returns the length of a given string
 * @s: pointer to hold the string
 *
 * Return: number of string
 */
int _strlen(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}

	return (counter);
}
