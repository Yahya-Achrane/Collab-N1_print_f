#include "main.h"

/**
 * integer - prints an integer
 * @l: va_list of arguments from _printf
 * @k: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int integer(va_list l, flg_t *k)
{
	int n = va_arg(l, int);
	int result = counter_digits(n);

	if (k->space == 1 && k->plus == 0 && n >= 0)
		result += _putchar(' ');
	if (k->plus == 1 && n >= 0)
		result += _putchar('+');
	if (n <= 0)
		result++;
	print_numbers(n);
	return (result);
}
