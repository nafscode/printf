#include "main.h"

/**
 * addr_print - prints address of input in hex format
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */

int addr_print(va_list arg, flag_t *flag)
{
	char *c;
	unsigned long int li = va_arg(arg, unsigned long int);

	register int n = 0;

	(void)flag;

	if (!li)
		return (_puts("(nil)"));
	c = translate(li, 16, 1);
	n += _puts("0x");
	n += _puts(c);
	return (n);
}
