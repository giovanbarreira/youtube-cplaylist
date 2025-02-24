/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

#include <stdio.h>

int main() {
    // Open the file for writing
    FILE *file = fopen("agreements.txt", "a");

    // Write "Hello, World!" to the file
    fprintf(file, "Hello, World!\n");

    // Close the file
    fclose(file);

    // Inform the user that the message was written to the file
    printf("Message written to agreements.txt\n");

    return 0;
}