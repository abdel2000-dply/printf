#include "main.h"

/**
 * convert_base - converts & prints a number into the given base
 * @n: number to convert
 * @base: base to use
 * @c: char
 *
 * Return: length of the printed number
 */
int convert_base(unsigned long n, int base, char c)
{
	int len = 0;

	if (n / base)
		len += convert_base(n / base, base, c);

	if (n % base > 9)
		len += _putchar(n % base + c);
	else
		len += _putchar((n % base) + '0');

	return (len);
}

/**
 * op_octal - prints num in octal base
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: the length of the argument
 */
int op_octal(va_list vl, int flag)
{
	int len = 0;
	unsigned long n;
	int x;

	n = (flag == 4) ? va_arg(vl, unsigned long) : va_arg(vl, unsigned int);

	if (flag == 5)
		x = n, n = x;

	if (flag == 3 && n != 0)
		len += _putchar('0');

	return (len + convert_base(n, 8, '0'));
}

/**
 * op_hex - prints num in hex base, with lower cases
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: the length of the argument
 */
int op_hex(va_list vl, int flag)
{
	int len = 0;
	unsigned long n;
	int x;

	n = (flag == 4) ? va_arg(vl, unsigned long) : va_arg(vl, unsigned int);

	if (flag == 5)
		x = n, n = x;

	if (flag == 3 && n != 0)
		len += _printf("0x");

	return (len + convert_base(n, 16, 87));
}

/**
 * op_heX - prints num in hex base, with upper cases
 * @vl: varasic list of arguments
 * @flag: flag
 *
 * Return: length of the argument
 */
int op_heX(va_list vl, int flag)
{
	int len = 0;
	unsigned long n;
	int x;

	n = (flag == 4) ? va_arg(vl, unsigned long) : va_arg(vl, unsigned int);

	if (flag == 5)
		x = n, n = x;

	if (flag == 3 && n != 0)
		len += _printf("0X");

	return (len + convert_base(n, 16, 55));
}
