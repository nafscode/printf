#include "main.h"

/**
 * get_flag - A function that specify what flag to use
 * @s: specifier
 * @flag: A pointer the struct that determin function to use based on flag
 * Return: 0
 */

int get_flag(char s, flag_t *flag)
{
	int n = 0;

	switch (s)
	{
		case '+':
			flag->plus = 1;
			n = 1;
			break;
		case ' ':
			flag->space = 1;
			n = 1;
			break;
		case '#':
			flag->pound = 1;
			n = 1;
			break;
	}

	return (n);
}
