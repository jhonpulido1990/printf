#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string
 * Return: length of string 
 */

int print_rev(va_list str)
{
    char *p_str;
    int i = 0, len = 0;

    p_str = va_arg(str, char *);
    
    while (p_str[i] != '\0')
    i++;

    for (i = i - 1; i >= 0; i--)
    {
        _putchar(p_str[i]);
        len++;
    }
    return (len);

}