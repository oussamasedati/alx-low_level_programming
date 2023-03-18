#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, assigns a random number to variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        putchar(n + '0');
        printf(" is positive\n");
    }
    else if (n < 0)
    {
        putchar(n * -1 + '0');
        printf(" is negative\n");
    }
    else
    {
        putchar('0');
        printf(" is zero\n");
    }

    return (0);
}
