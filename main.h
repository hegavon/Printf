#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct custom - A structure to hold custom data and function pointer.
 * @data: A character array to store data.
 * @a: A function pointer to an integer-returning function with no parameters.
 */
typedef struct custom
{
	char data[50];
	int (*a)();
} find;

/* Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _strlenC(const char *str);
int p_char(va_list var);
int p_string(va_list var);
int p_percent(void);
int p_int(va_list args);
int p_dec(va_list args);

#endif /* MAIN_H */
