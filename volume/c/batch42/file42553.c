// fichero 42553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42553;

Registro42553 crear_registro42553(int id) {
    Registro42553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42553(Registro42553 r) {
    return r.valor + r.id;
}
