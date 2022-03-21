#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (x = (i - 1); x >= 0; x--)
		_putchar (s[x]);
	_putchar ('\n');
}
