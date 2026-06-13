// fichero 23601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23601;

Registro23601 crear_registro23601(int id) {
    Registro23601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23601(Registro23601 r) {
    return r.valor + r.id;
}
