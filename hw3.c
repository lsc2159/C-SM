#include <stdio.h>

int main() {
    int i, j, num = 5;

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}