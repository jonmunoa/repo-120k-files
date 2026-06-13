// fichero 32833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32833;

Registro32833 crear_registro32833(int id) {
    Registro32833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32833(Registro32833 r) {
    return r.valor + r.id;
}
