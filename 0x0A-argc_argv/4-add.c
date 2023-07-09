#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: integer count of the cmdline arguments
 * @argv: array of cmdline arguments
 *
 * Description: program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, then a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * assumes that numbers and their sum can be stored in an int
 * Return: success (0) error (1)
 */


int main(int argc, char **argv)
{
	int sum, i;

	/*initlz variables*/
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
