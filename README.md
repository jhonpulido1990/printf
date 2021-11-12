printf

This project is carried out with the purpose of acquiring knoledge in what has been acquired and reinforcing concepts.

Autorized functions

*write(man 2 write)
*malloc(man 3 malloc)
*free(man 3 free)

Functions performed


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
int *print_integer(long int n, int *len);
/*function print a unsigned int*/
int prin_ui(va_list ui);
void print_uinteger(unsigned int n);

/*function print number octal*/
int print_oct(va_list oct);
void print_octal(unsigned int octal);

/*Advanced*/
int print_rev(va_list str);
/*function print number binary*/
int prin_bin(va_list i);
int *print_binary(unsigned int num, int *len);

SOME EXAMPLES:

String

    Input: _printf("%s\n", 'This is a single string.');
    Output: This is a single string.

Character

    Input: _printf("The first letter of my name is %c\n", 'A');
    Output: The first letter of my name is A

Integer

    Input: _printf("You are %i years old\n", 30);
    Output: You are 30 years old

Decimal:

    Input: _printf("%d\n", 5000);
    Output: 5000

---

Mandatory Tasks

    Write function that produces output with conversion specifiers c, s, and %.
    Handle conversion specifiers d, i.
    Create a man page for your function.

Authors

John Jairo Pulido
Andres Catano

