#include <assert.h>
#include <stdio.h>

// Prototipo (la implementación viene de starter.c al compilar las pruebas)
int suma(int a, int b);

static void test_suma_dos_positivos(void) {
    assert(suma(2, 3) == 5);
    assert(suma(100, 23) == 123);
}

static void test_suma_positivo_y_negativo(void) {
    assert(suma(10, -3) == 7);
    assert(suma(-8, 5) == -3);
}

static void test_suma_dos_negativos(void) {
    assert(suma(-4, -6) == -10);
    assert(suma(-100, -1) == -101);
}

int main(void) {
    test_suma_dos_positivos();
    test_suma_positivo_y_negativo();
    test_suma_dos_negativos();
    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}
