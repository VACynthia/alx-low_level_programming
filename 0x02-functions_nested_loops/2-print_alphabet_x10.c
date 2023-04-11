#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 1 ; n <= 10 ; n++)
	{
	for (m = 'a' ; m <= 'z' ; m++)

		_putchar(m);
	_putchar('\n');
	}
}
