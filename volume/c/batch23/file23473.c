// fichero 23473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23473;

Registro23473 crear_registro23473(int id) {
    Registro23473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23473(Registro23473 r) {
    return r.valor + r.id;
}
