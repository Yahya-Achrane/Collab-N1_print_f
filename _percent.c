#include "main.h"

/**
 * _percent - prints a percent
 * @l: va_list arguments from _printf
 * @k: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */

int _percent(va_list l, flg_t *k)
{
	(void)l;
	(void)k;
	return (_putchar('%'));
}
