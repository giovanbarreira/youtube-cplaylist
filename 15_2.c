/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);
void x1(float a, float b, float c), 
    x2(float a, float b, float c);

int main() {
    float doub_coef, 
        lin_coef, 
        const_term, 
        delta_value, 
        x1_v, 
        x2_v;

    printf("Enter coefficients for the squared term, linear term and constant term: ");
    scanf("%f %f %f", &doub_coef, &lin_coef, &const_term);

    x1(doub_coef, lin_coef, const_term);
    x2(doub_coef, lin_coef, const_term);

    return 0;
}

float delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

void x1(float a, float b, float c) {
    float local_delta = delta(a, b, c);
    if (local_delta >= 0) {
        printf("Root 1 = %.2f\n", (-b - sqrt(delta(a, b, c))) / (2 * a));
    }
    else {
        printf("Delta was negative: %.2f. Roots was complex.\n", local_delta);
        return;
    }
}

void x2(float a, float b, float c) {
    float local_delta = delta(a, b, c);
    if (local_delta >= 0) {
        printf("Root 2 = %.2f\n", (-b + sqrt(delta(a, b, c))) / (2 * a));
    }
    else {
        printf("Delta was negative: %.2f. Roots was complex.\n", local_delta);
        return;
    }
}