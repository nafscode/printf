#include <unistd.h>
#include "main.h"

/**
 * _puts - A function that writes string to the sdout
 * @str: pointer to the string
 * Return: numbers of character written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
