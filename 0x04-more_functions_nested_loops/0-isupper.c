#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: parameter
 * Return: 1 if it is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
