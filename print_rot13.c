#include "main.h"

/**
 * op_rot13 - encodes a string to rot13
 * @vl: string to encode
 * @flag: flag
 *
 * Return: the length of printed string
 */
int op_rot13(va_list vl, int flag)
{
	int i, j;
	char *str = va_arg(vl, char *);
	char alph13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void) flag;

	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == alph13[i])
					_putchar(rot13[i]);
			}
		}
	}

	return (j);
}
