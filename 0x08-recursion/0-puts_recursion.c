#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: parameter
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
	{
	_putchar('\n');
	}
}
