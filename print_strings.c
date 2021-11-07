#include "main.h"
/**
 * print_s - function that prints a string
 * @str: list of characters to be printed
 */
void print_s(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
}
/**
 * print_ui - function that prints numbers
 * @n: list of characters to be printed
 */
void print_ui(unsigned int n)
{
	int a = 0;

	if (n / 10)
	{
		print_ui(n / 10);
	}
	a = (n % 10 + '0');
	_putchar(a);
}
/**
 * print_i - function that prints numbers
 * @n: list of characters to be printed
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
