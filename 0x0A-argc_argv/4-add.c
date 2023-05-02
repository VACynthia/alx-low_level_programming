#include "main.h"

/**
 * main - program that adds positive numbers
 * @argv: arguments
 * @argc: unused variable
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;
	char *arg;

	for (i = 1 ; i < argc ; i++)
	{
		arg =  argv[i];

		for (j = 0 ; arg[j] != '\0' ; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d", sum);
	return (0);
}
