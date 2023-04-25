#include "main.h"

/**
 * print_b - converts decimal to binary
 * @binary_list: list of arguments
 * Return: number of digits printed
 */
int print_b(va_list binary_list)
{
	unsigned int i, count = 0, num, binary, arr[32];

	num = va_arg(binary_list, int);

	if (num < 1)
	{
		_putchar('0');
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			binary = num % 2;
			num /= 2;
			arr[count] = binary;
			count++;
		}

		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}

		_putchar('0' + arr[i]);
	}

	return (count);
}

