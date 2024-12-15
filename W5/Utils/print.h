#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdarg.h>

/**
 * @brief Python-like print function.
 * 
 * This function prints formatted output to the console, followed by a
 * newline. It accepts a format string and a variable number of arguments,
 * similar to printf. It uses variable argument macros (va_list, va_start and
 * va_end) to handle the variable number of arguments passed to it.
 * 
 * @param format A C string that contains the format to be followed for
 *               printing. The format string can contain format specifiers
 *               (e.g., %d, %s, %f) just like in printf.
 * @param ...    The variable arguments corresponding to the format specifiers
 *               in the format string.
 * 
 * @note This function internally calls `vprintf()` to handle the formatted
 *       output. After printing, it appends a newline character.
 * 
 * @return This function does not return any value (void).
 * 
 * @example
 * // Example usage:
 * print("Welcome %s!", "John");
 * // Output: Welcome John!
 * 
 */
void print(const char *format, ...);

#endif // PRINT_H
