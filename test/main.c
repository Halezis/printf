#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    char *str = "Hhdhhggfgfjjj";
    int num = 123457;
    int num2 = 0;
    int result1;
    int result2;
    unsigned int ui;
    /*void *addr;*/

	result1 = _printf("Invalid format specifier: %");
	printf("Result: %d\n", result1);
	result1 = _printf("Invalid format specifier: %");
	printf("Result: %d\n", result1);

	result2 = _printf("Invalid format specifier: % ");
	printf("Result: %d\n", result2);
	result2 = _printf("Invalid format specifier: % ");
	printf("Result: %d\n", result2);

    len = _printf("");
    _printf("Length: %d\n", len);
    len2 = _printf("");
    printf("Length: %d\n", len);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    /*addr = (void *)0x7ffe637541f0;*/
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len =_printf("Testing a %s\n", str);
    len2 =printf("Testing a %s\n", str);
     _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len =_printf("Testing a %d\n", num);
    len2 =printf("Testing a %d\n", num);
     _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len =_printf("%d\n", num2);
    len2 =printf("%d\n", num2);
     _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("hello %c my name\n", 'K');
    printf("hello %c my name\n", 'K');
    /*_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);*/
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /*_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
