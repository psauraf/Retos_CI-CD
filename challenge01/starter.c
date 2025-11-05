#include <stdio.h>

// Declaración
int suma(int a, int b);

// Implementación
int suma(int a, int b) {
    return a + b;
}

#ifndef UNIT_TEST
int main(void) {
    printf("Resultado: %d\n", suma(2, 3));
    return 0;
}
#endif
