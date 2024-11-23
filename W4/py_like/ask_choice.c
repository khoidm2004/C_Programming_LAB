#include <stdio.h>
#include "input.h"
#include "ask_choice.h"

void askChoice(int *choice) {
    char input[10];
    printf("Your choice: ");
    fgets(input, sizeof(input), stdin);
    // Remove the newline character if present
    input[strcspn(input, "\n")] = 0;
    // Check if the input is numeric
    int is_numeric = 1;
    for (int i = 0; i < strlen(input); i++) {
        // is
        if (!isdigit(input[i])) {
            // isdigit checks whether a given character is decimal digit (0-9)
            is_numeric = 0;
            break;
        }
    }
    if (is_numeric) {
        // Convert input to integer and store in the provided pointer
        *choice = atoi(input);
        // atoi = ASCII to integer function
        // is used to convert a string representing a number into an integer.
        // alternatives:
        // - strtol() 
    } else {
        *choice = -1;
    } // Invalid input
    return;
}
