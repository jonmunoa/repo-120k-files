// fichero 32665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32665;

Registro32665 crear_registro32665(int id) {
    Registro32665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32665(Registro32665 r) {
    return r.valor + r.id;
}
