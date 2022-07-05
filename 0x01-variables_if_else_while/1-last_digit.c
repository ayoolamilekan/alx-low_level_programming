#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{

	
	char val[20] = "Last digit of"; 
       /*val2[20], val3[30], val4[30];*/
	
	char val2[30] = "and is greater than 5";
	char val3[20] = "and is 0";
	char val4[30] = "and is less than 6 and not 0";

	int n, lastnumber;
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	lastnumber = n % 10;
	
	if (lastnumber > 5)
	{
		printf("%s %d is %d %s\n", val, n, lastnumber, val2);
	}
	if (lastnumber == 0)
	{
		printf("%s %d is %d %s\n", val, n, lastnumber, val3);
	}
	if ((lastnumber < 6) && (lastnumber != 0))
	{
		printf("%s %d is %d %s\n", val, n, lastnumber, val4);
	}
	return (0);
}
