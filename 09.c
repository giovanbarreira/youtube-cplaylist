/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

int main() {
    int number1, number2;
    int sum, difference, product, quotient;
    float number3, number4;
    float sum2, difference2, product2, quotient2;

    printf("Type an integer:\n");
    scanf("%d", &number1);
    printf("Type another integer:\n");
    scanf("%d", &number2);     

    printf("Type a floating point:\n");
    scanf("%f", &number3);
    printf("Type another floating point:\n");
    scanf("%f", &number4);     

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;

    sum2 = number3 + number4;
    difference2 = number3 - number4;
    product2 = number3 * number4;
    quotient2 = number3 / number4;

    printf("Sum of the integers: %d\n", sum);
    printf("Difference of the integers: %d\n", difference);
    printf("Product of the integers: %d\n", product);
    printf("Quotient of the integers: %d\n", quotient);

    printf("Sum of the floating points: %.2f\n", sum2);
    printf("Difference of the floating points: %.2f\n", difference2);
    printf("Product of the floating points: %.2f\n", product2);
    printf("Quotient of the floating points: %.2f\n", quotient2);

    return 0;
}