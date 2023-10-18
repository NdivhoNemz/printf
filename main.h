#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *string);
int character_count(void);
extern int num_of_characters; /* external variable */
int handleSpec(const char *format, ...);

#endif /* MAIN_H */
