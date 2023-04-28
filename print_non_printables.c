#include "main.h"
/**
 * op_nptbl - prints non printable chars in a str
 * @vl: input
 * @flag: flag ...
 *
 * Return: length
 */
int op_nptbl(va_list vl, int flag)
{
	int i = 0, len = 0;
	char *str = va_arg(vl, char *);
	(void) flag;

	if (!str)
		return (_printf("(null)"));
	while (str[i])
	{
		if ((0 < str[i] && str[i] < 32) || 127 <= str[i])
		{
			len += (str[i] < 16) ? _printf("\\x0") : _printf("\\x");
			len += convert_base(str[i], 16, 55);
			i++;
			continue;
		}
		len += _putchar(str[i]);
		i++;
	}

	return (len);
}
