#include "main.h"

/**
 * convert_base - converts & prints a number into the given base
 * @n: number to convert
 * @base: base to use
 * @c: char
 * 
 * Return: the length of the printed number
*/
int convert_base(unsigned int n, int base, char c)
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
 * 
 * Return: the length of the argument
 */
int op_octal(va_list vl)
{
	long int n = va_arg(vl, unsigned int);

	return (convert_base(n, 8, '0'));
}

/**
 * op_hex - prints num in hex base, with lower cases
 * @vl: varasic list of arguments
 *
 * Return: the length of the argument
 */
int op_hex(va_list vl)
{
	long int n = va_arg(vl, unsigned int);
    
	return (convert_base(n, 16, 87));
}

/**
 * op_heX - prints num in hex base, with upper cases
 * @vl: varasic list of arguments
 *
 * Return: the length of the argument
 */
int op_heX(va_list vl)
{
	long int n = va_arg(vl, unsigned int);
    
	return (convert_base(n, 16, 55));
}