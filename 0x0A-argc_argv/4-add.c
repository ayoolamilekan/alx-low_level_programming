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
	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 0; i < argc; i++)
		{
			printf("before check");
			if (isdigit(argv[i]))
			{
				printf("is a digit");
				sum += atoi(argv[i]);
				printf("added success");
			}
			else
			{
				printf("Error");
				return (0);
			}
		}
	}
	return (0);
}
