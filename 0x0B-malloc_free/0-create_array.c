#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: the array size
 * @c: parameter
 * @s: initialization for array
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = s;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
		if (arr == NULL)
		{/* malloc has failed */
			return (NULL);

		}
	for (n = 0 ; n < size ; n++)
	{
		arr[n] = c;
	}
	return (arr);
}
