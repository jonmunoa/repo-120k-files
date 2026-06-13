// fichero 23045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23045;

Registro23045 crear_registro23045(int id) {
    Registro23045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23045(Registro23045 r) {
    return r.valor + r.id;
}
