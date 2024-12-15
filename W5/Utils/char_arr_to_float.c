#include "char_arr_to_float.h"

float charArrayToFloat(const char *str) {
    char *endPtr;
    errno = 0;
    float result = strtof(str, &endPtr);
    if (endPtr == str || *endPtr != '\0') { // No conversion or non-numeric
        printf("Conversion error: non-numeric characters found in input.\n");
        result = 0.0f;
    }
    else if (errno == ERANGE) { // overflow or underflow
        if (result == HUGE_VALF) {
            printf("Conversion error: overflow occurred.\n");
        } else if (result == 0.0f) {
            printf("Conversion error: underflow occurred.\n");
        }
        result = 0.0f;  // Or return a specific error code if needed
    }
    return result;
}
