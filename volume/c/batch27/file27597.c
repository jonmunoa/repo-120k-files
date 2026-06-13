// fichero 27597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27597;

Registro27597 crear_registro27597(int id) {
    Registro27597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27597(Registro27597 r) {
    return r.valor + r.id;
}
