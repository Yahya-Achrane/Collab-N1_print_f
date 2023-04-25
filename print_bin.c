#include "main.h"


/**
 * print_bin - prints a number in base 2
 * @l: va_list arguments from _printf
 * @k: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls _convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_bin(va_list l, flg_t *k)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = _convert(num, 2, 0);

	(void)k;
	return (_putstr(str));
}
