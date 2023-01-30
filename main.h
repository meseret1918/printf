#ifndef PRINTF
#define PRINTF
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct printer - conects format specifier with its corresponding function.
 * @flag: format specifier.
 * @function: pointer to @flag especific function.
 */
typedef struct printer
{
	char flag;
	int (*function)(va_list);
} printer_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list arg);
int print_b(va_list arg);
int print_u(va_list arg);
int print_o(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_r(va_list arg);
int print_R(va_list arg);
#endif
