#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @i: parameter to be printed
 *
 * Return: k
 */

int print_last_digit(int i)
{	/* k represents the last digit of i */
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
