#include "main.h"
/**
 * prin_ui - function that prints numbers
 * @ui: unsigned integer to be printed
 * Return: 0 Success
 */
int prin_ui(va_list ui)
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
 * prin_i - function that prints numbers
 * @i: objet ap with va_list parameters
 * Return: 0 Success
 */
int prin_i(va_list i)
{
	int numero = 0;

	numero = va_arg(i, int);
	print_integer(numero);
	return (0);
}
/**
 * print_integer - function that prints numbers
 * @n: list of characters to be printed
 * Return: nothing
 */
int print_integer(int n)
{
	int len = 0;
	int a = 0;

	if (n / 10)
	{
		print_integer(n / 10);
	}
	a = ((n % 10));
	len += _putchar(a + '0');
	return (len);
}
/**
 * print_uinteger - function that prints numbers
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
