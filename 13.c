/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

int main() {

    int int_number;

    printf("Enter an integer: ");
    scanf("%d", &int_number);

    if (int_number > 0) {
        printf("%d is positive.\n", int_number);
    } else if (int_number < 0) {
        printf("%d is negative.\n", int_number);
    } else {
        printf("%d is zero.\n", int_number);
    }

    return 0;
}