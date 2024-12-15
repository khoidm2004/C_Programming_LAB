#ifndef INPUT_H
#define INPUT_H
#include <stdio.h>
#include <string.h>

/**
 * @brief Python like input function in C
 * 
 * It shows the prompt to the user, waits for user input
 * and collects the input from stdin. Then it checks the content and
 * replaces newline character with null terminator if present.
 * 
 * @param prompt to show to the user
 * @param feed buffer to fill with the user input
 * @param feedSize is the provided buffer maximum size
 * 
 * @return void, because the data is filled into the feed buffer
 * 
 * Example usage:
 * 
 * ```
 * 
 * char filenameBuf[256]; // Create char buffer with 256 slots
 * 
 * input("Insert filename: ", filenameBuf, 256); // Use input function with 256 size input buffer
 * 
 * ```
 * 
 * - Output: "Insert filename: "
 * 
 * - Input: "file.txt\n"
 * 
 * - filenameBuf => ['f', 'i', 'l', 'e', '.', 't', 'x', 't', '\0', ...]
 * 
 * @warning the collected max string length is feedSize - 1 (null terminator)
 * 
 */
void input(char *prompt, char *feed, size_t feedSize);

#endif
