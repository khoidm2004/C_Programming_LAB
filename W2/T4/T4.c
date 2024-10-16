#include <stdio.h>
#include <string.h>

int main()
{
    char F_word[100], S_word[100], character;
    printf("Program starting.\n");
    printf("String comparisons\n");

    printf("Insert first word: ");
    fgets(F_word, 100, stdin);
    F_word[strcspn(F_word, "\n")] = '\0';

    printf("Insert a character: ");
    scanf("%c", &character);
    getchar();

    if (strrchr(F_word, character) == NULL)
    {
        printf("Word \"%s\" doesn't contain character \"%c\"\n", F_word, character);
    }
    else
    {
        printf("Word \"%s\" contains character \"%c\"\n", F_word, character);
    }

    printf("Insert second word: ");
    fgets(S_word, 100, stdin);
    S_word[strcspn(S_word, "\n")] = '\0';

    int check = strcmp(F_word, S_word);
    if (check != 0)
    {
        if (check > 0)
        {
            printf("The second word \"%s\" is before the first word \"%s\" alphabetically.\nProgram ending.\n", S_word, F_word);
        }
        else
        {
            printf("The first word \"%s\" is before the second word \"%s\" alphabetically.\nProgram ending.\n", F_word, S_word);
        }
    }
    else
    {
        printf("Both inserted words are the same alphabetically, \"%s\"Program ending.\n", F_word);
    }

    return 0;
}