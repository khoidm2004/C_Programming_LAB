#include <stdio.h>
#include <string.h>
#define MAX 29

int main()
{
    char fullName[MAX];
    printf("Program starting.\n");
    printf("Insert full name(max. 28 chars): ");
    fgets(fullName, sizeof(fullName), stdin);
    int len = strlen(fullName);
    if (fullName[len - 1] == '\n')
    {
        fullName[len - 1] = '\0';
    }

    printf("Your name is \"%s\".\n", fullName);
    printf("Program ending.\n");
    return 0;
}