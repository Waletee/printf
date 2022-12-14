#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list i);
int print_string(va_list s);
int print_S(va_list S);
int print_rev(va_list r);
int print_rot13(va_list R);
int print_char(va_list c);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_dec(va_list d);
int print_p(va_list p);
int (*find_function(const char *format))(va_list);
int flags_char(const char *format, int *i);

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
