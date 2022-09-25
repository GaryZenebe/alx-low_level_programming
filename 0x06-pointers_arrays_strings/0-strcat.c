#include "main.h"
/**
 * *_strcat - concatenated two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 *
 * Return - the concatenatd string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, counter = 0, j = 0;

	while (dest[i] != '\0')
	{
		counter++;
		i++;
	}
	while (src[j] != '\0')
	{
		dest[counter] = src[j];
		j++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
