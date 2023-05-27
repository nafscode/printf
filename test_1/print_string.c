#include "main.h"

/**
 * print_string - A function that print a string by looping
 * through all characters
 * @arg: argument from va_list
 * @func: pointer to struct that determines what function based on flag
 * Return: number of character printed
 */

int print_string(va_list arg, flag_t *func)
{
	char *str = va_arg(arg, char *);

	(void)func;

	if (!str)
		str = "(null)";
	return (_puts(str));
}
