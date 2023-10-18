#include "main.h"

/**
 * handleSpecifier - This function to handle specifiers.
 * Arguments can be given.
 * Output to standard output
*/

int  handleSpecifier(const char *format, ...) {
/**
 * Get the characters
*/
    va_list addChar;
    
/**
 * Check for conditions
*/
    if (format == NULL) {
        return (-1);
    }
    if (*format == 'd') {
        char data = va_arg(addChar, int);
        write(1, &data, 1);
    }
    if (*format == 'i') {
        char data = va_arg(addChar, int);
        write(1, &data, 1);
    }
    
    va_end(addChar);
    return 0;
}

