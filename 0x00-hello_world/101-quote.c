#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char val[100];

	val = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s", val);
}

