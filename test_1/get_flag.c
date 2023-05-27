#include "main.h"

/**
 * get_flag - A function that specify what flag to use
 * @s: specifier
 * @func: A pointer the struct that determin function to use based on flag
 * Return: 0
 */

int get_flag(char s, flag_t *func)
{
	int n = 0;

	switch (s)
	{
		case '+':
			func->plus = 1;
			n = 1;
			break;
		case ' ':
			func->space = 1;
			n = 1;
			break;
		case '#':
			func->pound = 1;
			n = 1;
			break;
	}

	return (n);
}
