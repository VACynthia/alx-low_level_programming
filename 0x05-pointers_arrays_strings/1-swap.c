#include "main.h"

/**
 * swap_int - swap too values of two integers
 * @a: value 1
 * @b: value 1
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
