#include <unistd.h>
#include "main.h"

/**
 * _putchar - A function that write character to the stdout. It uses a local
 * buffer of 1024 to write.
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
	static char BUF[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &BUF, i);
		i = 0;
	}
	if (c != -1)
	{
		BUF[i] = c;
		i++;
	}

	return (i);
}
