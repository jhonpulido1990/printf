#include "main.h"
/**
 * print_s - function that prints a string
 * @str: list of characters to be printed
 * Return: 0
 */
int print_s(va_list str)
{
	char *s;
	int a;

	s = va_arg(str, char *);
	if (s == NULL)
	{
		s = "(null)";
		for (a = 0; s[a]; a++)
		{
			_putchar(s[a]);
		}
	}
	else
	{
		for (a = 0; s[a]; a++)
		{
			_putchar(s[a]);
		}
	}
	return (0);
}
/**
 * print_c - function that prints a string
 * @c: list of characters to be printed
 * Return: 0
 */
int print_c(va_list c)
{
	char character;

	character = va_arg(c, int);
	_putchar(character);
	return (0);
}
/**
 * print_per - function that prints a string
 * @void: list of characters to be printed
 * Return: 0
 */
int print_per(void)
{
	char per;

	per = '%';
	_putchar(per);
	return (1);
}
