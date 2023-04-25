#include "main.h"

/**
 * _print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * function_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*_print(char s))(va_list, flg_t *)
{
	per function_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', _percent},
		{'i', integer},
		{'d', integer}
		};
	int flags = 5;

	int i;

	for (i = 0; i < flags; i++)
		if (function_arr[i].a == s)
			return (function_arr[i].k);
	return (NULL);
}
