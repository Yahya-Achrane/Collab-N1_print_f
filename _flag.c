#include "main.h"

/**
 * _flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @k: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */

int	_flag(char s, flg_t *k)
{

	int i = 0;

	switch (s)
	{
		case '+':
			k->plus = 1;
			i = 1;
			break;
		case ' ':
			k->space = 1;
			i = 1;
			break;
		case '#':
			k->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
