#ifndef LAB5_MESSAGES_H
#define LAB5_MESSAGES_H

#include "stdio.h"

#define RED "\e[0;31m"
#define GRN "\x1B[92m"
#define WHT "\033[0m"


void throwError(char* error);
void success();
void successMessage(char* message);


#endif
