// fichero 48833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48833;

Registro48833 crear_registro48833(int id) {
    Registro48833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48833(Registro48833 r) {
    return r.valor + r.id;
}
