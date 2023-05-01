#include "main.h"

/**
 * main - program that prints the number of arguments passed
 * @argc: counts arguments
 * @argv: unused paramter
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv; /* skip unused parameter */
	printf("argc = %d\n", argc - 1);

	return (0);
}
