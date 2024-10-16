#include <stdio.h>
#include <string.h>

int main()
{
    int word_count = 0, char_count = 0;
    char word[100];
    printf("Program starting.\n\n");

    while (1)
    {
        printf("Insert word (empty stops): ");
        fgets(word, 100, stdin); // Use fgets instead of scanf, cuz when user enters nothing scanf will wait to for user to type not null character

        word[strcspn(word, "\n")] = '\0'; // When fgets will automatically retrieve the input & \n, when user press enter
                                          //=> we have to remove it so that infinite loop wont happen

        if (strlen(word) == 0)
        {
            break;
        }
        else
        {
            word_count += 1;
            char_count += strlen(word);
        }
    }

    printf("\nYou inserted:\n");
    printf("- %d words\n", word_count);
    printf("- %d characters\n\n", char_count);

    printf("Program ending.\n");
    return 0;
}