#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length, i;
    char password[100];  // Set of characters to be used in the password
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";


    // Taking password length as input from the user
    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(0));  // To generate different random numbers each time

    // Generate password characters one by one
    for(i = 0; i < length; i++) {
        int index = rand() % (sizeof(characters) - 1);
        password[i] = characters[index];
    }

    password[length] = '\0'; // Add null terminator to mark the end of the string

    // Display the generated password
    printf("Generated Password: %s\n", password);

    return 0; // Exit program successfully
}
