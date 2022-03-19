#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * should end with a \n
 * @n: Number od times the character \ should be printed
 * Return: void
*/

void print_diagonal(int n)
{
	int i, space;

		for (i = 0; i < n ; i++)
		{
			for (space = 0; space < i ; space++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			if (i < (n - 1))
				_putchar('\n');
		}
		_putchar('\n');
}
