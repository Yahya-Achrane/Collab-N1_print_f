#include "main.h"

/**
 * _convert - converts num and base into str
 * @num: input number
 * @base: input base
 * @lowcase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *_convert(unsigned long int num, int base, int lowcase)
{
	static char *rep;
	static char buff[50];
	char *pt;

	rep = (lowcase)
	? "0123456789abcdef"
	: "0123456789ABCDEF";
	pt = &buff[49];
	*pt = '\0';
	do {
	*--pt = rep[num % base];
	num /= base;
	} while (num != 0);

	return (pt);
}
