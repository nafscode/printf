#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct specifing flags to turn on
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
 * @func: pointer to function
 */

typedef struct rightFunction
{
	char spec;
	int (*func)(va_list arg, flag_t *flag);
} rf;

/* custom putchar and puts functions */
int _putchar(char c);
int _puts(char *str);

/* prints character */
int print_char(va_list arg, flag_t *flag);

/* prints string */
int print_string(va_list arg, flag_t *flag);

/* prints percent */
int print_percent(va_list arg, flag_t *flag);

/* get flag */
int get_flag(char s, flag_t *flag);

/* get function to print */
int (*get_print(char s))(va_list, flag_t *);

/* main print function */
int _printf(const char *format, ...);

/* print numbers */
int print_integer(va_list arg, flag_t *flag);
void print_number(int i);
int count_num(int num);

/* translator */
char *translate(unsigned long int n, int b, int lc);

/* print binary */
int print_bin(va_list arg, flag_t *flag);

/* Task 3 functions */
int print_uns(va_list arg, flag_t *flag);
int oct_print(va_list arg, flag_t *flag);
int hex_print(va_list arg, flag_t *flag);
int big_hex_print(va_list arg, flag_t *flag);

/* Task 5 function */
int big_S_print(va_list arg, flag_t *flag);

/* Task 6 function */
int addr_print(va_list arg, flag_t *flag);

/* Task 14 function */
int reverse_print(va_list arg, flag_t *flag);

/* Task 15 function */
int rot13_print(va_list arg, flag_t *flag);
#endif
