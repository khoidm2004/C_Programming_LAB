#include <stdio.h>
#include <string.h>

#define INPUT_MAX 50
#define WORD_LENGTH_MAX 10
#define MAX_WORD 5

void analyzeWord(char words[MAX_WORD][INPUT_MAX], int *pWordCount, int *pCharCount, float *pAverage);

int main()
{
    char words[MAX_WORD][INPUT_MAX];

    int wordCount = 0;
    int *pWordCount = &wordCount;

    int charCount = 0;
    int *pCharCount = &charCount;

    float average;
    float *pAverage = &average;

    printf("Program starting.\n");
    while (wordCount < MAX_WORD)
    {
        char input[INPUT_MAX];
        printf("Insert word(empty stops): ");

        if (fgets(input, INPUT_MAX, stdin) != NULL)
        {
            input[strcspn(input, "\n")] = '\0';

            if (strlen(input) == 0)
            {
                printf("Empty word inserted.\n");
                break;
            }

            if (strlen(input) > WORD_LENGTH_MAX)
            {
                printf("Word is too long! Max word length is 10.\n");
                printf("Word was ignored. Try again.\n");
                continue;
            }

            strcpy(words[wordCount], input);
            wordCount++;
        }
    }
    if (wordCount == MAX_WORD)
    {
        printf("Maximum amount of words inserted.\n");
    }

    analyzeWord(words, pWordCount, pCharCount, pAverage);
    printf("\nProgram ending.\n");
    return 0;
}

void analyzeWord(char words[MAX_WORD][INPUT_MAX], int *pWordCount, int *pCharCount, float *pAverage)
{
    *pCharCount = 0;

    for (int i = 0; i < *pWordCount; i++)
    {
        *pCharCount += strlen(words[i]);
    }

    *pAverage = (*pWordCount > 0) ? (float)(*pCharCount) / (*pWordCount) : 0.00;

    printf("\nAnalysis:\n");
    printf("- %d Words\n", *pWordCount);
    printf("- %d Characters\n", *pCharCount);
    printf("- %.2f Average word length", *pAverage);
};
