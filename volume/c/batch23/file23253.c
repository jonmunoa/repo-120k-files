// fichero 23253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23253;

Registro23253 crear_registro23253(int id) {
    Registro23253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23253(Registro23253 r) {
    return r.valor + r.id;
}
