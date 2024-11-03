#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 5
#define MAX_WORD_LENGTH 10
#define INPUT_MAX 50

void analyzeWords(char words[MAX_WORDS][INPUT_MAX], int wordCount);

int main()
{
    printf("Program starting.\n");

    char words[MAX_WORDS][INPUT_MAX];
    int wordCount = 0;

    while (wordCount < MAX_WORDS)
    {
        char input[INPUT_MAX];
        printf("Insert word (empty stops): ");

        if (fgets(input, INPUT_MAX, stdin) != NULL)
        {
            input[strcspn(input, "\n")] = '\0'; // Remove newline character

            // Stop if input is empty
            if (strlen(input) == 0)
            {
                break;
            }

            // Check if word length exceeds the maximum allowed length
            if (strlen(input) > MAX_WORD_LENGTH)
            {
                printf("Word too long, please enter a word with 10 characters or fewer.\n");
                continue;
            }

            // Copy the valid word to the array
            strcpy(words[wordCount], input);
            wordCount++;
        }
    }

    if (wordCount == MAX_WORDS)
    {
        printf("Maximum amount of words inserted.\n\n");
    }

    // Perform analysis and print results
    analyzeWords(words, wordCount);

    printf("Program ending.\n");
    return 0;
}

void analyzeWords(char words[MAX_WORDS][INPUT_MAX], int wordCount)
{
    int totalCharacters = 0;

    // Calculate total characters
    for (int i = 0; i < wordCount; i++)
    {
        totalCharacters += strlen(words[i]);
    }

    float averageWordLength = (wordCount > 0) ? (float)totalCharacters / wordCount : 0;

    // Print analysis
    printf("Analysis:\n");
    printf("- %d Words\n", wordCount);
    printf("- %d Characters\n", totalCharacters);
    printf("- %.2f Average word length\n\n", averageWordLength);
}
