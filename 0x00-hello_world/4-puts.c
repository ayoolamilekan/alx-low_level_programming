#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * char - declare char array
 * initialize the array
 *
 * display string
 * Return: always 0 (success)
 */
int main(void)
{
	char val[100];
	char val2[5];

	strcpy(val, "\"Programming is like building a multilingual puzzle");
	strcpy(val2, "\n");

	puts(val);
	puts(val2);
	return (0);
}

