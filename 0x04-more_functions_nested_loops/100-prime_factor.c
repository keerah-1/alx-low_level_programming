#include <stdio.h>
#include <math.h>
#include <stdint.h>

/**
 * main - Entry point
 * Prints largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 if (Success)
*/

int main(void)
{
	long int i, max, n;

	max = -1;
	n = 612852475143;
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);

} 
