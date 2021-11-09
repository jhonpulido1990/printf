#include "main.h"

/**
 * print_bin - function that recive va_list arg and invoke print binary
 * @i: list of arguments
 * Return: nothing
 */
int print_bin(va_list i)
{
	unsigned int num;

	num = va_arg(i, unsigned int);
	print_binary(num);
	return (0);
}

/**
 * print_binary - function that prints a binary number
 * @num: list of arguments
 * Return: 0 Success
 */
void print_binary(unsigned int num)
{
	if (num >= 0 && num < 2)
	{
		_putchar(num + '0');
	}
	else
	{
		print_binary(num / 2);
		_putchar((num % 2) + '0');
	}
}
