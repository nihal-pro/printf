#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include<string.h>
#include<stdint.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int Afterpercentage(const char *s);
int _check_format(const char car);
int check_specifier(const char t, va_list myarg);
int print_single_char_c(va_list myarg);
int print_string_char_s(va_list myarg);
int _strlen(char *s);
/**
 * struct specifier - Structure to hold specifier and function pair
 * @str: The specifier string
 * @fct_op: Pointer to the corresponding printing function
 */
typedef struct specifier
{
	char str;
	int (*fct_op)(va_list);
} specifier_t;

#endif
