#include "main.h"
/**
 * 
 * 
 * @brief 
 * 
 */
int _printf(const char *format, ...)
{
	va_list ap; /* points to each unnamed arg in turn */
	char *s;
	const char *p;
	int integer;
	unsigned int unintenger;
	double floats;

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
		case 'd':
			s = va_arg(ap, int);
			printf("%d", s);
			break;
		case 'o':
			unintenger = va_arg(ap, unsigned int);
			printf("%o", unintenger);
			break;
		case 'i':
			s = va_arg(ap, int);
			// printf("%i", strlen(s));
			// break;
		case 'f':
			floats = va_arg(ap, double);
			printf("%f", floats);
			break;
		case 'u':
			unintenger = va_arg(ap, unsigned int);
			printf("%u", unintenger);
			break;
		case 's':
			for (s = va_arg(ap, char *); *s; s++)
				putchar(*s);
			break;
		default:
			putchar(*p);
			break;
		}
	}
	va_end(ap); /* clean up when done */
	return (0);
}