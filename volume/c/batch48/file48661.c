// fichero 48661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48661;

Registro48661 crear_registro48661(int id) {
    Registro48661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48661(Registro48661 r) {
    return r.valor + r.id;
}
