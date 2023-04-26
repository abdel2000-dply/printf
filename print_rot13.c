#include "main.h"

/**
 * op_rot13 - encodes a string using rot13
 * @vl: string to encode
 * @flag: ...
 *
 * Return: the length of printed string
 */
int op_rot13(va_list vl, int flag)
{
    int i, j;
    char *s = va_arg(vl, char *);
    char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    (void)flag;

    if (s == NULL)
        s = "(AHYY)";

    for (i = 0; s[i]; i++)
    {
        for (j = 0; s1[j]; j++)
        {
            if (s[i] == s1[j])
            {
                _putchar(s2[j]);
                break;
            }
        }
    }

    return (i);
}