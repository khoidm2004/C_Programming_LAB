#include <stdio.h>
#include <string.h>
#define INPUT_MAX 50

void menuDriven();
void insertWord(char *pWord);
void showWord(char *pWord);
void showRevertWord(char *word);

int main()
{
    printf("Program starting.\n");
    menuDriven();
    printf("Program ending.\n");
    return 0;
}

void menuDriven()
{
    char word[INPUT_MAX] = "";
    char *pWord = word;
    char choice[INPUT_MAX];
    int trigger = 1;
    while (trigger != 0)
    {
        printf("Options:\n1 - Insert word\n2 - Show current word\n3 - Show current word in reverse\n0 - Exit");
        printf("\nYour choice: ");

        if (fgets(choice, INPUT_MAX, stdin) != NULL)
        {
            choice[strcspn(choice, "\n")] = '\0';

            if (strcmp(choice, "0") == 0)
            {
                trigger = 0;
                printf("Exiting program.\n\n");
            }
            else if (strcmp(choice, "1") == 0)
            {
                insertWord(pWord);
                printf("\n");
            }
            else if (strcmp(choice, "2") == 0)
            {
                showWord(pWord);
            }
            else if (strcmp(choice, "3") == 0)
            {
                showRevertWord(word);
            }
            else
            {
                printf("Unknown option! Try again.\n\n");
            }
        }
    }
}

void insertWord(char *pWord)
{
    printf("Insert word: ");
    fgets(pWord, INPUT_MAX, stdin);
    pWord[strcspn(pWord, "\n")] = '\0';
}

void showWord(char *pWord)
{
    int dq = 34;
    printf("Current word - %c%s%c\n\n", dq, pWord, dq);
}

void showRevertWord(char *word)
{
    char reversed[50];
    int dq = 34;
    int first = 0;
    int last = strlen(word) - 1;
    char temp;

    strcpy(reversed, word);

    while (first < last)
    {
        temp = reversed[first];
        reversed[first] = reversed[last];
        reversed[last] = temp;

        first++;
        last--;
    }

    printf("Word reversed - %c%s%c\n\n", dq, reversed, dq);
}