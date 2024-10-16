#include <stdio.h>

int main()
{
    int start_point, ins_point, stop_point;
    printf("Program starting.\n\n");

    printf("Insert starting point: ");
    scanf("%d", &start_point);

    printf("Insert stopping point: ");
    scanf("%d", &stop_point);

    printf("Insert inspection point: ");
    scanf("%d", &ins_point);

    printf("\n");

    if (stop_point > start_point)
    {
        if (stop_point >= ins_point && ins_point >= start_point)
        {
            int i = 0;
            printf("First loop - inspection with break:\n");
            for (i = start_point; i < ins_point; i++)
            {
                if (i < ins_point - 1)
                {
                    printf("%d ", i);
                }
                else
                {
                    printf("%d", i);
                }
            }

            int j = 0;
            printf("\nSecond loop - inspection with continue:\n");
            for (j = start_point; j < stop_point; j++)
            {
                if (j == ins_point)
                {
                    continue;
                }
                else
                {
                    if (j < stop_point - 1)
                    {
                        printf("%d ", j);
                    }
                    else
                    {
                        printf("%d", j);
                    }
                }
            }
            printf("\n\nProgram ending.");
        }
        else
        {
            printf("Inspection value must be within the range of start and stop.\n\nProgram ending.");
        }
    }
    else
    {
        printf("Starting point value must be less than the stopping point value.\n");
        if (ins_point < start_point || ins_point > stop_point)
        {
            printf("Inspection value must be within the range of start and stop.\n\nProgram ending.");
        }
    }

    return 0;
}