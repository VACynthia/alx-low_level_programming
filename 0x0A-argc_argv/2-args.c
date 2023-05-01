#include "main.h"

/**
 * main - program that prints all arguments received
 * @argc: number of arguments to print
 * @argv: string array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int y;

	for (y = 0 ; y < argc ; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
