#include "main.h"

/**
 * factorial - factorial function that prints the factorial of a number
 * @n: parameter for the number
 * Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1); /* to indicate error factorial 0 is 1 */
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
	return (0);
}
