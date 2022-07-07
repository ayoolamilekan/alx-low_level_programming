#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i = 0;
	char ptch[8] = "_putchar";

	do {
		_putchar(ptch[i]);
		i++;
	} while (i < 8);
	_putchar('\n');
	return (0);
}

