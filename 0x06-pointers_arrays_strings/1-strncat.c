#include <stdlib.h>
#include <time.h>

char *_strncat(char *dest, char *src, int n) {
    int dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + n] = '\0';

    return dest;
}
