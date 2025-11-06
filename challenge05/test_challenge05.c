#include <assert.h>
#include <stdio.h>

int suma(int a, int b);

int suma(int a, int b) {
    return a + b;
}

int main(void) {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}
