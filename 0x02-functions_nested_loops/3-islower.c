#include "main.h"
/**
 *  _islower - check is the character is lowercase
 *
 * @c: character to be checked
 *
 *  Return: either 1 or 0
 */
int _islower(int c)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
		{
			return (1);
		}
	}
	return (0);
}

