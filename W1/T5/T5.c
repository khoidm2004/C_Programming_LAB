#include <stdio.h>

int main()
{
    char name[10];
    int semicolon = 34;
    printf("Program starting.\n");
    printf("Insert name(max. 9 chars): ");
    scanf("%s", name);
    printf("Name is %c%s%c.\n", semicolon, name, semicolon);
    printf("Name array size is %d characters.\n", sizeof(name));
    printf("Program ending.\n");
    return 0;
}