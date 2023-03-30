#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: destination of array
 * @src: source array
 * Return: string that is copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
