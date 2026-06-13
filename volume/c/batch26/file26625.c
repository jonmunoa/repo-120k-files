// fichero 26625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26625;

Registro26625 crear_registro26625(int id) {
    Registro26625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26625(Registro26625 r) {
    return r.valor + r.id;
}
