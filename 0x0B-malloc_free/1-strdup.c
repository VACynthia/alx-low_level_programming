#include "main.h"

/**
 * _strdup - function returns pointer to duplicated string
 *
 * Return: pointer on success
 * and NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}/* length of string */
	size_t len = strlen(str);

	/* allocate memory for the copy */
	char * cpy = malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}

	/* copy string and null terminator */
	strcpy(cpy, str);
	cpy[len] = '\0';

	return (cpy);
}

