#include "main.h"

/**
 * counter_digits - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int counter_digits(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
	u = i * -1;
	else
	u = i;
	while (u != 0)
	{
	u /= 10;
	d++;
	}
	return (d);
}
