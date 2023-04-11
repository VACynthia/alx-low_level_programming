#include "main.h"

/**
 * _islower - function that checks for the lowercase character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is a lowercase
 * and 0 otherwise
 */

int _islower(int c)
{	/* the ASCII value of lowercase letters from a to z */
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
