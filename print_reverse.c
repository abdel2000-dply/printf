#include "main.h"

/**
 * op_reverse - prints a string in reverse
 * @vl: list of arguments
 * @flag: flag
 *
 * Return: length of the printed chars
 */
int op_reverse(va_list vl, int flag)
{
	int i = 0, len = 0;
	char *str = va_arg(vl, char *);
	(void) flag;

	if (str == NULL)
		str = "(NULL)";

	while (str[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
