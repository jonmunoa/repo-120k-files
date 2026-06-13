// fichero 23413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23413;

Registro23413 crear_registro23413(int id) {
    Registro23413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23413(Registro23413 r) {
    return r.valor + r.id;
}
