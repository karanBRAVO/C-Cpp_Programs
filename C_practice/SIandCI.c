#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, f;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time period: ");
    scanf("%f", &T);

    printf("Enter Compounding frequency: ");
    scanf("%f", &f);

    float S_I = (P * R * T) / 100;
    printf("Your Simple Interest is: %f \n", S_I);

    float A = P + S_I;
    printf("Total Amount: %f \n", A);

    float C_A = P *  pow((1+ (R / (f * 100))), (f * T)) ;
    printf("Total Amount after compounding: %f \n", C_A);

    float C_I = C_A - P;
    printf("Your Compound Interest is: %f", C_I);

    return 0;
}