#include "main.h"

/**
 * 
*/
int flag_checker(char fmt)
{
    switch (fmt)
    {
    case '+':
        return 1;
    case ' ':
        return 2;
    case '#':
        return 3;
    default:
        return 0;
    }
    return 0;
}