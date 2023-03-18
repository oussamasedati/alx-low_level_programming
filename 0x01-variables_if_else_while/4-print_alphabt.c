#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabt
 * Return: Always 0 (Success)
 */
int main() {
char letter;
for (letter = 'a'; letter <= 'z'; letter++) {
if (letter != 'q' && letter != 'e') {
putchar(letter);
}
}
putchar('\n');
return (0);
}
