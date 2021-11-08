#ifndef HEADER_FILE
#define HEADER_FILE

/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * @brief 
 * 
 */
typedef struct format
{
	char *id;
	int (*f)();
}select_op;

/*call a funtion _putchar*/
int _putchar(char c);
/*function that produces output according to a format*/
int _printf(const char *format, ...);
/*function prints a string */
int print_s(va_list str);
/*function prints a character*/
int print_c(va_list c);
/*function print number*/
int print_per(void);

#endif /*HEADER_FILE*/
