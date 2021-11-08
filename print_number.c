#include "main.h"
/**
 * print_ui - function that prints numbers
 * @n: list of characters to be printed
 * Return: 0 Success
 */
int print_ui(unsigned int n)
{
	int a = 0;

	if (n / 10)
	{
		print_ui(n / 10);
	}
	a = (n % 10 + '0');
	_putchar(a);
	return (0);
}
/**
 * print_i - function that prints numbers
 * @n: list of characters to be printed
 * Return: 0 Success
 */
void print_i(int n)
{
	int a = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_i(n / 10);
	}
	a = (n % 10 + '0');
	_putchar(a);
}

/**
 * print_bin - function that prints a binary number
 * @num: list of arguments
 * Return: 0 Success
 */
int print_bin(int num)
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
