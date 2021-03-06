#include "main.h"
/**
 * prin_bin - function that recive va_list arg and invoke print binary
 * @i: list of arguments
 * Return: length
 */
int prin_bin(va_list i)
{
	unsigned int num;
	int len = 0;

	num = va_arg(i, unsigned int);
	print_binary(num, &len);
	return (len);
}
/**
 * print_binary - function that prints a binary number
 * @num: number to convert to binary number and print
 * @len: length of the number
 * Return: length
 */
int *print_binary(unsigned int num, int *len)
{
	unsigned int a = 0;
	unsigned int b = 2;

	if (num >= a && num < 2)
	{
		*len += _putchar(num + '0');
	}
	else
	{
		print_binary((num / b), len);
		*len += _putchar((num % b) + '0');
	}
	return (len);
}
/**
 * print_oct - function that recive va_list arg and invoke print octal
 * @oct: list of arguments
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
 * @octal: list of arguments
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
