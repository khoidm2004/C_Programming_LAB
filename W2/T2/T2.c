#include <stdio.h>

int main(){
    int start_point, stop_point, pointer;
    printf("Program starting.\n\n");

    printf("Insert starting point: ");
    scanf("%d",&start_point);

    printf("Insert stopping point: ");
    scanf("%d",&stop_point);

    printf("\nStarting for-loop:\n");
    if(start_point != stop_point){
        if (start_point > stop_point)
        {
            printf("Couldn't run loop. Starting point must be less than stopping point.\nProgram ending.");
        }else{
            for (pointer = start_point; pointer < stop_point; pointer++)
            {
                if(pointer < stop_point -1){
                    printf("%d ",pointer);
                }else{
                    printf("%d",pointer);
                }
            }
            printf("\n\nProgram ending.");
        }
        
    }else{
        printf("Couldn't run loop. Starting point must be less than stopping point.\nProgram ending.");
    }

    return 0;
}