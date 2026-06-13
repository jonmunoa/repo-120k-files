// fichero 42537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42537;

Registro42537 crear_registro42537(int id) {
    Registro42537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42537(Registro42537 r) {
    return r.valor + r.id;
}
