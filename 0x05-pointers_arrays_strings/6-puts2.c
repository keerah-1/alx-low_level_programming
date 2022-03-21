#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, l, x;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		x = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = x;
	}
}
