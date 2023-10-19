#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2); 
        printf("%d", n % 2);     
    }
}

int main() {
    int number;
    
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Binary representation: ");
        if (number == 0) {
            printf("0"); 
        } else {
            decimalToBinary(number);
        }
        printf("\n");
    }
    
    return 0;
}