#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

/****************** FUNCTIONS ******************/

/**
 * print_char - Print a character.
 * @c: The character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(char c);

/**
 * print_str - Print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_str(char *str);

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

/**
 * _printf - A custom printf function that handles %c, %s, and %% specifiers.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...);

#endif /* MAIN_H */
