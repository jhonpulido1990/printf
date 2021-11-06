#include "main.h"

/**
 * print_c - function that prints a character
 * @str: character to be printed
 * Return: -1 if fail or NULL
 */

int print_c(char *str)
{
	char *p;

	p = str;

	return (_putchar(*p));
}

/**
 * print_s - function that prints a string
 * @str: list of characters to be printed
 * Return: -1 if fail or NULL
 */

int print_s(char *str)
{
	char *p;
	unsigned int i = 0;

	p = str;

	if (p == NULL)
	{
		return (-1);
	}

	while (*p)
	{
		_putchar(*p);
		p++;
		i++;
	}
	return (i);
}
