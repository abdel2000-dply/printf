#include "main.h"

/**
 * op_int_helper - prints a number
 * @n: integer
 *
 * Return: the length of @n
 */
int op_int_helper(long int n)
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
	long int n = va_arg(vl, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}

	if (n / 10 >= 0)
		len += op_int_helper(n);

	return (len);
}
