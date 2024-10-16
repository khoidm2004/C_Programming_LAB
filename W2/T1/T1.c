#include <stdio.h>

int main(){
    int fnum, snum, result;
    printf("Program starting.\n");
    printf("Insert two integers.\n");
    printf("Insert first integer: ");
    scanf("%d", &fnum);
    printf("Insert second integer: ");
    scanf("%d",&snum);
    printf("Comparing inserted integers.\n");

    if (fnum != snum){
        if(fnum > snum){
            printf("First integer is greater.\n\n");
        }else{
            printf("Second integer is greater.\n\n");
        }
    }else{
        printf("Integers are the same.\n\n");
    }

    result = fnum + snum;
    printf("Adding integers together\n");
    printf("%d + %d = %d\n\n", fnum, snum, result);

    printf("Checking the parity of the sum...\n");

    if(result % 2 == 0){
        printf("Sum is even.\n");
    }else{
        printf("Sum is odd.\n");
    }

    printf("Program ending.\n");
    return 0;
}