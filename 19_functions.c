/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

 #include <stdio.h>
 #include <math.h>
  
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