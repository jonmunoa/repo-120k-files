// fichero 32885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32885;

Registro32885 crear_registro32885(int id) {
    Registro32885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32885(Registro32885 r) {
    return r.valor + r.id;
}
