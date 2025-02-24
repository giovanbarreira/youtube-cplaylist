/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c), 
    x1(float a, float b, float c), 
    x2(float a, float b, float c);

int main() {
    float doub_coef, lin_coef, const_term, delta_value, x1_v, x2_v;

    printf("Enter coefficients for the squared term, linear term and constant term: ");
    scanf("%f %f %f", &doub_coef, &lin_coef, &const_term);

    delta_value = delta(doub_coef, lin_coef, const_term);

    if (delta_value >= 0) {
        x1_v = x1(doub_coef, lin_coef, const_term);
        x2_v = x2(doub_coef, lin_coef, const_term);
        printf("Root 1 = %.2f\n", x1_v);
        printf("Root 2 = %.2f\n", x2_v);
    } else {
        printf("Delta was negative: %.2f. Roots was complex.\n", delta_value);
        // TODO: Implement complex roots calculation.
    }

    return 0;
}

float delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

float x1(float a, float b, float c) {
    return (-b + sqrt(delta(a, b, c))) / (2 * a);
}

float x2(float a, float b, float c) {
    return (-b - sqrt(delta(a, b, c))) / (2 * a);
}