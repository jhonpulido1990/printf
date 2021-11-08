#include "main.h"
/**
 * _printf - function tha call a surutine to print different formats
 * of data types
 * @format: string to be printed with parameters and variables
 * Return: 0 Succes
 */
int _printf(const char *format, ...)
{
	select_op modulo[] = {
		{"s", print_s}, {"c", print_c}, {"%", print_per}
	};

	va_list ap; /* points to each unnamed arg in turn */
	unsigned int i = 0, j = 0, len = 0;

	va_start(ap, format); /* make ap point to 1st unnamed arg */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			for (j = 0; j < 3; j++)
			{
				if (modulo[j].id[0] == format[i + 1])
				{
					len += modulo[j].f(ap);
					i++;
				}
			}
		}
	}
	va_end(ap); /* clean up when done */
	return (len);
}
