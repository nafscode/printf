# _printf

## Decription

The _printf is a function that mimics the printf function in C programming language. It is used to print output on the screen and allows formatting of the output in numerous ways.

## Prototype
`_printf(const char *format, ...);`

## Usage
* Prints to the standard output according the given format.
* Returns the number of characters printed (excluding the null byte used to end output to strings).
`format` is a character string. It is composed of zero or more direcives.
Files are created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with he command `gcc -Wall -Werror -Wextra pendantic *.c.
