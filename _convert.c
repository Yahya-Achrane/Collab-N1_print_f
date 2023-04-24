#include "main.h"

int	_convert(unsigned long i)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (i >= 16)
		count = _convert(i / 16);
	count += _putchar(hex[i % 16]);
	return (count);
}
