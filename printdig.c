#include "main.h"

/**
 * printdig - Handles conversion and print of integer and decimal nums
 * @num: number to be printed
 * @count: number of characters printed
 * Return: Nothing
*/

void print_dig(int num, int *count)
{
	int div = 1, digit;
	char number;
	unsigned int n;

	if (num < 0)
	{
		number = '-';
		_putchar(number);
		(*count)++;
		n = -num;
	}
	else
	{
		n = num;
	}

	while ((n / div) >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = n / div;
		number = digit + '0';
		_putchar(number);
		(*count)++;
		n %= div;
		div /= 10;
	}
}
