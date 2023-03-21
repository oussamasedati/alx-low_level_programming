#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n%10<0)
{
	_putchar(-(n%10) +48);
	return (-(n%10));
}
	else
{
	_putchar(n%10 +48);
        return (n%10);
}
		
}
