#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to strings in the arguments
 *
 * Return: 0 when successful
 * and 1 otherwise
 */

int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int result = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
