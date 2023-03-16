#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    unsigned long mul;
    int num1, num2;

    /* Verify that the program was called with two arguments */
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    /* Verify that both arguments are valid positive integers */
    for (num1 = 1; num1 < argc; num1++)
    {
        for (num2 = 0; argv[num1][num2] != '\0'; num2++)
        {
            if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
    }

    /* Perform the multiplication using strtoul */
    mul = strtoul(argv[1], NULL, 10) * strtoul(argv[2], NULL, 10);

    printf("%lu\n", mul);
    return (0);
}

