#include "main.h"

/**
 * hex_print - prints a number in hexadecimal base,
 * in lowercase
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */
int hex_print(va_list arg, flag_t *flag)
{
	unsigned int ui = va_arg(arg, unsigned int);
	char *s = translate(ui, 16, 1);
	int i = 0;

	if (flag->pound == 1 && s[0] != '0')
		i += _puts("0x");
	i += _puts(s);
	return (i);
}

/**
 * big_hex_print - prints a number in hexadecimal base,
 * in uppercase
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */
int big_hex_print(va_list arg, flag_t *flag)
{
	unsigned int ui = va_arg(arg, unsigned int);
	char *s = translate(ui, 16, 0);
	int i = 0;

	if (flag->pound == 1 && s[0] != '0')
		i += _puts("0X");
	i += _puts(s);
	return (i);
}
