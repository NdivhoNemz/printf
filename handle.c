#include "main.h"

/**
 * handleSpecifier - This function to handle specifiers.
 * Arguments can be given.
 * Output to standard output
*/

int handleSpec(const char *format, ...)
{
    va_list add_argument;
    int num_of_chars = 0;
    
    if (format == NULL)
    {
        return (-1);
    }
    va_start(add_argument, format);
    
    while (*format)
    {
            if (*format != '%')
            {
                num_of_chars += _putchar(*format);
            }
            else
            {
                format++;
                switch (*format)
                {
                    case 'd';
                        num_of_chars += _putchar(va_arg(add_argument));
                        break;
                    case 'i';
                        num_of_chars += _putchar(va_arg(add_argument));
                        break;
                    default:
                        num_of_chars += _putchar('%');
                        format--
                        break;
                }
                
                format++
            }
            va_end(add_argument);
            return (num_of_chars);
    }
}
