#include "main.h"

/**
 * _putchar - writes the character wr to stdout
 * @wr: The character to print
 *
 * Return: On success 1.
 */

int	ft_putchar(char wr)
{
	write(1, &wr, 1);
	return (1);
}
