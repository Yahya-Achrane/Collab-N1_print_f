#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @k: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, flg_t *k)
{
	char *s = va_arg(l, char *);

	(void)k;

	if (!s)
		s = "(null)";
	return (_putstr(s));
}
