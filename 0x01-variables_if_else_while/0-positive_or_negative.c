#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // do not modify this line

    int n = rand() - RAND_MAX/2; // do not modify this line

    printf("%d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    printf("\n");

    return 0;
}

