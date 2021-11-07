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

void print_s(char *str)
{
	int a = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
}
