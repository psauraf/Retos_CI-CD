#include <assert.h>
#include <stdio.h>
#include "calc.h"

static void test_suma(void) {
    assert(suma(2, 3) == 5);
    assert(suma(-2, 3) == 1);
    assert(suma(-2, -3) == -5);
}

static void test_resta(void) {
    assert(resta(5, 3) == 2);
    assert(resta(-5, 3) == -8);
    assert(resta(3, -3) == 6);
}

static void test_multiplicacion(void) {
    assert(multiplicacion(2, 3) == 6);
    assert(multiplicacion(-2, 3) == -6);
    assert(multiplicacion(-2, -3) == 6);
}

static void test_division(void) {
    assert(division(6, 3) == 2);
    assert(division(-6, 3) == -2);
    assert(division(5, 0) == 0); // División por cero
}

int main(void) {
    test_suma();
    test_resta();
    test_multiplicacion();
    test_division();
    printf("✅ Todas las pruebas pasaron correctamente.\n");
    return 0;
}
