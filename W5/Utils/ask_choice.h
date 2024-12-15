#ifndef ASK_CHOICE_H
#define ASK_CHOICE_H
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "input.h"

/**
 * @brief A function which prompts choice.
 * 
 * It initialises input buffer with 10, because the choice is most likely
 * only one positive digit. Then it prompts the user to insert choice 
 * followed by newline removal.
 * 
 * After choice is collected it checks if the inserted value is numeric.
 * If the inserted value is numeric, it will assign it to the provided
 * choice argument. Otherwise -1 value is set to indicate invalid input.
 * 
 * @param choice is the integer which will be assigned based on user choice.
 * 
 * @returns void, because user choice will be stored into the choice memory
 * address. pointer => value.
 * 
 * Example usage:
 * 
 * ```
 * 
 * int choice = -1;
 * 
 * askChoice(&choice);
 * 
 * if (choice == -1) printf("Invalid choice!");
 * 
 * else printf("You chose %d", choice);
 * 
 * ```
 * 
 */
void askChoice(int *choice);

#endif
