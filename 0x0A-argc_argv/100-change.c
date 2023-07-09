#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: integer count of cmdline arguments
 * @argv: array of cmdline arguments
 *
 * Description: Usage-> ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: success (0), error (1)
 */


int main(int argc, char **argv)
{
	/*declare variables*/
	int num, i, count, tmp_num;
	int coins[5] = {25, 10, 5, 2, 1};

	count = 0;
	tmp_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 6; i++)
	{
		if (num >= coins[i])
		{
			if (num % coins[i] >= 0)
			{
				tmp_num = num / coins[i];
				num %= coins[i];
				count += tmp_num;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
