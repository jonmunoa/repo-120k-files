// fichero 48813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48813;

Registro48813 crear_registro48813(int id) {
    Registro48813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48813(Registro48813 r) {
    return r.valor + r.id;
}
