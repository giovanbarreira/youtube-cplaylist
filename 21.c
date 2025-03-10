/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

// Code gen by AI (GitHub Copilot) 
#include <stdio.h>

int main()
{
    char response;

    printf("Do you want to see the message? (y/n): ");
    scanf(" %c", &response);

    if (response == 'y' || response == 'Y') {
        printf("/***********************\n");
        printf(" *                     *\n");
        printf(" *  Code Craft Academy *\n");
        printf(" *        2025         *\n");
        printf(" *                     *\n");
        printf(" ***********************/\n");
    } else {
        printf("Exiting the program.\n");
    }

    return 0;
}