// fichero 32405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32405;

Registro32405 crear_registro32405(int id) {
    Registro32405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32405(Registro32405 r) {
    return r.valor + r.id;
}
