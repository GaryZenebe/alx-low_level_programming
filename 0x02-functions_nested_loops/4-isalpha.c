#include "main.h"
/**
 *  _isalpha - check for alphabetic character
 *
 *  @c: the variable to be checked
 *
 *  Return: either 1 or 0
 */
int _isalpha(int c)
{
	char i, j = 'A';

	for (i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
	{
		if (c == i || c == j)
			return (1);
	}
	return (0);
}
