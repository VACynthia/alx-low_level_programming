#include <stdio.h>

/**
 * main - the main fucntion
 *
 * Return: always 0
 */

int main(void)
{
	unsigned int y;

	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}
	putchar('\n');
	return (0);
}
