#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct flg - struct containing flags.
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flg
{
	int plus;
	int space;
	int hash;
} flg_t;

/**
 * struct printer - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printer
{
	char a;
	int (*k)(va_list dp, flg_t *k);
} per;


/* write_funcs */
int _putchar(char c);
int _putstr(char *str);

/* print_percent */
int _percent(va_list l, flg_t *k);

/* _printf */
int _printf(const char *format, ...);

/* _print */
int (*_print(char s))(va_list, flg_t *);

/* _flag */
int _flag(char s, flg_t *k);

int print_string(va_list l, flg_t *k);
int print_char(va_list l, flg_t *k);
int integer(va_list l, flg_t *k);

void print_numbers(int n);
int counter_digits(int i);

int print_bin(va_list l, flg_t *k);
char *_convert(unsigned long int num, int base, int lowcase);

#endif
