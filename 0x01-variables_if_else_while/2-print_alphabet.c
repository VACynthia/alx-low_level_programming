#include <stdio.h>

/**
 * main - the main function
 *
 * print_alphabet - program that prints the alphabet in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k); /* specifier for type char variables */
		k++;
	}
	putchar('\n'); /* only single quites for putchar */
	return (0);
}
