#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */

int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar (m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
