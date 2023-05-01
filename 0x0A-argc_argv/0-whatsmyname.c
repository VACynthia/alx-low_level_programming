#include "main.h"

/**
 * main - program that prints its name
 * @argv: array of pointer to string
 * @argc: unused parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	/* Address of first element of array is the program name */
	printf("%p\n", *argv);

	return (0);
}
