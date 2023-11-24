#include <math.h>
#include <stdio.h>

double NumMean(double arr[], int size){
    double sum=0;
    for (int i=0; i<size; i++){
        sum +=arr[i];
    }
    return sum/size;
}
double SD(double arr[], int size){
    double mean=NumMean(arr, size);
    double sum=0;
    for (int i=0; i<size; i++){
        sum += pow(arr[i]-mean, 2);
    }
    double variance = sum/size;
    double standardD=sqrt(variance);
    return standardD;
}

int main(void){
    int i;
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (i=0; i<5; i++){
        scanf("%lf", &numbers[i]);
    }
    double result= SD(numbers, 5);
    printf("Standard Deviation=%.3lf\n ", result);
    return 0;
}    