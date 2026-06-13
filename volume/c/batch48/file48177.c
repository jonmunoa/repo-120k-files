// fichero 48177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48177;

Registro48177 crear_registro48177(int id) {
    Registro48177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48177(Registro48177 r) {
    return r.valor + r.id;
}
