// fichero 23525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23525;

Registro23525 crear_registro23525(int id) {
    Registro23525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23525(Registro23525 r) {
    return r.valor + r.id;
}
