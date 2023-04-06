#include "main.h"
/*
*main - check the code
 * Return: Always 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1ul << index)) == 0)
		return (0);

	return (1);
}

