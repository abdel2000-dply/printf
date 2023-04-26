#include "main.h"

/**
 * op_char - prints characters
 * @vl: input
 * @flag: flag ...
 *
 * Return: length
 */
int op_char(va_list vl, int flag)
{
	(void) flag;

	_putchar(va_arg(vl, int));
	return (1);
}
/**
 * op_string - prints a strings
 * @vl: input
 * @flag: flag
 *
 * Return: length
 */
int op_string(va_list vl, int flag)
{
	int i = 0;
	char *str = va_arg(vl, char *);
	(void) flag;

	if (!str)
		str = "(null)";

	while (str[i])
		i += _putchar(str[i]);

	return (i);
}
/**
 * op_percent - prints a percentage
 * @vl: input
 * @flag: flag ...
 *
 * Return: length
 */
int op_percent(va_list vl, int flag)
{
	(void) vl;
	(void)flag;

	_putchar('%');
	return (1);
}
