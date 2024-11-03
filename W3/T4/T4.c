#include <stdio.h>
#include <string.h>
#define INPUT_MAX 50

void menuDriven();
void showCount(int count);
void increaseCount(int *count);
void resetCount(int *count);

int main()
{
    printf("Program starting.\n");
    menuDriven();
    printf("\nProgram ending.\n");
    return 0;
}

void menuDriven()
{
    int len;
    char input[50];
    int choice;
    int trigger = 1;
    int count = 0;
    int *pCount = &count;

    while (trigger != 0)
    {
        printf("Options:\n1 - Show count\n2 - Increase count\n3 - Reset count\n0 - Exit\n");
        printf("Your choice: ");

        if (fgets(input, INPUT_MAX, stdin) != NULL)
        {
            input[strcspn(input, "\n")] = '\0';

            if (strcmp(input, "0") == 0)
            {
                trigger = 0;
                printf("Exiting program.\n");
            }
            else if (strcmp(input, "1") == 0)
            {
                showCount(count);
            }
            else if (strcmp(input, "2") == 0)
            {
                increaseCount(pCount);
            }
            else if (strcmp(input, "3") == 0)
            {
                resetCount(pCount);
            }
            else
            {
                printf("Unknown option!\n\n");
            }
        }
    }
}

void showCount(int count)
{
    printf("Current count - %d\n\n", count);
}

void increaseCount(int *count)
{
    *count += 1;
    printf("Count increased!\n\n");
}

void resetCount(int *count)
{
    *count = 0;
    printf("Cleared count!\n\n");
}
