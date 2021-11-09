#include "main.h"
/**
 * print_ui - function that prints numbers
 * @n: list of characters to be printed
 * Return: 0 Success
 */
int print_ui(va_list ui)
{
	unsigned int a = 0;
	unsigned int b = 0;

	a = va_arg(ui, unsigned int);
	if (a < b)
	{
		a = a * -1;
	}
	print_uinteger(a);
	return (0);
}
/**
 * print_i - function that prints numbers
 * @n: list of characters to be printed
 * Return: 0 Success
 */
int print_i(va_list i)
{
	int numero = 0;

	numero = va_arg(i, int);
	print_integer(numero);
	return (0);
}
/**
 * print_integer - function that prints numbers
 * @n: list of characters to be printed
 */
void print_integer(int n)
{
	int a = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
	{
		print_integer(n / 10);
	}
	a = ((n % 10));
	_putchar(a + '0');
}
/**
 * print_integer - function that prints numbers
 * @n: list of characters to be printed
 */
void print_uinteger(unsigned int n)
{
	unsigned int a;

	if (n / 10)
	{
		print_uinteger(n / 10);
	}
	a = ((n % 10));
	_putchar(a + '0');
}
/**
 * print_bin - function that prints a binary number
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
		print_bin(num / 2);
		_putchar((num % 2) + '0');
	}
	return (0);
}
