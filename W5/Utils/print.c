#include <stdio.h>
#include <stdarg.h>
#include "print.h"

void print(const char *format, ...) {
    // macro to handle functions that accept a variable number of argumets
    va_list args;
    va_start(args, format);
    // print content
    vprintf(format, args);
    printf("\n");
    // cleanup the va_list after done accessing arguments.
    va_end(args);
    return;
}
