#include "calc.h"
#include <stdio.h>

int division(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: división entre cero.\n");
        return 0;
    }
    return a / b;
}
