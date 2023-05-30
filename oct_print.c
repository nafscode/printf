#include "main.h"

/**
 * oct_print - prints a number in base 8
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */
int oct_print(va_list arg, flag_t *flag)
{
	unsigned int ui = va_arg(arg, unsigned int);
	char *s = translate(ui, 8, 0);
	int i = 0;

	if (flag->pound == 1 && s[0] != '0')
		i += _putchar('0');
	i += _puts(s);
	return (i);
}
