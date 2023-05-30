#include "main.h"

/**
 * big_S_print - prints a string of
 * non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: number of character(s) printed
 */
int big_S_print(va_list arg, flag_t *flag)
{
	int n, c = 0;
	char *fin;
	char *str = va_arg(arg, char *);

	(void)flag;
	if (!str)
		return (_puts("(null)"));

	for (n = 0; str[n]; n++)
	{
		if (str[n] > 0 && (str[n] < 32 || str[n] >= 127))
		{
			_puts("\\x");
			c += 2;
			fin = translate(str[n], 16, 0);
			if (!fin[1])
				c += _putchar('0');
			c += _puts(fin);
		}
		else
			c += _putchar(str[n]);
	}
	return (c);
}
