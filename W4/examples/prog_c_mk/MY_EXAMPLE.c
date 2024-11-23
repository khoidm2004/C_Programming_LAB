#include <stdio.h>

#include "../py_like/ask_choice.h"
#include "structs/IntList.h"

int main(void)
{
    int newValue = -1;
    IntList intList;
    listInit(&intList, 1);
    printf("Program starting.\n");
    while (newValue != 0)
    {
        askChoice(&newValue);
        printf("%d\n", newValue);
        listAppend(&intList, newValue);
    }
    listPrint(&intList);
    listClear(&intList);
    printf("Program ending.\n");
    return;
}
