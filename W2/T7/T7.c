#include <stdio.h>

int main()
{
    int choice;
    char name[100];

    printf("Program starting.\nThis is a program with simple menu, where you can choose which operation the program performs.\nBefore the menu, please insert your name: ");
    scanf("%s", &name);

    printf("\nOptions:\n1 - Print welcome message\n0 - Exit\nYour choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
        printf("Exiting...\n\nProgram ending.\n");
        break;

    case 1:
        printf("Welcome %s!\n\nProgram ending.\n", name);
        break;

    default:
        printf("Unknown option.\n\nProgram ending.\n");
        break;
    }
    return 0;
}