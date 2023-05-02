#include "main.h"

/**
 * _strdup - function returns pointer to duplicated string
 * @str: original string
 * Return: pointer on success
 * and NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	char *cpy;
	int n;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	/* length of string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for the copy */
	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}

	/* copy string and null terminator */
	for (n = 0 ; n < len ; n++)
		cpy[n] = str[n];
	cpy[len] = '\0';

	return (cpy);
}
