/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/
#include <stdio.h>
#include <string.h>

int main() {
    char message[20] = "Hello, World!";
    char message2[20] = "Hello, World!";
    char *ptr = message;

    printf("message: %s\n", message);
    printf("message2: %s\n", message2);
    printf("ptr: %s\n", ptr);

    strcpy(message, "Hello, everyone!");

    printf("message: %s\n", message);
    printf("ptr: %s\n", ptr);

    return 0;
}