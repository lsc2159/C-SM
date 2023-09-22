#include <stdio.h>

int main(void){
    float km;
    float mile;
    printf("Please enter kilometers: ");
    scanf("%f", &km);

    mile=km/1.609;
    printf("%.1f km is equal to %.1f \n", km, mile);
    return 0;
}