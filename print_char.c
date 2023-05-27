#include "main.h"

/**
 * print_char - A function to print character
 * @arg: argument form va_list
 * @func: pointer to sruct that determine the right function based on flag
 * Return: number of character printed
 */

int print_char(va_list arg, flag_t *func)
{
	(void)func;
	_putchar(va_arg(arg, int));

	return (1);
}
