#include <unistd.h>
/*
*putchar c
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
