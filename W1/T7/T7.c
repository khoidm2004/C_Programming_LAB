#include <stdio.h>

int main()
{
    float minuend, subtrahend, diff;
    printf("Program starting.\n");
    printf("Insert minuend and subtrahend separated by space: ");
    scanf("%f %f", &minuend, &subtrahend);
    diff = minuend - subtrahend;
    printf("Difference is %.2f - %.2f = %.2f\n", minuend, subtrahend, diff);
    printf("Program ending.\n");
    return 0;
}