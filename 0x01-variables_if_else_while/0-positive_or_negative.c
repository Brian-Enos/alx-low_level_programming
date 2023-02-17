
Search or jump to…
Pulls
Issues
Codespaces
Marketplace
Explore
 
@Brian-Enos 
betascribbles
/
alx-low_level_programming
Public
Fork your own copy of betascribbles/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x01-variables_if_else_while/0-positive_or_negative.c
@betascribbles
betascribbles prints whether a number is positive or negative
Latest commit e672b04 on Jun 18, 2021
 History
 1 contributor
28 lines (27 sloc)  407 Bytes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
