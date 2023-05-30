# _printf

## Decription

The _printf is a function that mimics the printf function in C programming language. It is used to print output on the screen and allows formatting of the output in numerous ways.

## Prototype
`_printf(const char *format, ...);`

## Usage
* Prints to the standard output according the given format.
* Returns the number of characters printed (excluding the null byte used to end output to strings).
`format` is a character string. It is composed of zero or more direcives.
* Files are created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with he command `gcc -Wall -Werror -Wextra pendantic *.c.
* It is called as `_printf("format string:, arguments...)` where `format string` specifies the output while `arguments` are the variable names corresponding to the format specifier.

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


## Authors

* [Nafs Ahmad](https://github.com/nafscode)
* [Laide Endeley](https://github.com/bondress)
