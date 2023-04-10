#include <stdio.h>

/**
 * main - the main function for printing the lowercase alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
