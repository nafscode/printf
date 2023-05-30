#include "main.h"

/**
 * print_bin - prints a number in base 2
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */
int print_bin(va_list arg, flag_t *flag)
{
	unsigned int ui = va_arg(arg, unsigned int);
	char *s = translate(ui, 2, 0);

	(void)flag;
	return (_puts(s));
}
