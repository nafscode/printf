#include "main.h"

/**
 * _printf - A function that prints based on the format specified
 * @format: A pointer to characters and specifier
 * Return: lenght of output
 */

int _printf(const char *format, ...)
{
	int (*the_func)(va_list, flag_t *);
	const char *ptr;
	va_list args;
	flag_t flags = {0, 0, 0};

	register int count = 0;

	va_start(args, format);

	/** if format is NULL or an empty string */
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	/** if format contains two % */
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
				{
					count += _putchar('%');
					continue;
				}
				while (get_flag(*ptr, &flags))
					ptr++;
				the_func = get_print(*ptr);
				count += (the_func)
					? the_func(args, &flags)
					: _printf("%%%c", *ptr);
		}
		else
			count += _putchar(*ptr);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
