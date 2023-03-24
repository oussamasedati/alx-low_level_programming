#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
=======
>>>>>>> a6e81f90e5976b2e88887fbde24e7aab7de99df4
/**
 * main - entry point
 * Description: Assigns a random number to the variable n and
 *              prints whether the number is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
