#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: integer count of the cmdline arguments
 * @argv: array of cmdline arguments
 *
 * Description: program that multiplies two numbers.
 * program should print the result of the multiplication, then a new line
 * You can assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * program should print Error, followed by a new line, and return 1
 *
 * Return: success (0) error (1)
 */


int main(int argc, char **argv)
{
	/*initlz variables*/
	int no1, no2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	printf("%i\n", no1 * no2);
	return (0);
}
