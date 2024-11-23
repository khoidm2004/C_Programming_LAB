#ifndef INTLIST_H
#define INTLIST_H

#include <stdio.h>
#include <stdlib.h>

// Define struct IntList

typedef struct
{
    int *data;    // Pointer to the array
    int size;     // Number of elements
    int capacity; // Total capacity
} IntList;

/**
 *  @brief Initialize the list with initial given capacity
 *
 * Allocate memory base on the initial capacity
 *
 * @param list Pointer to the IntList struct to initialize
 * @param initial_capacity Initial capacity of the list
 *
 * @return void
 */
void listInit(IntList *list, int initital_capacity);

/**
 * @brief Append a value to the list
 *
 * Adds a new value to the end of the list, reallocating memory
 *
 * @param list Pointer to the IntList struct
 * @param value Value to append to the list
 *
 * @return void
 */
void listAppend(IntList *list, int value);

/**
 * @brief Clean the list
 *
 * Free allocated memory and reset list size and capacity
 *
 * @param list Pointer to the IntList struct
 *
 * @return void
 */
void listClear(IntList *list);

/**
 * @brief Print out the formatted output
 *
 * Prints the identifier, size, and items of the list
 *
 * @param list Pointer to the IntList struct
 *
 * @return void
 */
void listPrint(const IntList *list);

#endif