#include "main.h"
#include <stdarg.h>

/**
 * _handle - Get the main string and all parameters to
 * print a format specifier string
 * @format: Containing the format specifiers
 * Return: A total count of the characters printed
 */


typedef void (*conver_t)(va_list);

int print_char(va_list list)
{
    int charSpecifier = va_arg(list, int);
    _putchar(charSpecifier);
    return (1);
}

int _handle(const char *format, ...)
{
    int printed_chars;
    conver_t f_list[] = {
        {"d", print_char},
        {"i", print_char}
    };
    va_list arg_list;

    if (format == NULL)
        return (-1);

    va_start(arg_list, format);
    /*Calling parser function*/
    printed_chars = parser(format, f_list, arg_list);
    va_end(arg_list);
    return (printed_chars);
}

