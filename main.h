#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_fstring(int *pos, const char *format, va_list ap);
int print_string(va_list ap);
int print_char(va_list ap);
int print_percent(va_list ap);

/**
 * struct conv_spec - Struct op
 *
 * @spec: The specifier.
 * @func: The function associated with the specifier.
 */
struct conv_spec
{
	char spec;
	int (*func)(va_list);
};

/**
 * typedef struct conv_spec conv_spec_t - struct op
 *
 * @conv_spec: The struct.
 * @conv_spec_t: The name associated to the struct.
 */
typedef struct conv_spec conv_spec_t;

#endif /* MAIN_H */
