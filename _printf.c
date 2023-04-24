#include "main.h"

/**
 * _check - checks the code
 * @vd: argument
 * @olya: argument
 *
 * Return: int.
 */
int	_check(va_list olya, char vd)
{
	int plus;

	plus = 0;
	if (vd == 'c')
		plus += _putchar(va_arg(olya, int));
	else if (vd == 's')
		plus += _putstr(va_arg(olya, char *));
	else if (vd == '%')
		plus += _putchar('%');
	else
		plus += _putchar(vd);
	return (plus);
}
/**
 * _printf - checks the code
 * @format: argument
 *
 * Return: int.
 */

int	_printf(const char *format, ...)
{
	int i;
	int plus;
	va_list olya;

	va_start(olya, format);
	i = 0;
	plus = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			plus = plus + _check(olya, format[i + 1]);
			i++;
		}
		else
			plus += _putchar(format[i]);
		i++;
	}
	va_end(olya);
	return (plus);
}
