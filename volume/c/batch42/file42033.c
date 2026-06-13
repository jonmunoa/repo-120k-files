// fichero 42033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42033;

Registro42033 crear_registro42033(int id) {
    Registro42033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42033(Registro42033 r) {
    return r.valor + r.id;
}
