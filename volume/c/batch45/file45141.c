// fichero 45141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45141;

Registro45141 crear_registro45141(int id) {
    Registro45141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45141(Registro45141 r) {
    return r.valor + r.id;
}
