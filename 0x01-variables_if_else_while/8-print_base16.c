#include <stdio.h>

/**
 * main - the main funtion for printing hexadecimal 16
 *
 * Return: 0
 */

int main(void)
{
	int f;
	char g;

	for (f = '0' ; f <= '9' ; f++)
	{
		putchar(f);
	}
	for (g = 'a' ; g <= 'f' ; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}

