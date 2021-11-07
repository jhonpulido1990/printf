#include "main.h"

/**
 * _printf - function tha call a surutine to print different formats
 * of data types
 * @format: string to be printed with parameters and variables
 * Return: 0 Succes
 */

int _printf(const char *format, ...)
{
	va_list ap; /* points to each unnamed arg in turn */
	/*char *s;*/
	const char *p;
	/*int integer;*/
	/*unsigned int unintenger;*/
	/*double floats;*/

	va_start(ap, format); /* make ap point to 1st unnamed arg */
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p)
		{
		case 'c':
			print_c(va_arg(ap, char *));
			break;
		case 's':
			print_s(va_arg(ap, char *));
			break;
		default:
			putchar(*p);
			break;
		}
	}
	va_end(ap); /* clean up when done */
	return (0);
}
