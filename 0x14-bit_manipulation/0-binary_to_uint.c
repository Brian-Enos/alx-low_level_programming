#include "main.h"

/*
 * binary_to_uint - Converts a binary number to an unsigned int
 * Return: The converted number, or 0 if b is NULL or contains a non-binary char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
