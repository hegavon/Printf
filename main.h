#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/****************** FUNCTIONS ******************/

/**
 * output_char - Print a character.
 * @c: The character to print.
 *
 * Return: The number of characters printed.
 */
int output_char(char c);

/**
 * output_str - Print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int output_str(char *str);

/**
 * string_length - Calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int string_length(const char *str);

/**
 * _printf - A custom printf function that handles %c, %s, %% specifiers.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...);

/**
 * write_to_console - To print an integer.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */
int write_to_console(int num);

#endif /* MAIN_H */
