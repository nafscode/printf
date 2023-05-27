#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");

	printf("String:[%s]\n", "I am a string !");
	printf("Character:[%c]\n", 'H');
	printf("Percent:[%%]\n");

	return (0);
}
