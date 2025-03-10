/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/
#include <stdio.h>

// Define a struct to hold the person's information
struct Person {
    char name[50];
    int age;
    float height;
};

struct Client {
    int id;
    struct Person person;
};

int main() {
    struct Client client;

    // Ask for the client's id
    printf("Enter your client id: ");
    scanf("%d", &client.id);

    // Ask for the client's name
    printf("Enter your name: ");
    getchar(); // To consume the newline character left by the previous scanf
    fgets(client.person.name, sizeof(client.person.name), stdin);

    // Ask for the client's age
    printf("Enter your age: ");
    scanf("%d", &client.person.age);

    // Ask for the client's height
    printf("Enter your height (in m): ");
    scanf("%f", &client.person.height);

    // Print the collected information
    printf("ID: %d\n", client.id);
    printf("Name: %s", client.person.name);
    printf("Age: %d\n", client.person.age);
    printf("Height: %.2f m\n", client.person.height);

    return 0;
}