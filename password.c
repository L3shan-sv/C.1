#include <stdio.h>
#include <string.h> // 1. We must include this library to compare text strings!

int main() {
    char secret[] = "Leshan"; // 2. This is how we store text in C
    char password[50];        // A blank space to hold what the user types
    int tries = 0;

    // 3. We use a while loop so they can retry up to 3 times
    while (tries < 3) {
        printf("Enter password: ");
        scanf("%s", password); // %s is the format specifier for a string/word

        // strcmp(a, b) returns 0 if the two strings are identical!
        if (strcmp(password, secret) == 0) {
            printf("User Authenticated\n");
            return 0; // Exits the program completely because they got it right!
        } 
        else {
            tries++; // Increase tries by 1
            
            if (tries < 3) {
                printf("Password Failed. Remaining tries: %d\n", 3 - tries);
            }
        }
    }

    // 4. If the loop finishes and they never got it right, they hit 3 tries
    printf("Too many tries. Account locked!\n");
    
    return 0;
}