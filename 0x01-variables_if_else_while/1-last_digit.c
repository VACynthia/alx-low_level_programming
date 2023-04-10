#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int o; /* variable that represents the last digit of n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	o = n % 10; /* n % 10 is used to find the last digit of n */
	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, o);
	}
	else if (o == 0)
	{
		printf("Last digit of %d is %d and is 0", n, o);
	}
	else if (o < 6 && o != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, o);
	}

	printf("\n");

	return (0);
}
