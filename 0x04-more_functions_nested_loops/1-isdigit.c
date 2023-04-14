#include "main.h"

/**
 * _isdigit - function that checks for digits 0 to 9
 * @c: function parameter
 * Return: 1 if it's a digit and 0 otherwise
 */

int _isdigit(int c)
{	/* ascii values of 0 to 9 */
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
