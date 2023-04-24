#include "main.h"
/**
 * _putstr - puts a string
 *@str: string
 * Return: int
 */

int _putstr(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
