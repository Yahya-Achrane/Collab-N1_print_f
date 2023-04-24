#include "main.h"

int	_putstr(char *s)
{
	int	i = 0;

	if (!s)
		return (_putstr("(null)"));
	while (s[++i])
		write(1, &s[i], 1);
	return (i);
}
