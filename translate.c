#include "main.h"

/**
 * translate - translates number and its and base into string
 * @n: inputted number
 * @b: inputted base
 * @lc: flag if future hexadecimal values need to be lowercase
 *
 * Return: the translated number as a string
 */
char *translate(unsigned long int n, int b, int lc)
{
	static char *cpy;
	static char c[50];
	char *res;

	cpy = (lc)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	res = &c[49];
	*res = '\0';
	do {
		*--res = cpy[n % b];
		n /= b;
	} while (n != 0);

	return (res);
}
