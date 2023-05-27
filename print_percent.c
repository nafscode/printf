#include "main.h"

/**
 * print_percent - Prints the percent sign
 * @arg: argument from va_list
 * @func: pointer to the struct that dettermin what funcion based on flag
 * Return: number of char printed
 */

int print_percent(va_list arg, flag_t *func)
{
	(void)arg;
	(void)func;

	return (_putchar('%'));
}
