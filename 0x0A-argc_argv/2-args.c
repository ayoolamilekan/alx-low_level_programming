#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: integer count of cmdline arguments
 * @argv: array of cmdline arguments
 *
 * Description: program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * Return: success (0)
 */

int main(int argc, char **argv)
{
	/*declare variables*/
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
