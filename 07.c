/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

int main() {
    char comp_name[50];
    int age;
    float height;

    // Ask for the user's name
    printf("Enter your name: ");
    fgets(comp_name, sizeof(comp_name), stdin); // read the line while scanf just read the 1st word

    // Ask for the user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Ask for the user's height
    printf("Enter your height (in m): ");
    scanf("%f", &height);

    // Print the collected information
    printf("Name: %s", comp_name);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);

    return 0;
}