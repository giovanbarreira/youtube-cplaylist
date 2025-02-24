/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

void sum(int a, int b);
void difference(int a, int b);

int main() {

    int int_number1, int_number2;

    printf("Enter an integer: ");
    scanf("%d", &int_number1);
    printf("Enter another integer: ");
    scanf("%d", &int_number2);

    sum(int_number1, int_number2);
    difference(int_number1, int_number2);

    return 0;
}

void sum(int a, int b) {
    int num_sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, num_sum);
}

void difference(int a, int b) {
    int num_diff = a - b;
    printf("The difference of %d and %d is %d\n", a, b, num_diff);
}