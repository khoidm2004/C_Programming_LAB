#include <stdio.h>

void askInput(int *width, int *height);
void calArea(float *area, int width, int height);
void printArea(const float *area);

int main(){
    float area;
    int width, height;
    int *pWidth = &width;
    int *pHeight = &height;
    float *pArea = &area;
    printf("Program starting.\n");
    askInput(pWidth, pHeight);
    calArea(pArea, width, height);
    printArea(pArea);
    printf("Program ending.\n");
    return 0;
}

void askInput(int *width, int *height){
    printf("Insert width: ");
    scanf("%d", width);
    printf("Insert height: ");
    scanf("%d", height);
}

void calArea(float *area, int width, int height){
   *area = (float)(width * height);
}

void printArea(const float *area){
    printf("\nArea is %.2f²\n",*area);
}