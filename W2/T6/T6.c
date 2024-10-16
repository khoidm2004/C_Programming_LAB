#include <stdio.h>

int main()
{
    int integer, choice;
    printf("Program starting.\nTesting decision structures.\nInsert an integer: ");
    scanf("%d", &integer);
    printf("Options:\n1 - In one multi-branched decision\n2 - In multiple independent if-statements\n0 - Exit\nYour choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Using one multi-branched decision structure.\n");
        if (200 > integer && integer >= 100)
        {
            int result = integer + 11;
            printf("Result is %d\n\nProgram ending.\n", result);
        }
        else
        {
            if (400 > integer && integer >= 200)
            {
                int result = integer + 22;
                printf("Result is %d\n\nProgram ending.\n", result);
            }
            else
            {
                int result = integer + 44;
                printf("Result is %d\n\nProgram ending.\n", result);
            }
        }
        break;

    case 2:
        printf("Using multiple independent if-statements structure.\n");
        if (200 > integer && integer >= 100)
        {
            int result = integer + 11;
            printf("Result is %d\n\nProgram ending.\n", result);
        }
        else
        {
            if (400 > integer && integer >= 200)
            {
                int result = integer + 33;
                printf("Result is %d\n\nProgram ending.\n", result);
            }
            else
            {
                int result = integer + 77;
                printf("Result is %d\n\nProgram ending.\n", result);
            }
        }
        break;

    case 0:
        printf("Exiting...\n\nProgram ending.\n");
        break;
    default:
        printf("Unknown option.\n\nProgram ending.\n");
        break;
    }

    return 0;
}