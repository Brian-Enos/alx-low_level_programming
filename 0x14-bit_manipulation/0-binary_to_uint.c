#include "main.h"

/*
*check code and always return zero
*/

unsigned int binary_to_uint(const char *binary_str)
{
    unsigned int number = 0, multiplication = 1;
    int length;

    if (!binary_str)
        return 0;

    for (length = 0; binary_str[length];)
        length++;

    for (length -= 1; length >= 0; length--)
    {
        if (binary_str[length] != '0' && binary_str[length] != '1')
            return 0;

        number += (binary_str[length] - '0') * multiplication;
        multiplication *= 2;
    }

    return number;
}

