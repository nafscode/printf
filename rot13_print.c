#include "main.h"

/**
 * rot13_print - prints a string using rot13
 * @arg: argument(s) from va_list
 * @flag: pointer to struct that determines
 * the right function based on flag
 *
 * Return: length of printed string
 */

int rot13_print(va_list arg, flag_t *flag)
{
	int n, o;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(arg, char *);

	(void)flag;
	for (o = 0; str[o]; o++)
	{
		if (str[o] < 'A' || (str[o] > 'Z' && str[o] < 'a') || str[o] > 'z')
			_putchar(str[o]);
		else
		{
			for (n = 0; n <= 52; n++)
			{
				if (str[o] == str1[n])
					_putchar(str2[n]);
			}
		}
	}

	return (o);
}
