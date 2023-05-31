# _printf

## Description

The _printf is a function that mimics the printf function in C programming language. It is used to print output on the screen and allows formatting of the output in numerous ways.

## Prototype
`_printf(const char *format, ...);`

## Usage
* Prints to the standard output according the given format.
* Returns the number of characters printed (excluding the null byte used to end output to strings).
`format` is a character string. It is composed of zero or more directives.
* Files are created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command `gcc -Wall -Werror -Wextra pendantic *.c`.
* It is called as `_printf("format string", arguments...)` where `format string` specifies the output while `arguments` are the variable names corresponding to the format specifier.

## Format Specifiers
| Specifier | Output		|
| :---------| :-----------------|
| c         | Character         |
| s         | String            |
| %         | Percent           |
| d         | Integer           |
| i         | Integer           |
| b         | Binary            |
| u         | Unsigned int      |
| o         | Octal             |
| x         | Hexa-decimal      |
| X         | Hexa-decimal      |
| S	    | Hex-ASCII Value   |
| p         | Pointer Address   |
| r	    | Reversed string   |
| R         | RO13 string	|

## Flags (In development...)
| Flag	|			Description			|
| :-----| :-----------------------------------------------------|
| +	| Preceeds the result with a plus or minus sign (+ or -)|
| ' '	| If no sign, a blank space is inserted before the value|
| #	| preceeded with 0, 0x or 0X for values that aren't zero|

### Example:

```
#include "main.h"

int main(void)
{

	int string;

	string = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Percent:[%%]\n");

	return (0);
}
```

### Output:

```
Length: [39, 39]
Percent: %

```

## Files
* [_putchar](https://github.com/nafscode/printf/blob/master/_putchar.c): Writes character to the standard output.
* [_puts](https://github.com/nafscode/printf/blob/master/_puts.c): Writes strings to the standard output.
* [print_char](https://github.com/nafscode/printf/blob/master/print_char.c): Prints character.
* [print_string](https://github.com/nafscode/printf/blob/master/print_string.c): Prints string.
* [get_flag](https://github.com/nafscode/printf/blob/master/get_flag.c): Specifies what flag to use.
* [get_print](https://github.com/nafscode/printf/blob/master/get_print.c): Gets the the right function based on specifier.
* [print_number](https://github.com/nafscode/printf/blob/master/print_number.c): Prints numbers.
* [_printf](https://github.com/nafscode/printf/blob/master/_printf.c): The main printf function.
* e. t. c.


## Authors

* [Nafs Ahmad](https://github.com/nafscode)
* [Laide Endeley](https://github.com/bondress)
