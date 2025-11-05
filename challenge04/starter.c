#include "calc.h"
#include <stdio.h>

int main(void) {
    printf("Calculadora modularizada.\n");
    printf("Suma: %d\n", suma(5, 3));
    printf("Resta: %d\n", resta(5, 3));
    printf("Multiplicación: %d\n", multiplicacion(5, 3));
    printf("División: %d\n", division(10, 2));
    return 0;
}
