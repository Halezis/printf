#include "main.h"

/**
 * print_helper - A helper function to print args depending on format
 * @specifier: format specifer of the arg to print
 * @print_arg: macro to return the next argument of the _printf fxn
 * Return: number of printed characters - count
*/
int print_helper(char specifier, va_list print_arg)
{
	int arg, count = 0;
	char arg_c;
	char *str;
	unsigned int arg_b;

	switch (specifier)
			{
			case 'c':
				arg_c = va_arg(print_arg, int);
				_putchar(arg_c);
				count++;
				break;
			case 's':
				str = va_arg(print_arg, char *);
				if (str == NULL)
					str = "(null)";
				count += _puts(str);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case 'i':
			case 'd':
				arg = va_arg(print_arg, int);
				print_dig(arg, &count);
				break;
			case 'b':
				arg_b = va_arg(print_arg, unsigned int);
				print_binary(arg_b, &count);
				break;
			default:
				return (-1);
			}
	return (count);
}
