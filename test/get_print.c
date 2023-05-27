#include "main.h"

/**
 * get_print - A function that get the right funcion to print based
 * on specifier
 * @s: specifier
 * Return: a pointer to the function to be printed
 */

int (*get_print(char s))(va_list, flag_t *)
{
	rf array[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};
	int flags = 3;

	register int i;

	for (i = 0; i < flags; i++)
		if (array[i].spec == s)
			return (array[i].func);

	return (NULL);
}
