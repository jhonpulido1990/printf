#ifndef HEADER_FILE
#define HEADER_FILE

/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*function that produces output according to a format*/
int _printf(const char *format, ...);
/*function prints a char */
int print_c(char *str);
/*function prints a string */
void print_s(char *str);

#endif /*HEADER_FILE*/
