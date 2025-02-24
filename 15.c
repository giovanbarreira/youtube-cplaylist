/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, e, f;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        e = (-b + sqrt(d)) / (2 * a);
        f = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %.2f\n", e);
        printf("Root 2 = %.2f\n", f);
    } else {
        printf("Delta was negative. Roots was complex.\n");
        // TODO: Implement complex roots calculation.
    }

    return 0;
}
