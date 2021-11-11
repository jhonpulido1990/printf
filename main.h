#ifndef HEADER_FILE
#define HEADER_FILE

/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct format - struct to store format identifier and its function
 * @id: format identifier
 * @f: pointer to function
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} select_op;

/*call a funtion _putchar*/
int _putchar(char c);
/*function that produces output according to a format*/
int _printf(const char *format, ...);
/*function prints a string */
int print_s(va_list str);
/*function prints a character*/
int print_c(va_list c);
/*function print percent*/
int print_per(void);
/*function print a integer*/
int prin_i(va_list i);
/*int print_integer(int n);*/
<<<<<<< HEAD
int *print_integer(long int n, int *len);
=======
int print_integer(int n);
>>>>>>> 78026ae7b9554cab654f4ba9de2e870762c64e44
/*function print a unsigned int*/
int prin_ui(va_list ui);
void print_uinteger(unsigned int n);
/*function print number binary*/
int prin_bin(va_list num);
void print_binary(unsigned int num);
/*function print number octal*/
int print_oct(va_list oct);
void print_octal(unsigned int octal);

#endif /*HEADER_FILE*/
