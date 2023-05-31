#include "main.h"

/**
 * reverse_print - prints a string in reverse
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: length of printed string
 */
int reverse_print(va_list arg, flag_t *flag)
{
	int n = 0, o;
	char *str = va_arg(arg, char *);

	(void)flag;
	if (!str)
		str = "(null)";

	while (str[n])
		n++;

	for (o = n - 1; o >= 0; o--)
		_putchar(str[o]);

	return (n);
}
