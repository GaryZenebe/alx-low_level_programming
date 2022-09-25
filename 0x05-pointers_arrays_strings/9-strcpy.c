#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination of the copy operation
 * @src: source to be copied
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
