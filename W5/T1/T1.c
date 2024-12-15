#include <stdio.h>
#include <string.h>
#include "T1.h"
#define BUFFER_SIZE 256

void removeNewline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

void askName(struct s_Person *user)
{
    printf("Insert first name: ");
    fgets(user->aFirstName, BUFFER_SIZE, stdin);
    removeNewline(user->aFirstName);
    printf("Insert last name: ");
    fgets(user->aLastName, BUFFER_SIZE, stdin);
    removeNewline(user->aLastName);
}

void greetUser(const struct s_Person *user)
{
    printf("Hello %s %s!", user->aFirstName, user->aLastName);
}

int main(void)
{
    struct s_Person user;
    printf("Program starting.\n");
    askName(&user);
    greetUser(&user);
    printf("\nProgram ending.\n");
    return 0;
}
