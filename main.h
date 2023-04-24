#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct func
{
	char *fmt;
	void (*fo_fun)(va_list);

} fun;


int _putchar(char c);
int _printf(const char *format, ...);


#endif /* MAIN_H */