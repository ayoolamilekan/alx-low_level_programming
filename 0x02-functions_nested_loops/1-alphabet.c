#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - func
 *
 *
 *
 *
 */

void print_alphabet(void)
{
	int i = 0;
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	do {
		_putchar(alphabets[i]);
		i++;
	} while (i < 26);
	_putchar('\n');
}
