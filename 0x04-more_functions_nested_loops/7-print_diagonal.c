#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input value to check
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j <= i)
		{
			if (j != i)
				_putchar(' ');
			else

