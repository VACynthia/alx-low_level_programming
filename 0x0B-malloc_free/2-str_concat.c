#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer upon success and NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, len;
	char *rslt;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j++] != '\0')
			len2++;
	}
	len  = len1 + len2;

	rslt = (char *)malloc((sizeof(char) * len) + 1);
	if (rslt == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
		rslt[i] = s1[i];
	for (j = 0 ; j < len2 ; j++)
		rslt[len1 + j] = s2[j];
	rslt[len] = '\0';
	return (rslt);
}
