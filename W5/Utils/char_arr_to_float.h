#ifndef CHAR_ARR_TO_FLOAT_H
#define CHAR_ARR_TO_FLOAT_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

/**
 * Converts a character array to a float.
 *
 * @param str - The character array containing the float as text.
 * @return The converted float value. If the conversion fails, returns 0.0f.
 */
float charArrayToFloat(const char *str);

#endif
