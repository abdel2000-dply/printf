#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
/**
 * struct func - struct
 * @fmt: convention code
 * @fo_fun: function pointer
 */
typedef struct func
{
	char *fmt;
	int (*fo_fun)(va_list);

} fun;


int _putchar(char c);
int _printf(const char *format, ...);
int helper_func(const char *format, va_list vl, fun *f_list);

#endif /* MAIN_H */
