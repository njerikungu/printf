#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct format - Structure name template for funcs
* @symbol: format specifier
* @func: function called after the format specifier
*/


struct format
{
	char *symbol;
	int (*func)(va_list);
};

/**
* format_t - struct nickname
*/
typedef struct format format_t;

/* functions */
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char s))(va_list);
int print_c(va_list arg);
int print_s(va_list arg);
int print_int(va_list arg);
int print_i(va_list arg);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_unint(va_list arg);
int print_hex(va_list arg);
int print_hexlow(va_list arg);
int hex_print(char c);
int print_S(va_list S);
int reverse_str(va_list arg);
#endif
