#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list i);
int print_string(va_list s);
int print_rev(va_list r);
int print_rot13(va_list R);
int print_char(va_list c);
int print_porcentage(void);

#endif
