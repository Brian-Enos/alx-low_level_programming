#include "main.h"
/*
* main ckecks thr code and always return 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len = 0;

	if (b[len] == '\0')
		return 0;

	while ((b[len] == '0') || (b[len] == '1'))
	{
		number <<= 1;
		number += b[len] - '0';
		len++;
	}

	return number;
}

