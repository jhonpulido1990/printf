#include "main.h"
/**
 * prin_ui - function that prints numbers
 * @ui: unsigned integer to be printed
 * Return: length
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
	int num = 0;
	int len = 0;

	num = va_arg(i, int);
	print_integer(num, &len);
	return (len);
}
/**
 * print_integer - function that prints numbers
 * @n: number to be printed
 * @len: length of the number
 * Return: length of the number
 */
int *print_integer(long int n, int *len)
{
	int a = 0;

	/* fix negatives */
	if (n < 0)
	{
		n = -n;
		*len = _putchar('-');
	}
	if (n / 10)
	{
		print_integer((n / 10), len);
	}
	a = (n % 10);
	*len += _putchar(a + '0');
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
