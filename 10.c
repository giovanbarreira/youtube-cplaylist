/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>
#include <math.h>

int main() {
    int int_number_1, int_number_2;
    float sq_root, power;

    printf("Type an integer:\n");
    scanf("%d", &int_number_1);
    printf("Type another integer:\n");
    scanf("%d", &int_number_2);     

    sq_root = sqrt(int_number_1);
    power = pow((double)int_number_1, (double)int_number_2);

    printf("Square root of the first integer: %.2f\n", sq_root);
    printf("First integer raised to the power of the second integer: %.2f\n", power);
    // But math.h is very powerful, you can do a lot of things with it.

    return 0;
}