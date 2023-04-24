#include "main.h"

/**
 * op_int_helper - prints a number
 * @n: integer
 *
 * Return: the length of @n
<<<<<<< HEAD
 */
int op_int_helper(int n)
=======
*/
int op_int_helper(long int n)
>>>>>>> 96e86d2e20487568ddf6754ea88096cf559ef9af
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
<<<<<<< HEAD
	int len = 0;
	int n = va_arg(vl, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}

	if (n / 10)
		len += op_int_helper(n);
=======
    int len = 0;
    long int n = va_arg(vl, int);

    if (n == 0)
    {
        _putchar('0');
        len++;
    }
        
    if (n < 0)
    {
        _putchar('-');
        n = -n;
        len++;
    }

    if (t / 10)
        len += op_int_helper(n);
>>>>>>> 96e86d2e20487568ddf6754ea88096cf559ef9af

	return (len);
}
