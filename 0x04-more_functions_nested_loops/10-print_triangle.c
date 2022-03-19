#include "main.h"
/**
 * print_triangle - Prints a triangle
 * followed by a new line
 * @size: The size of the triangle
 * Return: void
*/

void print_triangle(int size)
{
	int i, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}
			for (hash = 1; hash <= i; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
}
