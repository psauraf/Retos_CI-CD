#include <stdio.h>
#include <stddef.h>

// Declaraciones
size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

// Implementaciones
size_t mi_strlen(const char *s) {
    size_t len = 0;
    while (s && s[len] != '\0') {
        len++;
    }
    return len;
}

int mi_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char *mi_strcpy(char *dest, const char *src) {
    char *p = dest;
    while ((*p++ = *src++) != '\0');
    return dest;
}

#ifndef UNIT_TEST
int main(void) {
    char origen[] = "Hola";
    char destino[20];
    printf("Funciones de cadenas inicializadas.\n");
    printf("mi_strlen('Hola') = %zu\n", mi_strlen("Hola"));
    printf("mi_strcmp('Hola', 'Hola') = %d\n", mi_strcmp("Hola", "Hola"));
    printf("mi_strcmp('Hola', 'Adios') = %d\n", mi_strcmp("Hola", "Adios"));
    printf("mi_strcpy(destino, origen) = %s\n", mi_strcpy(destino, origen));
    return 0;
}
#endif
