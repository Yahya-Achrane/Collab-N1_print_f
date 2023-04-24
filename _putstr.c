#include "main.h"
/**
 * _putstr - puts a string
 * @s: argument.
 * Return: int
 */

int	_putstr(char *s)
{
	int	i = -1;

	if (!s)
		return (_putstr("(null)"));
	while (s[++i])
		write(1, &s[i], 1);
	return (i);
}
