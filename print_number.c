#include "main.h"

/**
 * count_num - returns the number of digits in an integer
 * @num: integer to check
 *
 * Return: number of digits
 */
int count_num(int num)
{
	unsigned int n = 0, o;

	if (num < 0)
		o = num * -1;
	else
		o = num;
	while (o != 0)
	{
		o /= 10;
		n++;
	}
	return (n);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @i: integer to be printed
 *
 * Return: void
 */
void print_number(int i)
{
	unsigned int num;

	if (i < 0)
	{
		_putchar('-');
		num = -i;
	}
	else
		num = i;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_integer - prints an integer
 * @arg: argument(s) from va_list
 * @flag: pointer to the struct that determines
 * what function based on flag
 * Return: number of character(s) printed
 */
int print_integer(va_list arg, flag_t *flag)
{
	int num = va_arg(arg, int);
	int len = count_num(num);

	if (flag->space == 1 && flag->plus == 0 && num >= 0)
		len += _putchar(' ');
	if (flag->plus == 1 && num >= 0)
		len += _putchar('+');
	if (num <= 0)
		len++;
	print_number(num);
	return (len);
}

/**
 * print_uns - prints an unsigned integer
 * @arg: arguments(s) from va_list
 * @flag: pointer to the struct that determines
 * what function based on flag
 *
 * Return: number of character(s) printed
 */
int print_uns(va_list arg, flag_t *flag)
{
	unsigned int un = va_arg(arg, unsigned int);
	char *s = translate(un, 10, 0);

	(void)flag;
	return (_puts(s));
}
