#include "Messages.h"

void throwError(char* error) {
    printf("\n%s%s%s\n\n", RED, error, WHT);
}

void success() {
    printf("\n%sSuccess%s\n\n", GRN, WHT);
}

void successMessage(char* message) {
    printf("\n%s%s%s\n\n", GRN, message, WHT);
}