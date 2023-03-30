#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 * @count: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(s[i]);
}
