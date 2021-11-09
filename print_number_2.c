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
	unsigned int a = 0;
	unsigned int b = 2;

	if (num >= a && num < 2)
	{
		_putchar(num + '0');
	}
	else
	{
		print_binary(num / b);
		_putchar((num % b) + '0');
	}
}
/**
 * print_oct - function that recive va_list arg and invoke print octal
 * @i: list of arguments
 * Return: nothing
 */
int print_oct(va_list oct)
{
	unsigned int num;

	num = va_arg(oct, int);
	print_octal(num);
	return (0);
}
/**
 * print_octal - function that prints a octal number
 * @o: list of arguments
 */
void print_octal(unsigned int octal)
{
	int a = 0;

	if (octal > 0)
	{
		print_octal(octal / 8);
		a = (octal % 8) + '0';
		putchar(a);
	}
}
