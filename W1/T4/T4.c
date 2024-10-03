#include<stdio.h>

int main()
{   
    float multiplicant, multiplier, result;
    printf("Program starting.\n");
    printf("Insert multiplicant: ");
    scanf("%f", &multiplicant);
    printf("Insert multiplier: ");
    scanf("%f", &multiplier);
    result = multiplicant * multiplier;
    printf("%.2f * %.2f = %.2f\n", multiplicant,multiplier,result);
    printf("Program ending.\n");
    return 0;
}