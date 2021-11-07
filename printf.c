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
	const char *p;

	va_start(ap, format); /* make ap point to 1st unnamed arg */
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
		case 'c':
			_putchar(va_arg(ap, int));
			break;
		case 's':
			print_s(va_arg(ap, char *));
			break;
		case 'u':
			print_ui(va_arg(ap, unsigned int));
			break;
		case 'd':
			print_i(va_arg(ap, int));
			break;
		case 'i':
			print_i(va_arg(ap, int));
			break;
		default:
			_putchar(*p);
			break;
		}
	}
	va_end(ap); /* clean up when done */
	return (0);
}
