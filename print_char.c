#include "main.h"

/**
 * op_char - prints characters
 * @vl: ...
 *
 * Return: ...
 */
int op_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}
/**
 * op_string - prints strings
 * @vl: ...
 * Return: ...
 */
int op_string(va_list vl)
{
	int i = 0;
	char *str = va_arg(vl, char *);

	if (!str)
		str = "(null)";

	while (str[i])
		i += _putchar(str[i]);

	return (i);
}
/**
 * op_percent - prints percentage
 * @vl: ...
 *
 * Return: ...
 */
int op_percent(va_list vl)
{
	(void) vl;

	_putchar('%');
	return (1);
}
