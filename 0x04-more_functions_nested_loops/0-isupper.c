#include <stdio.h>
/**
 * _isupper - check for uppercase character
 *
 * @c: character tobe checked
 *
 * Return: returns either 1 or 0
 */
int _isupper(int c)
{
	char l, i;
	i = (char)c;


	for (l = 'A'; l <= 'Z'; l++)
	{
		if (l == i)
		{
			return (1);
		}
	}
	return (0);
}
