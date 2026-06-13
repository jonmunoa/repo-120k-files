// fichero 26833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26833;

Registro26833 crear_registro26833(int id) {
    Registro26833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26833(Registro26833 r) {
    return r.valor + r.id;
}
