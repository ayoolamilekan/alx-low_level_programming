#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: integer count of cmdline arguments
 * @argv: array of the cmdline arguments
 *
 * Description: prints the number of cmdline arguments
 * followed by a new line
 *
 * Return: success(0)
 */


int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
