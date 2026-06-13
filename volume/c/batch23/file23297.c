// fichero 23297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23297;

Registro23297 crear_registro23297(int id) {
    Registro23297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23297(Registro23297 r) {
    return r.valor + r.id;
}
