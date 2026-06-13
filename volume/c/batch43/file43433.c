// fichero 43433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43433;

Registro43433 crear_registro43433(int id) {
    Registro43433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43433(Registro43433 r) {
    return r.valor + r.id;
}
