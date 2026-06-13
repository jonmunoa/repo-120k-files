// fichero 16813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16813;

Registro16813 crear_registro16813(int id) {
    Registro16813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16813(Registro16813 r) {
    return r.valor + r.id;
}
