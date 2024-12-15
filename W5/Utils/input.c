#include <stdio.h>
#include <string.h>
#include "input.h"

void input(char *prompt, char *feed, size_t feedSize) {
    if (prompt != NULL) {
        printf("%s", prompt);
    }
    char *result = fgets(feed, feedSize, stdin); // collect input
    if (result != NULL) {
        size_t len = strlen(feed);
        if (len > 0 && feed[len - 1] == '\n') {
            feed[len - 1] = '\0';
        }
    } else {
        feed[0] = '\0';
    }
    return;
}
