#include "main.h"

/**
 * op_char - prints characters
 * @vl: input
 * @flag: flag
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
 * op_string - prints strings
 * @vl: input
 * @flag: flag
 * 
 * Return: length
 */
int op_string(va_list vl, int flag)
{
	(void) flag;
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
 * @vl: input
 * @flag: flag
 *
 * Return: length
 */
int op_percent(va_list vl, int flag)
{
	(void)flag;
	(void) vl;

	_putchar('%');
	return (1);
}