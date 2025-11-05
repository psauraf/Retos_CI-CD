#include <stdio.h>

// Declaraciones
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

// Implementaciones
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        printf("Error: división entre cero.\n");
        return 0;
    }
    return a / b;
}

#ifndef UNIT_TEST
int main(void) {
    printf("Calculadora inicializada.\n");
    printf("Suma: %d\n", suma(5, 3));
    printf("Resta: %d\n", resta(5, 3));
    printf("Multiplicación: %d\n", multiplicacion(5, 3));
    printf("División: %d\n", division(10, 2));
    return 0;
}
#endif
