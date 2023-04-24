#include "main.h"


/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @k: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, flg_t *k)
{
	(void)k;
	_putchar(va_arg(l, int));
	return (1);
}
