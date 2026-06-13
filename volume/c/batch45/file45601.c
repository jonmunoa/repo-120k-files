// fichero 45601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45601;

Registro45601 crear_registro45601(int id) {
    Registro45601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45601(Registro45601 r) {
    return r.valor + r.id;
}
