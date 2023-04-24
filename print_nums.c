#include "main.h"

/**
 * op_int_helper - prints a number
 * @n: integer
 *
 * Return: the length of @n
 */
int op_int_helper(unsigned int n)
{
	int len = 0;

	if (n / 10)
		len += op_int_helper(n / 10);

	_putchar((n % 10) + '0');
	len++;

	return (len);
}

/**
 * op_int - prints an integer
 * @vl: varasic list of arguments
 *
 * Return: the length of the argument
 */
int op_int(va_list vl)
{
	int len = 0;
	int n = va_arg(vl, int);
    unsigned int t = n;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}

	if (n < 0)
	{
		_putchar('-');
		t = -n;
		len++;
	}

	if (t / 10)
		len += op_int_helper(t);

	return (len);
}
