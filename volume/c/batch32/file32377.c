// fichero 32377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32377;

Registro32377 crear_registro32377(int id) {
    Registro32377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32377(Registro32377 r) {
    return r.valor + r.id;
}
