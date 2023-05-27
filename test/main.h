#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 *  struct flag - struct specifing flags to turn on
 * @plus: +
 * @space: ' '
 * @pound: #
 */

typedef struct flags
{
	int plus;
	int space;
	int pound;
} flag_t;

/**
 * struct rightFunction - Struct to choose the right function based
 * based on format specifier
 * @spec: specifier
 * @flag: pointer to function
 */

typedef struct rightFunction
{
	char spec;
	int (*func)(va_list arg, flag_t *flag);
} rf;

int _putchar(char c);
int _puts(char *str);
int print_char(va_list arg, flag_t *flag); /** prints character */
int print_string(va_list arg, flag_t *flag); /** prints string */
int print_percent(va_list arg, flag_t *flag); /** prints percent */
int get_flag(char s, flag_t *flag); /** get flag */
int (*get_print(char s))(va_list, flag_t *); /** get function to print */
int _printf(const char *format, ...); /** main print function */

#endif
