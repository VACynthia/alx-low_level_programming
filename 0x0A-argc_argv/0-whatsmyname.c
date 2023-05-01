#include "main.h"

/**
 * main - program that prints its name
 * @argv: array of pointer to string
 * @argc: number of arguments on command line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	/* Address of first element of array is the program name */
	printf("%s\n", *argv);

	return (0);
}
