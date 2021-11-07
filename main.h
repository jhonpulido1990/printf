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
/*function prints a string */
void print_s(char *str);
/*function prints number unsigned*/
void print_ui(unsigned int n);
/*function print number*/
void print_i(int n);

#endif /*HEADER_FILE*/
