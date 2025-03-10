/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

#include "20_lib.h"

int main() {
    float doub_coef, 
        lin_coef, 
        const_term;

    printf("Enter coefficients for the squared term, linear term and constant term: ");
    scanf("%f %f %f", &doub_coef, &lin_coef, &const_term);

    x1(doub_coef, lin_coef, const_term);
    x2(doub_coef, lin_coef, const_term);

    return 0;
}