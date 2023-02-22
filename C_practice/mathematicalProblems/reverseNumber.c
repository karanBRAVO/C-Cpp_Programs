#include<stdio.h>
#include<math.h>

int main() {
    printf("--- Reverse a number ---\n");

    int num, r_num=0;
    signed int minVal = -pow(2, 31); // -2_147_483_648
    signed int maxVal = pow(2, 31) - 1;  // 2_147_483_647
    printf("Enter Number: ");
    scanf("%d", &num);

    int quotient, remainder;
    quotient = num;

    while (quotient != 0) {
        remainder = quotient % 10;
        quotient = quotient / 10;
        if (r_num == 0) {
            r_num = remainder;
            continue;
        }
        r_num = r_num * 10 + remainder;
    }

    if (r_num >= minVal && r_num <= maxVal) {
        printf("The reversed number is %d", r_num);
    }

    return 0;
}