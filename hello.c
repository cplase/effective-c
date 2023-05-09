#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // EOF is a macro for any negative integer.
    if (printf("%s\n", "Hello, world!") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}