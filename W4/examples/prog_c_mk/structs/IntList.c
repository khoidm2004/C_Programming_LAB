#include "IntList.h"

void listInit(IntList *list, int initial_capacity)
{
    list->data = (int *)malloc(initial_capacity * sizeof(int));
    list->size = 0;
    list->capacity = initial_capacity;
    return;
}

void listAppend(IntList *list, int value)
{
    if (list->size >= list->capacity)
    {
        list->capacity += 1;
        int *newValue = (int *)realloc(list->data, list->capacity * sizeof(int));
        if (newValue == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        list->data = newValue;
    }
    list->data[list->size++] = value;
    return;
}

void listClear(IntList *list)
{
    free(list->data);
    list->data = NULL;
    list->size = 0;
    list->capacity = 0;
    return;
}

void listPrint(const IntList *list)
{
    printf("List identifier: %p\n", (void *)list->data);
    printf("List size: %d\n", list->size);
    printf("List item: [");
    for (int i = 0; i < list->size; i++)
    {
        if (i == 0)
        {
            printf("%d", list->data[i]);
        }
        else
        {
            printf(" %d", list->data[i]);
        }
    }
    printf("]\n");
    return;
}