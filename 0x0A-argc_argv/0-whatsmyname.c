#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: integer count of the cmdline arguments
 * @argv: array of cmdline arguments
 *
 * Description: program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 *
 * Return: success (0)
 */


int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
