#include "main.h"

/**
 * print_percent - Prints the percent sign
 * @arg: argument from va_list
 * @flag: pointer to the struct that dettermin what funcion based on flag
 * Return: number of char printed
 */

int print_percent(va_list arg, flag_t *flag)
{
	(void)arg;
	(void)flag;

	return (_putchar('%'));
}
