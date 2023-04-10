#include <stdio.h>

/**
 * main - the main function for single digits of base 10
 *
 * Return: always 0
 */

int main(void)
{
	unsigned int j; /* is positive */

	while (j < 10)
	{
		printf("%d", j);
		j++;
	}
	printf("\n");
	return (0);
}
